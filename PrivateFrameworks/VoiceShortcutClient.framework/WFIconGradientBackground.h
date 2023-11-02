
@interface WFIconGradientBackground : WFIconBackground {
    WFGradient * _gradient;
}

@property (nonatomic, readonly) WFGradient *gradient;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)gradient;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithGradient:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
