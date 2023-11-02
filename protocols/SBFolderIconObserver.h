
@protocol SBFolderIconObserver <SBIconObserver>

@optional

- (void)folderIcon:(SBFolderIcon *)arg1 containedIconAccessoriesDidUpdate:(SBIcon *)arg2;
- (void)folderIcon:(SBFolderIcon *)arg1 containedIconImageDidUpdate:(SBIcon *)arg2;
- (void)folderIcon:(SBFolderIcon *)arg1 containedIconLaunchEnabledDidChange:(SBIcon *)arg2;

@end
