
@interface NTKComplicationVariant : NSObject <NSCopying, NSSecureCoding> {
    long long  _family;
    NTKComplicationMetrics * _metrics;
}

@property (nonatomic, readonly) long long family;
@property (nonatomic, readonly) NTKComplicationMetrics *metrics;

+ (id)defaultVariantForFamily:(long long)arg1 device:(id)arg2;
+ (bool)supportsSecureCoding;
+ (id)variantWithFamily:(long long)arg1 metrics:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)family;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)metrics;

@end
