
@interface AFSiriWorkoutReminder : NSObject <NSCopying, NSSecureCoding> {
    NSString * _predictionIdentifier;
    long long  _predictionType;
    long long  _workoutType;
}

@property (nonatomic, readonly) NSString *predictionIdentifier;
@property (nonatomic, readonly) long long predictionType;
@property (nonatomic, readonly) long long workoutType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredictionIdentifier:(id)arg1 predictionType:(long long)arg2 workoutType:(long long)arg3;
- (id)predictionIdentifier;
- (long long)predictionType;
- (long long)workoutType;

@end
