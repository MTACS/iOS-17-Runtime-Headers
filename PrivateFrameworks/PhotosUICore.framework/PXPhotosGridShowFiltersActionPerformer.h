
@interface PXPhotosGridShowFiltersActionPerformer : PXPhotosGridActionPerformer <PXFilterControllerDelegate> {
    PXUIFilterController * _filterController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PXUIFilterController *filterController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)canPerformActionType:(id)arg1 withViewModel:(id)arg2;

- (void).cxx_destruct;
- (id)activitySystemImageName;
- (id)activityType;
- (id)contentFilterHiddenTypesForFilterController:(id)arg1;
- (id)filterController;
- (void)filterController:(id)arg1 contentFilterStateChanged:(id)arg2;
- (void)filterControllerDidClose:(id)arg1;
- (id)localizedTitleForUseCase:(unsigned long long)arg1;
- (id)menuElement;
- (void)performUserInteractionTask;
- (void)setFilterController:(id)arg1;

@end
