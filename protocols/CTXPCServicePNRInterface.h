
@protocol CTXPCServicePNRInterface

@required

- (void)context:(void *)arg1 getPhoneNumberSignatureWithCompletion:(void *)arg2; // needs 2 arg types, found 8: CTXPCServiceSubscriptionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)getPNRContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CTXPCServiceSubscriptionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CTPNRContextInfo *, NSError *, void*
- (void)isPNRSupported:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CTXPCServiceSubscriptionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)isPhoneNumberCredentialValid:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CTXPCServiceSubscriptionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)issuePNRRequest:(void *)arg1 pnrReqType:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: CTXPCServiceSubscriptionContext *, CTPNRRequestType *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, NSError *, void*

@end
