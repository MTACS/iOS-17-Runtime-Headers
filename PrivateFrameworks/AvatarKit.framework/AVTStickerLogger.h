
@interface AVTStickerLogger : NSObject {
    NSObject<OS_os_log> * _log;
}

@property (nonatomic, readonly) NSObject<OS_os_log> *log;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)log;
- (void)logCompleteBuildingProp:(id)arg1 startedAt:(double)arg2;
- (void)logCompleteExport:(id)arg1 startedAt:(double)arg2;
- (void)logCompletedApplyConfiguration:(id)arg1;
- (void)logConfigurationNotFoundForName:(id)arg1;
- (void)logErrorBuildingProp:(id)arg1;
- (void)logErrorCreatingAssetReader:(id)arg1;
- (void)logErrorShaderModifiers:(id)arg1 cantBeRemovedFromAvatar:(id)arg2 errors:(id)arg3;
- (void)logRemovingShaderModifiers:(id)arg1 fromAvatar:(id)arg2 wereApplied:(bool)arg3;
- (void)logShaderModifier:(id)arg1 appliedToAvatar:(id)arg2 material:(id)arg3;
- (void)logShaderModifier:(id)arg1 notRemovedFromAvatar:(id)arg2 reason:(id)arg3;
- (void)logShaderModifier:(id)arg1 removedFromAvatar:(id)arg2 material:(id)arg3;
- (void)logStartApplyConfiguration:(id)arg1;
- (void)logStartBuildingProp:(id)arg1;
- (void)logStartExport:(id)arg1;

@end
