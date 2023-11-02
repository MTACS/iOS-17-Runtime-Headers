
@interface TIAnalyticsMetricsContext : NSObject <NSCopying, NSSecureCoding> {
    NSString * _inputLanguage;
    NSString * _inputRegion;
}

@property (nonatomic, readonly) NSString *inputLanguage;
@property (nonatomic, readonly) NSString *inputLanguageAndRegion;
@property (nonatomic, readonly) NSString *inputRegion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithInputLanguage:(id)arg1 inputRegion:(id)arg2;
- (id)inputLanguage;
- (id)inputLanguageAndRegion;
- (id)inputRegion;
- (bool)isEqual:(id)arg1;

@end
