
@interface INStartCallIntentDonationMetadata : INIntentDonationMetadata {
    double  _callDuration;
    NSNumber * _disconnectedReason;
    NSNumber * _recentCallStatus;
    double  _timeToEstablish;
}

@property (nonatomic) double callDuration;
@property (nonatomic, copy) NSNumber *disconnectedReason;
@property (nonatomic, copy) NSNumber *recentCallStatus;
@property (nonatomic) double timeToEstablish;

+ (Class)_intentClass;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (double)callDuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)disconnectedReason;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)recentCallStatus;
- (void)setCallDuration:(double)arg1;
- (void)setDisconnectedReason:(id)arg1;
- (void)setRecentCallStatus:(id)arg1;
- (void)setTimeToEstablish:(double)arg1;
- (double)timeToEstablish;

@end
