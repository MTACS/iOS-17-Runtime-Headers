
@interface MTRGeneralCommissioningClusterBasicCommissioningInfo : NSObject <NSCopying> {
    NSNumber * _failSafeExpiryLengthSeconds;
    NSNumber * _maxCumulativeFailsafeSeconds;
}

@property (nonatomic, copy) NSNumber *failSafeExpiryLengthSeconds;
@property (nonatomic, copy) NSNumber *maxCumulativeFailsafeSeconds;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)failSafeExpiryLengthSeconds;
- (id)init;
- (id)maxCumulativeFailsafeSeconds;
- (void)setFailSafeExpiryLengthSeconds:(id)arg1;
- (void)setMaxCumulativeFailsafeSeconds:(id)arg1;

@end
