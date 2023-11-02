
@interface NewsUI2.TagFeedViewerDataManager : NSObject <FCPrivateChannelMembershipObserving> {
    void _request;
    void cloudContext;
    void commandCenter;
    void delegate;
    void issueModelFactory;
    void membershipController;
    void sportsDataService;
    void sportsGraphManager;
    void subscriptionController;
    void tagService;
    void topLevelSportsTags;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)privateChannelMembershipController:(id)arg1 didAddMemberships:(id)arg2 changedMemberships:(id)arg3 removedMemberships:(id)arg4;

@end
