
@interface WFRemoteWidgetConfigurationOptionsForParameterResponse : WFRemoteWidgetConfigurationResponse {
    INObjectCollection * _options;
}

@property (nonatomic, readonly) INObjectCollection *options;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOptions:(id)arg1 error:(id)arg2;
- (id)options;

@end
