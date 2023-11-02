
@interface CHSWidgetConfigurationHostsBox : NSObject <NSSecureCoding> {
    NSDictionary * _configurationsByHost;
}

@property (nonatomic, readonly) NSDictionary *configurationsByHost;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)configurationsByHost;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfigurationsByHost:(id)arg1;

@end
