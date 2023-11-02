
@interface FCSubmitNewsletterPersonalizationVectorCommand : FCCommand {
    NSString * _personalizationVector;
}

@property (nonatomic, retain) NSString *personalizationVector;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersonalizationVector:(id)arg1;
- (id)personalizationVector;
- (void)setPersonalizationVector:(id)arg1;

@end
