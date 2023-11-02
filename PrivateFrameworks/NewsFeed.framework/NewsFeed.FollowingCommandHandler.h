
@interface NewsFeed.FollowingCommandHandler : NSObject <FCSubscriptionObserving> {
    void commandCenter;
    void followingManager;
    void subscriptionController;
    void userInfo;
}

- (void).cxx_destruct;
- (id)init;
- (void)subscriptionController:(id)arg1 didAddTags:(id)arg2 changeTags:(id)arg3 moveTags:(id)arg4 removeTags:(id)arg5 subscriptionType:(unsigned long long)arg6;

@end
