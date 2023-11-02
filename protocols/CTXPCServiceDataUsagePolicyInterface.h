
@protocol CTXPCServiceDataUsagePolicyInterface

@required

- (void)getLocalPolicies:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CTDataUsagePoliciesWrapper *, NSError *, void*
- (void)getRemotePolicies:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CTDataUsagePoliciesWrapper *, NSError *, void*
- (void)performNetworkAccessFlowIfAllowed:(void *)arg1 ignoreForeground:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CTDataUsagePolicies *, NSError *, void*
- (void)removePoliciesFromLocalDevice:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setLocalPolicies:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CTDataUsagePoliciesWrapper *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setRemotePolicies:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CTDataUsagePoliciesWrapper *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
