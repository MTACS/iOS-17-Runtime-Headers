
@interface PXCuratedLibraryShowFiltersActionPerformer : PXCuratedLibraryActionPerformer <PXFilterControllerDelegate> {
    PXUIFilterController * _filterController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PXUIFilterController *filterController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_isAlreadyDone;
- (id)activitySystemImageName;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1 forActivity:(id)arg2;
- (id)contentFilterHiddenTypesForFilterController:(id)arg1;
- (id)filterController;
- (void)filterController:(id)arg1 contentFilterStateChanged:(id)arg2;
- (void)filterControllerDidClose:(id)arg1;
- (id)menuElement;
- (void)performUserInteractionTask;
- (bool)performerResetsAfterCompletion;
- (void)setFilterController:(id)arg1;

@end
