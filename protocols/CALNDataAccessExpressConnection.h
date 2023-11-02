
@protocol CALNDataAccessExpressConnection <NSObject>

@required

- (void)reportSharedCalendarInviteAsJunkForCalendarWithID:(void *)arg1 accountID:(void *)arg2 queue:(void *)arg3 completionBlock:(void *)arg4; // needs 4 arg types, found 11: NSString *, NSString *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSError *, void*
- (void)respondToSharedCalendarInvite:(void *)arg1 forCalendarWithID:(void *)arg2 accountID:(void *)arg3 queue:(void *)arg4 completionBlock:(void *)arg5; // needs 5 arg types, found 12: long long, NSString *, NSString *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSError *, void*

@end
