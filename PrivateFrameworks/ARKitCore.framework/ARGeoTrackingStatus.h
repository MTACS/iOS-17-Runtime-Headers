
@interface ARGeoTrackingStatus : NSObject <ARDaemonSecureCoding, NSCopying, NSSecureCoding> {
    long long  _accuracy;
    long long  _failureReasons;
    long long  _state;
    long long  _stateReason;
}

@property (nonatomic, readonly) long long accuracy;
@property (nonatomic, readonly) long long failureReasons;
@property (nonatomic) long long state;
@property (nonatomic) long long stateReason;

+ (id)initialStatus;
+ (bool)supportsSecureCoding;

- (long long)accuracy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)failureReasons;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeoTrackingState:(long long)arg1 accuracy:(long long)arg2 stateReason:(long long)arg3 failureReasons:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualPrivate:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setStateReason:(long long)arg1;
- (long long)state;
- (long long)stateReason;

@end
