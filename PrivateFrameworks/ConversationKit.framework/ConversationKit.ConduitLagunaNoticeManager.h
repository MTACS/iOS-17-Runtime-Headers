
@interface ConversationKit.ConduitLagunaNoticeManager : NSObject <TUConversationManagerDelegate, TUNeighborhoodActivityConduitDelegate> {
    void callCenter;
    void manager;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  pushBannerInfo;
    void queue;
}

- (void).cxx_destruct;
- (void)conversationManager:(id)arg1 stateChangedForConversation:(id)arg2 fromOldConversation:(id)arg3;
- (id)init;
- (void)neighborhoodActivityConduit:(id)arg1 splitSessionEnded:(id)arg2;
- (void)neighborhoodActivityConduit:(id)arg1 splitSessionStarted:(id)arg2;
- (void)neighborhoodActivityConduit:(id)arg1 suggestionUpdated:(id)arg2;
- (void)neighborhoodActivityConduit:(id)arg1 tvDeviceAppeared:(id)arg2;
- (void)neighborhoodActivityConduit:(id)arg1 tvDeviceDisappeared:(id)arg2;

@end
