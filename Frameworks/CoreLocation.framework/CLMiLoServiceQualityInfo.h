
@interface CLMiLoServiceQualityInfo : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _serviceQuality;
    NSArray * _serviceQualityReasons;
}

@property (nonatomic, readonly) unsigned long long serviceQuality;
@property (nonatomic, readonly) NSArray *serviceQualityReasons;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithQuality:(unsigned long long)arg1 andReasons:(id)arg2;
- (unsigned long long)serviceQuality;
- (id)serviceQualityReasons;

@end
