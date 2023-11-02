
@interface SiriFindMy.FindFriendIntentHandler : NSObject <FindFriendIntentHandling> {
    void deviceState;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  sessionManager;
    void siriEnvironment;
}

- (void).cxx_destruct;
- (void)confirmFindFriend:(id)arg1 completion:(id /* block */)arg2;
- (void)handleFindFriend:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)resolveFriendForFindFriend:(id)arg1 withCompletion:(id /* block */)arg2;

@end
