
@interface CSLPRFDepthAutoLaunchAppSetting : NSObject <CSLPRFDepthAutoLaunchSettingCoordinatorImplDelegate> {
    <CSLPRFDepthAutoLaunchSettingCoordinatorImpl> * _coordinator;
    <CSLPRFDepthAutoLaunchAppSettingDelegate> * _delegate;
    long long  _version;
}

@property (nonatomic, readonly) <CSLPRFDepthAutoLaunchSettingCoordinatorImpl> *coordinator;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSLPRFDepthAutoLaunchAppSettingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) CSLPRFDepthAutoLaunchSettings *settings;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long version;

+ (long long)preferredVersion;

- (void).cxx_destruct;
- (void)autoLaunchSettingCoordinator:(id)arg1 didUpdateSettings:(id)arg2;
- (id)coordinator;
- (id)delegate;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)initWithVersion:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (id)settings;
- (void)updateSettingsWithBlock:(id /* block */)arg1;
- (long long)version;

@end
