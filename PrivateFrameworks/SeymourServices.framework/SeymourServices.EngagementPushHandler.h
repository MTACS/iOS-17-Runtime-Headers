
@interface SeymourServices.EngagementPushHandler : NSObject <AMSPushHandlerDelegate> {
    void bagConsumer;
    void delegate;
    void state;
}

- (void).cxx_destruct;
- (id)init;
- (void)pushPayload:(id)arg1 withBadgeRequest:(id)arg2;

@end
