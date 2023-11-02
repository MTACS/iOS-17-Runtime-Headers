
@interface MSMessageLiveLayout : MSMessageLayout <NSSecureCoding> {
    MSMessageTemplateLayout * _alternateLayout;
    NSArray * _requiredCapabilities;
}

@property (nonatomic, readonly) MSMessageTemplateLayout *alternateLayout;
@property (nonatomic, retain) NSArray *requiredCapabilities;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_sanitizedCopy;
- (id)alternateLayout;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAlternateLayout:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)requiredCapabilities;
- (void)setRequiredCapabilities:(id)arg1;

@end
