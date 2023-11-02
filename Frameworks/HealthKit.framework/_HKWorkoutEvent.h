
@interface _HKWorkoutEvent : NSObject <HKPersistableWorkoutEvent, NSSecureCoding> {
    NSDateInterval * _dateInterval;
    NSError * _error;
    long long  _eventType;
    NSDictionary * _metadata;
    NSUUID * _sessionId;
}

@property (nonatomic, readonly, copy) NSDateInterval *dateInterval;
@property (nonatomic, readonly, copy) NSError *error;
@property (nonatomic, readonly) long long eventType;
@property (nonatomic, readonly, copy) NSDictionary *metadata;
@property (nonatomic, readonly, copy) NSUUID *sessionId;
@property (nonatomic, readonly, copy) NSUUID *sessionUUID;
@property (nonatomic, readonly) long long workoutEventType;

+ (long long)internalEventTypeWithPublicEvent:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dateInterval;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (long long)eventType;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventType:(long long)arg1 sessionId:(id)arg2 dateInterval:(id)arg3 metadata:(id)arg4;
- (id)initWithSessionId:(id)arg1 error:(id)arg2;
- (id)initWithWorkoutEventType:(long long)arg1 sessionUUID:(id)arg2 dateInterval:(id)arg3 metadata:(id)arg4 error:(id)arg5;
- (id)metadata;
- (id)sessionId;
- (id)sessionUUID;
- (long long)workoutEventType;

@end
