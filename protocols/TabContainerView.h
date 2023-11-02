
@protocol TabContainerView <NSObject>

@required

- (<SFCapsuleCollectionViewToolbarContentProviding> *)alternateToolbarContentProvider;
- (void)setShowsTabGroupSwitcherToolbar:(bool)arg1;
- (bool)showsTabGroupSwitcherToolbar;

@end
