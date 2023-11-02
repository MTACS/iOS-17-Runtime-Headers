
@interface DRSPopulationPingMessage : DRSTaskingSystemMessage

+ (id)messageType;

- (bool)_versionIsSupported:(id)arg1;
- (id)init;
- (id)initWithJSONDict:(id)arg1;

@end
