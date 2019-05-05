void addele()
{
  tree*a=new tree();
  a->left=a->right=NULL;
  cout<<"enter element ";cin>>a->data;
if(root==NULL)
    root=a;
else
{
    queue<tree*>t;
    t.push(root);
    while(!t.empty())
    {
        tree*z=t.front();
        t.pop();
        if(z->left==NULL)
       {z->left=a;return;}
        else
            t.push(z->left);
        if(z->right==NULL)
        {z->right=a;return;}
        else
            t.push(z->right);
    }
}
}
