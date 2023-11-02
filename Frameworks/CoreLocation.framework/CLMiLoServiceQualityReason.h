
@interface CLMiLoServiceQualityReason : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _qualityReasonEnum;
}

@property (nonatomic, readonly) unsigned long long qualityReasonEnum;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithQualityReasonEnum:(unsigned long long)arg1;
- (unsigned long long)qualityReasonEnum;

@end
