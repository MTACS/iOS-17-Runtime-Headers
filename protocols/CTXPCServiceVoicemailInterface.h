
@protocol CTXPCServiceVoicemailInterface

@required

- (void)getVoicemailInfo:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 10: CTXPCServiceSubscriptionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSNumber *, NSString *, NSError *, void*
- (void)setVisualVoicemailState:(void *)arg1 subscribed:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: CTXPCServiceSubscriptionContext *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
