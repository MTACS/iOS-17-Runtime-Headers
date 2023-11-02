
@interface WFRemoteWidgetConfigurationDefaultValueForParameterResponse : WFRemoteWidgetConfigurationResponse {
    <NSSecureCoding> * _defaultValue;
}

@property (nonatomic, readonly) <NSSecureCoding> *defaultValue;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)defaultValue;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDefaultValue:(id)arg1 error:(id)arg2;

@end
