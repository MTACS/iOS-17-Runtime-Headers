
@interface CSLPRFDepthAutoLaunchAppSettingKincaidImpl : NSObject <CSLPRFDepthAutoLaunchSettingCoordinatorImpl, CSLPRFTwoWaySyncSettingDelegate> {
    CSLPRFTwoWaySyncSetting * _bundleIDSetting;
    CSLPRFTwoWaySyncSetting * _changeSourceSetting;
    <CSLPRFDepthAutoLaunchSettingCoordinatorImplDelegate> * _delegate;
    CSLPRFTwoWaySyncSetting * _enabledSetting;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, retain) CSLPRFTwoWaySyncSetting *bundleIDSetting;
@property (nonatomic, retain) CSLPRFTwoWaySyncSetting *changeSourceSetting;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSLPRFDepthAutoLaunchSettingCoordinatorImplDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CSLPRFTwoWaySyncSetting *enabledSetting;
@property (readonly) unsigned long long hash;
@property (readonly, copy) CSLPRFDepthAutoLaunchSettings *settings;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_withLock:(id /* block */)arg1;
- (void)applySettings:(id)arg1;
- (id)bundleIDSetting;
- (id)changeSourceSetting;
- (id)delegate;
- (id)enabledSetting;
- (id)init;
- (void)removeLegacySettings;
- (void)setBundleIDSetting:(id)arg1;
- (void)setChangeSourceSetting:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabledSetting:(id)arg1;
- (id)settings;
- (void)twoWaySyncSettingDidUpdate:(id)arg1;

@end
