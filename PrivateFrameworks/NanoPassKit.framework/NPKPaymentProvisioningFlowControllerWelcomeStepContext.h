
@interface NPKPaymentProvisioningFlowControllerWelcomeStepContext : NPKPaymentProvisioningFlowStepContext {
    bool  _defaultImagesUsed;
    NSArray * _heroImages;
}

@property (nonatomic) bool defaultImagesUsed;
@property (nonatomic, retain) NSArray *heroImages;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)defaultImagesUsed;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)heroImages;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestContext:(id)arg1;
- (void)setDefaultImagesUsed:(bool)arg1;
- (void)setHeroImages:(id)arg1;

@end
