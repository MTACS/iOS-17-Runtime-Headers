
@interface WFRemoteWidgetConfigurationLNActionMetadataResponse : WFRemoteWidgetConfigurationResponse {
    LNActionMetadata * _metadata;
}

@property (nonatomic, readonly) LNActionMetadata *metadata;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMetadata:(id)arg1 error:(id)arg2;
- (id)metadata;

@end
