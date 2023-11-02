
@protocol SBHLibraryChildViewController <SBIconLocationPresenting, SBIconViewQuerying, SBHLegibility>

@required

- (SBHIconImageCache *)iconImageCache;
- (<SBIconListLayoutProvider> *)listLayoutProvider;
- (void)setIconImageCache:(SBHIconImageCache *)arg1;
- (void)setListLayoutProvider:(id <SBIconListLayoutProvider>)arg1;

@optional

- (SBFolderIconImageCache *)folderIconImageCache;
- (SBIconView *)folderIconViewForIcon:(SBIcon *)arg1 folderRelativeIconIndexPath:(id*)arg2;
- (SBRootFolder *)rootFolder;
- (void)setFolderIconImageCache:(SBFolderIconImageCache *)arg1;
- (void)setRootFolder:(SBRootFolder *)arg1;

@end
