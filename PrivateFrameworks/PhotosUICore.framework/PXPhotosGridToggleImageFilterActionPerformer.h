
@interface PXPhotosGridToggleImageFilterActionPerformer : PXPhotosGridActionPerformer

+ (bool)canPerformActionType:(id)arg1 withViewModel:(id)arg2;

- (id)activitySystemImageName;
- (id)activityType;
- (id)localizedTitleForUseCase:(unsigned long long)arg1;
- (id)menuElement;
- (long long)menuElementState;
- (void)performUserInteractionTask;

@end
