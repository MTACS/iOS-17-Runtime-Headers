
@protocol CTXPCServiceSMSInterface

@required

- (void)getEmergencyTextNumbers:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CTXPCServiceSubscriptionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getSmsReadyState:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CTXPCServiceSubscriptionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)getSmscAddress:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CTXPCServiceSubscriptionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*

@end
