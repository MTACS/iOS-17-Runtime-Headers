
@protocol PKPaymentSetupAssistantContextProtocol <NSObject>

@required

- (bool)allowsCachedCardRequirements;
- (NSData *)externalizedContext;
- (bool)isFollowupAction;
- (void)setExternalizedContext:(NSData *)arg1;
- (unsigned long long)setupAssistant;

@end
