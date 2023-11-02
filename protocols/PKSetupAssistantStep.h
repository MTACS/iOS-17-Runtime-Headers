
@protocol PKSetupAssistantStep <NSObject>

@required

+ (bool)bridgeSetupAssistantNeedsToRunReturningRequirements:(unsigned long long*)arg1;
+ (bool)bridgeSetupAssistantNeedsToRunWithContext:(PKBridgeSetupAssistantContext *)arg1 returningRequirements:(unsigned long long*)arg2;
+ (PKPeerPaymentWebService *)defaultWebServiceForContext:(long long)arg1;
+ (bool)setupAssistantNeedsToRunReturningRequirements:(unsigned long long*)arg1;

- (void)preflightWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
