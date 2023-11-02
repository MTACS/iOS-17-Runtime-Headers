
@interface HKWorkoutSessionTaskConfiguration : HKTaskConfiguration {
    NSArray * _activityConfigurations;
    HKWorkoutActivity * _currentActivity;
    bool  _requiresCoreLocationAssertion;
    bool  _requiresRecovery;
    long long  _sessionType;
    NSUUID * _sessionUUID;
    bool  _shouldStopPreviousSession;
    bool  _supports3rdPartyAOT;
    bool  _supportsAppRelaunchForRecovery;
    HKWorkoutConfiguration * _workoutConfiguration;
}

@property (nonatomic, retain) NSArray *activityConfigurations;
@property (nonatomic, retain) HKWorkoutActivity *currentActivity;
@property (nonatomic) bool requiresCoreLocationAssertion;
@property (nonatomic) bool requiresRecovery;
@property (nonatomic) long long sessionType;
@property (nonatomic, copy) NSUUID *sessionUUID;
@property (nonatomic) bool shouldStopPreviousSession;
@property (nonatomic) bool supports3rdPartyAOT;
@property (nonatomic) bool supportsAppRelaunchForRecovery;
@property (nonatomic, copy) HKWorkoutConfiguration *workoutConfiguration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activityConfigurations;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentActivity;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)requiresCoreLocationAssertion;
- (bool)requiresRecovery;
- (long long)sessionType;
- (id)sessionUUID;
- (void)setActivityConfigurations:(id)arg1;
- (void)setCurrentActivity:(id)arg1;
- (void)setRequiresCoreLocationAssertion:(bool)arg1;
- (void)setRequiresRecovery:(bool)arg1;
- (void)setSessionType:(long long)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setShouldStopPreviousSession:(bool)arg1;
- (void)setSupports3rdPartyAOT:(bool)arg1;
- (void)setSupportsAppRelaunchForRecovery:(bool)arg1;
- (void)setWorkoutConfiguration:(id)arg1;
- (bool)shouldStopPreviousSession;
- (bool)supports3rdPartyAOT;
- (bool)supportsAppRelaunchForRecovery;
- (id)workoutConfiguration;

@end
