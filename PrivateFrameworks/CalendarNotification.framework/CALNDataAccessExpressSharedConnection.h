
@interface CALNDataAccessExpressSharedConnection : NSObject <CALNDataAccessExpressConnection>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedConnection;

- (void)reportSharedCalendarInviteAsJunkForCalendarWithID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)respondToSharedCalendarInvite:(long long)arg1 forCalendarWithID:(id)arg2 accountID:(id)arg3 queue:(id)arg4 completionBlock:(id /* block */)arg5;

@end
