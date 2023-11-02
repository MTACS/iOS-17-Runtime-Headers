
@protocol NEFilterControlExtensionProviderHostProtocol <NEFilterExtensionProviderHostProtocol>

@required

- (void)notifyRulesChanged;
- (void)provideRemediationMap:(NSDictionary *)arg1;
- (void)provideURLAppendStringMap:(NSDictionary *)arg1;

@end
