
@protocol SBRootFolderViewLayoutManager <NSObject>

@required

- (SBRootFolderView *)rootFolderView;
- (void)setRootFolderView:(SBRootFolderView *)arg1;
- (void)setUserInfo:(id)arg1;
- (void)transitionToActive:(bool)arg1 inFolderView:(SBRootFolderView *)arg2 usingAnimator:(id <UIViewImplicitlyAnimating>)arg3;
- (id)userInfo;

@end
