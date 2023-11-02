
@protocol CTXPCServiceSIMToolkitInterface

@required

- (void)cancelSIMToolkitUSSDSessionForContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CTXPCServiceSubscriptionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)getSIMToolkitListItemsForContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CTXPCServiceSubscriptionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CTSIMToolkitItemList *, NSError *, void*
- (void)getSIMToolkitMenuForContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CTXPCServiceSubscriptionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CTSIMToolkitMenu *, NSError *, void*
- (void)getSIMToolkitUSSDStringForContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: CTXPCServiceSubscriptionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, bool, NSError *, void*
- (void)selectSIMToolkitListItemForContext:(void *)arg1 session:(void *)arg2 response:(void *)arg3 index:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: CTXPCServiceSubscriptionContext *, NSNumber *, NSString *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)selectSIMToolkitMenuItemForContext:(void *)arg1 index:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: CTXPCServiceSubscriptionContext *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)sendSIMToolkitBooleanResponseForContext:(void *)arg1 session:(void *)arg2 response:(void *)arg3 yesNo:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: CTXPCServiceSubscriptionContext *, NSNumber *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)sendSIMToolkitDisplayReadyForContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CTXPCServiceSubscriptionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)sendSIMToolkitResponseForContext:(void *)arg1 session:(void *)arg2 response:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: CTXPCServiceSubscriptionContext *, NSNumber *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)sendSIMToolkitStringResponseForContext:(void *)arg1 session:(void *)arg2 response:(void *)arg3 string:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: CTXPCServiceSubscriptionContext *, NSNumber *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)sendSIMToolkitUSSDResponseForContext:(void *)arg1 response:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: CTXPCServiceSubscriptionContext *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)sendSIMToolkitUserActivityForContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CTXPCServiceSubscriptionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
