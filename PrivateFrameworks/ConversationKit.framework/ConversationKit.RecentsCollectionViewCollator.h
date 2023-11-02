
@interface ConversationKit.RecentsCollectionViewCollator : NSObject <TUConversationManagerDelegate> {
    void $__lazy_storage_$_upcomingSectionItemLimit;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _hasFinishedFirstLoad;
    void conversationManager;
    void dataSource;
    void featureFlags;
    void isFirstLoad;
    void linkController;
    void loadInProgress;
    void messageInboxController;
    void messageInboxSubscription;
    void model;
    void recentCallsDidChangeObserver;
    void recentsController;
    void updateQueue;
    void videoMessageLoadSubscription;
}

- (void).cxx_destruct;
- (void)conversationManager:(id)arg1 addedActiveConversation:(id)arg2;
- (void)conversationManager:(id)arg1 didChangeActivatedLinks:(id)arg2;
- (void)conversationManager:(id)arg1 linkChangedForConversation:(id)arg2;
- (void)conversationManager:(id)arg1 removedActiveConversation:(id)arg2;
- (void)conversationManager:(id)arg1 stateChangedForConversation:(id)arg2;
- (void)dealloc;
- (id)init;

@end
