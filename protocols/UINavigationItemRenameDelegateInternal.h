
@protocol UINavigationItemRenameDelegateInternal <UINavigationItemRenameDelegate>

@optional

- (void)_navigationItem:(UINavigationItem *)arg1 fileRenameDidEndWithFinalURL:(NSURL *)arg2;
- (void)_navigationItem:(UINavigationItem *)arg1 fileRenameDidFailWithError:(NSError *)arg2;
- (NSURL *)_navigationItemFileURLForRenaming:(UINavigationItem *)arg1;

@end
