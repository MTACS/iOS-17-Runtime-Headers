
@interface CKConversationListTipManagerSwift : NSObject {
    void $__lazy_storage_$_pinningConversationTip;
    void $__lazy_storage_$_siriMessageTip;
    void conversationListController;
    void miniTipUIView;
    void presentedTip;
    void tipObservationTasks;
}

@property (nonatomic, retain) UIView *miniTipUIView;
@property (nonatomic) long long presentedTip;

- (void).cxx_destruct;
- (void)conversationListControllerDidAppear;
- (void)conversationListControllerDidDisappear;
- (id)init;
- (id)initWithConversationListController:(id)arg1;
- (id)miniTipUIView;
- (long long)presentedTip;
- (void)setMiniTipUIView:(id)arg1;
- (void)setPresentedTip:(long long)arg1;
- (void)userDidPinConversation;

@end
