
@interface CLKFallbackTextProvider : CLKTextProvider {
    NSArray * _textProviders;
}

@property (nonatomic, readonly) NSArray *textProviders;

+ (id)providerWithProviders:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)_updateFrequency;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTextProviders:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)textProviders;
- (long long)timeTravelUpdateFrequency;

@end
