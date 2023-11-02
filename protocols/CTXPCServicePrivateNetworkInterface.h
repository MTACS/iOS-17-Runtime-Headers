
@protocol CTXPCServicePrivateNetworkInterface

@required

- (void)deleteHiddenSims:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)isPrivateNetworkEvaluationNeeded:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)isPrivateNetworkPreferredOverWifi:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CTXPCServiceSubscriptionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)isPrivateNetworkSIM:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CTXPCServiceSubscriptionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)removeGeofenceProfile:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)updateGeofenceProfile:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CTGeofenceProfile *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
