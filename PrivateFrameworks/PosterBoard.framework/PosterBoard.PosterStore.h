
@interface PosterBoard.PosterStore : NSObject <PBFPosterExtensionDataStoreObserver> {
    void allPosters;
    void currentSelectionIndex;
    void forcePersistSelectionForFocusUpdate;
    void glue;
    void observers;
    void posterFilter;
    void significantEventsCounter;
    void switcherConfig;
}

- (void).cxx_destruct;
- (void)dataStoreDidTearDown;
- (id)init;
- (void)posterExtensionDataStore:(id)arg1 didAddConfiguration:(id)arg2;
- (void)posterExtensionDataStore:(id)arg1 didDeleteConfiguration:(id)arg2;
- (void)posterExtensionDataStore:(id)arg1 didUpdateActiveConfiguration:(id)arg2 associatedConfiguration:(id)arg3;
- (void)posterExtensionDataStore:(id)arg1 didUpdateConfiguration:(id)arg2;
- (void)posterExtensionDataStore:(id)arg1 didUpdateGalleryConfiguration:(id)arg2;
- (void)posterExtensionDataStore:(id)arg1 didUpdateSelectedConfiguration:(id)arg2 associatedConfiguration:(id)arg3;
- (void)posterExtensionDataStore:(id)arg1 didUpdateSnapshotForConfiguration:(id)arg2;
- (void)posterExtensionDataStore:(id)arg1 didUpdateSwitcherConfiguration:(id)arg2;
- (void)posterExtensionDataStore:(id)arg1 posterConfiguration:(id)arg2 didUpdateAssociatedHomeScreenPosterConfigurationTo:(id)arg3;
- (void)posterExtensionDataStoreDidUpdateConfigurations:(id)arg1;

@end
