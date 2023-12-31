
@interface HMDBitRateSetting : HAPNumberParser <NSSecureCoding> {
    unsigned long long  _bitrateSetting;
}

@property (nonatomic, readonly) unsigned long long bitrateSetting;

+ (id)arrayWithSettings:(id)arg1;
+ (bool)supportsSecureCoding;

- (unsigned long long)bitrateSetting;
- (id)description;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBitRateSetting:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTLVData:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
