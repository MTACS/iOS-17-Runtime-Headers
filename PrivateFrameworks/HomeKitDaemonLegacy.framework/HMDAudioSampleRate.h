
@interface HMDAudioSampleRate : HAPNumberParser <NSSecureCoding> {
    unsigned long long  _sampleRate;
}

@property (nonatomic, readonly) unsigned long long sampleRate;

+ (id)arrayWithRates:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)description;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSampleRate:(unsigned long long)arg1;
- (id)initWithTLVData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)sampleRate;

@end
