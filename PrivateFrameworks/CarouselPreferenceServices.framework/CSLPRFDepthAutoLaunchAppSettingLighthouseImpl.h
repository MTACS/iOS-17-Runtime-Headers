
@interface CSLPRFDepthAutoLaunchAppSettingLighthouseImpl : NSObject <CSLPRFDepthAutoLaunchSettingCoordinatorImpl, CSLPRFTwoWaySyncSettingDelegate> {
    <CSLPRFDepthAutoLaunchSettingCoordinatorImplDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    CSLPRFDepthAutoLaunchSettings * _settings;
    NSDictionary * _underlyingDictionary;
    CSLPRFTwoWaySyncSetting * _underlyingSetting;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSLPRFDepthAutoLaunchSettingCoordinatorImplDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) CSLPRFDepthAutoLaunchSettings *settings;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CSLPRFTwoWaySyncSetting *underlyingSetting;

+ (id)dictionaryForSettings:(id)arg1;
+ (id)settingsForDictionary:(id)arg1;

- (void).cxx_destruct;
- (void)_updateWithDictionary:(id)arg1;
- (void)applySettings:(id)arg1;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)settings;
- (void)twoWaySyncSettingDidUpdate:(id)arg1;
- (id)underlyingSetting;

@end
