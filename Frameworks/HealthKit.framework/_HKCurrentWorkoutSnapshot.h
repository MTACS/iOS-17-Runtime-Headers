
@interface _HKCurrentWorkoutSnapshot : NSObject <NSSecureCoding> {
    NSString * _applicationIdentifier;
    NSDate * _builderStartDate;
    HKWorkoutConfiguration * _configuration;
    double  _elapsedTime;
    long long  _internalState;
    bool  _isBuilderPaused;
    NSUUID * _sessionIdentifier;
    long long  _sessionState;
    NSDate * _snapshotDate;
}

@property (nonatomic, readonly, copy) NSString *applicationIdentifier;
@property (nonatomic, readonly, copy) NSDate *builderStartDate;
@property (nonatomic, readonly) HKWorkoutConfiguration *configuration;
@property (nonatomic, readonly) double elapsedTime;
@property (nonatomic, readonly) long long internalState;
@property (nonatomic, readonly) bool isBuilderPaused;
@property (nonatomic, readonly) bool isFirstPartyWorkout;
@property (nonatomic, readonly) NSUUID *sessionIdentifier;
@property (nonatomic, readonly) long long sessionState;
@property (nonatomic, readonly) NSDate *snapshotDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithSessionIdentifier:(id)arg1 workoutConfiguration:(id)arg2 sessionServerState:(long long)arg3 isBuilderPaused:(bool)arg4 applicationIdentifier:(id)arg5 elapsedTime:(double)arg6 snapshotDate:(id)arg7 builderStartDate:(id)arg8;
- (id)applicationIdentifier;
- (id)builderStartDate;
- (id)configuration;
- (id)description;
- (double)elapsedTime;
- (double)elapsedTimeAtDate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)internalState;
- (bool)isBuilderPaused;
- (bool)isFirstPartyWorkout;
- (id)sessionIdentifier;
- (long long)sessionState;
- (id)snapshotDate;
- (long long)state;

@end
