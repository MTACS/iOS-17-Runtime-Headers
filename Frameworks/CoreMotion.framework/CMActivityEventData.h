
@interface CMActivityEventData : NSObject <NSCopying, NSSecureCoding, SRSampleExporting, SRSampling> {
    long long  _action;
    long long  _eventType;
    long long  _reason;
    NSDate * _startDate;
    long long  _workoutType;
}

@property (nonatomic, readonly) long long action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long eventType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long reason;
@property (nonatomic, readonly) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long workoutType;

+ (id)actionName:(long long)arg1;
+ (id)eventTypeName:(long long)arg1;
+ (id)reasonName:(long long)arg1;
+ (bool)supportsSecureCoding;

- (long long)action;
- (id)binarySampleRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)eventType;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 eventType:(long long)arg2 action:(long long)arg3 reason:(long long)arg4 workoutType:(long long)arg5;
- (long long)reason;
- (id)sr_dictionaryRepresentation;
- (id)startDate;
- (long long)workoutType;

@end
