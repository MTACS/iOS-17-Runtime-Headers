
@protocol NPTOCollectionTargetLibraryObserver <NSObject>

@optional

- (void)collectionTargetLibraryDidUpdate:(NPTOCollectionTargetLibrary *)arg1;
- (void)collectionTargetLibrarySyncNeeded:(NPTOCollectionTargetLibrary *)arg1;
- (void)collectionTargetLibrarySyncingDidChange:(NPTOCollectionTargetLibrary *)arg1;

@end
