
@interface IDSMessagingCapabilities : NSObject <NSSecureCoding> {
    NSSet * _requiredCapabilities;
    NSSet * _requiredMissingCapabilities;
}

@property (nonatomic, retain) NSSet *requiredCapabilities;
@property (nonatomic, retain) NSSet *requiredMissingCapabilities;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequiredCapabilities:(id)arg1 requiredMissingCapabilities:(id)arg2;
- (id)requiredCapabilities;
- (id)requiredMissingCapabilities;
- (void)setRequiredCapabilities:(id)arg1;
- (void)setRequiredMissingCapabilities:(id)arg1;

@end
