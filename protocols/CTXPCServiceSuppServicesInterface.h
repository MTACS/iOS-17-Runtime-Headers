
@protocol CTXPCServiceSuppServicesInterface

@required

- (void)fetchCallBarringValue:(void *)arg1 facility:(void *)arg2 callClass:(void *)arg3 password:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: CTXPCServiceSubscriptionContext *, int, int, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)fetchCallForwardingValue:(void *)arg1 reason:(void *)arg2 callClass:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: CTXPCServiceSubscriptionContext *, int, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)fetchCallWaitingValue:(void *)arg1 callClass:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: CTXPCServiceSubscriptionContext *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)fetchCallingLineIdRestrictionValue:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CTXPCServiceSubscriptionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)fetchCallingLinePresentationValue:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CTXPCServiceSubscriptionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)fetchConnectedLineIdRestrictionValue:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CTXPCServiceSubscriptionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)fetchConnectedLinePresentationValue:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CTXPCServiceSubscriptionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)isUnconditionalCallForwardingActive:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CTXPCServiceSubscriptionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)saveCallBarringValue:(void *)arg1 facility:(void *)arg2 callClass:(void *)arg3 enabled:(void *)arg4 password:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 11: CTXPCServiceSubscriptionContext *, int, int, bool, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)saveCallForwardingValue:(void *)arg1 value:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: CTXPCServiceSubscriptionContext *, CTCallForwardingValue *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)saveCallWaitingValue:(void *)arg1 callClass:(void *)arg2 enabled:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: CTXPCServiceSubscriptionContext *, int, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)saveCallingLineIdRestrictionValue:(void *)arg1 restrictionValue:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: CTXPCServiceSubscriptionContext *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
