
@interface PAEKeyerLumaSetup : NSObject <NSSecureCoding> {
    NSNumber * _lumA;
    NSNumber * _lumB;
    NSNumber * _lumC;
    NSNumber * _lumD;
}

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)interpolateBetween:(id)arg1 withWeight:(float)arg2;
- (bool)isEqualTo:(id)arg1;
- (float)lumA;
- (float)lumB;
- (float)lumC;
- (float)lumD;
- (void)setLumA:(float)arg1;
- (void)setLumANumber:(id)arg1;
- (void)setLumB:(float)arg1;
- (void)setLumBNumber:(id)arg1;
- (void)setLumC:(float)arg1;
- (void)setLumCNumber:(id)arg1;
- (void)setLumD:(float)arg1;
- (void)setLumDNumber:(id)arg1;

@end
