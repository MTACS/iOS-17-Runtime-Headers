
@interface WFRemoteWidgetConfigurationDefaultLNOptionForParameterResponse : WFRemoteWidgetConfigurationResponse {
    LNDynamicOption * _defaultOption;
}

@property (nonatomic, readonly) LNDynamicOption *defaultOption;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)defaultOption;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDefaultOption:(id)arg1 error:(id)arg2;

@end
