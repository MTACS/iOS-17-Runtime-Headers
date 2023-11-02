
@interface HDWorkoutSessionConfiguration : NSObject {
    NSArray * _activityConfigurations;
    HDHealthStoreClient * _client;
    NSString * _clientApplicationIdentifier;
    NSString * _clientProcessBundleIdentifier;
    bool  _enableWorkoutChangeDetection;
    bool  _requiresCoreLocationAssertion;
    NSUUID * _sessionIdentifier;
    long long  _sessionType;
    bool  _supports3rdPartyAOT;
    bool  _supportsAppRelaunchForRecovery;
    HKWorkoutConfiguration * _workoutConfiguration;
}

@property (nonatomic, retain) NSArray *activityConfigurations;
@property (nonatomic, readonly) HDHealthStoreClient *client;
@property (nonatomic, readonly, copy) NSString *clientApplicationIdentifier;
@property (nonatomic, readonly, copy) NSString *clientProcessBundleIdentifier;
@property (nonatomic, readonly) bool enableWorkoutChangeDetection;
@property (nonatomic, readonly) bool requiresCoreLocationAssertion;
@property (nonatomic, readonly, copy) NSUUID *sessionIdentifier;
@property (nonatomic, readonly) long long sessionType;
@property (nonatomic, readonly) bool supports3rdPartyAOT;
@property (nonatomic, readonly) bool supportsAppRelaunchForRecovery;
@property (nonatomic, readonly, copy) HKWorkoutConfiguration *workoutConfiguration;

- (void).cxx_destruct;
- (id)activityConfigurations;
- (id)client;
- (id)clientApplicationIdentifier;
- (id)clientProcessBundleIdentifier;
- (bool)enableWorkoutChangeDetection;
- (id)initWithSessionIdentifier:(id)arg1 workoutConfiguration:(id)arg2 sessionType:(long long)arg3 client:(id)arg4 processBundleIdentifier:(id)arg5 applicationIdentifier:(id)arg6 requiresCoreLocationAssertion:(bool)arg7 supportsAppRelaunchForRecovery:(bool)arg8 supports3rdPartyAOT:(bool)arg9 enableWorkoutChangeDetection:(bool)arg10 activityConfigurations:(id)arg11;
- (bool)requiresCoreLocationAssertion;
- (id)sessionIdentifier;
- (long long)sessionType;
- (void)setActivityConfigurations:(id)arg1;
- (bool)supports3rdPartyAOT;
- (bool)supportsAppRelaunchForRecovery;
- (id)workoutConfiguration;

@end
