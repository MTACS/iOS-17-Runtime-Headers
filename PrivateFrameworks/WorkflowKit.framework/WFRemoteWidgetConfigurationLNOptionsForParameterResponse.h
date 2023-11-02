
@interface WFRemoteWidgetConfigurationLNOptionsForParameterResponse : WFRemoteWidgetConfigurationResponse {
    LNDynamicOptionsResult * _result;
}

@property (nonatomic, readonly) LNDynamicOptionsResult *result;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResult:(id)arg1 error:(id)arg2;
- (id)result;

@end
