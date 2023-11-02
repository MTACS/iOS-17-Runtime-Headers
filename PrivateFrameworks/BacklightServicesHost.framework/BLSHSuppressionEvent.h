
@interface BLSHSuppressionEvent : NSObject {
    unsigned long long  _machContinuousTimestamp;
    unsigned long long  _reason;
    unsigned long long  _type;
}

@property (nonatomic, readonly) unsigned long long machContinuousTimestamp;
@property (nonatomic, readonly) unsigned long long reason;
@property (getter=wantsSuppression, nonatomic, readonly) bool suppression;
@property (nonatomic, readonly) unsigned long long type;

- (id)description;
- (id)initWithCoreMotionEvent:(id)arg1 timestamp:(unsigned long long)arg2;
- (id)initWithType:(unsigned long long)arg1 reason:(unsigned long long)arg2 timestamp:(unsigned long long)arg3;
- (unsigned long long)machContinuousTimestamp;
- (unsigned long long)reason;
- (unsigned long long)type;
- (bool)wantsSuppression;

@end
