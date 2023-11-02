
@protocol SBHLibraryPodFolderControllerDelegate <NSObject>

@required

- (void)libraryPodFolderController:(SBHLibraryPodFolderController *)arg1 willLayoutDisplayedCategories:(unsigned long long)arg2;
- (void)libraryPodFolderControllerRequestsDismissal:(SBHLibraryPodFolderController *)arg1;

@end
