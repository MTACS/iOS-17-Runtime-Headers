
@interface CSLPRFStingConfiguration : NSObject <CSLPRFDepthAutoLaunchAppSettingDelegate, CSLPRFStingConfigurationProviding, CSLPRFTwoWaySyncSettingDelegate> {
    CSLPRFStingConfigurationHistory * _configurationHistory;
    <CSLPRFStingConfigurationDelegate> * _delegate;
    CSLPRFDepthAutoLaunchAppSetting * _depthSetting;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    CSLPRFTwoWaySyncSetting * _stingSettings;
}

@property (nonatomic) unsigned long long actionType;
@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, readonly) CSLPRFStingConfigurationHistory *configurationHistory;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <CSLPRFStingConfigurationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isActionNone;
@property (nonatomic, readonly) bool isActionSet;
@property (nonatomic) long long source;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *workoutIdentifier;

- (void).cxx_destruct;
- (id)_lock_settingsDictionary;
- (void)_withLock:(id /* block */)arg1;
- (unsigned long long)actionType;
- (id)bundleID;
- (id)configurationHistory;
- (id)delegate;
- (void)depthAutoLaunchAppSettingDidUpdate:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (bool)isActionNone;
- (bool)isActionSet;
- (bool)isEnabled;
- (void)reset;
- (void)setActionType:(unsigned long long)arg1;
- (void)setBundleID:(id)arg1;
- (void)setConfigurationForBundleID:(id)arg1 actionType:(unsigned long long)arg2 identifier:(id)arg3 source:(long long)arg4;
- (void)setDelegate:(id)arg1;
- (void)setSource:(long long)arg1;
- (void)setWorkoutIdentifier:(id)arg1;
- (long long)source;
- (void)twoWaySyncSettingDidUpdate:(id)arg1;
- (id)workoutIdentifier;

@end
