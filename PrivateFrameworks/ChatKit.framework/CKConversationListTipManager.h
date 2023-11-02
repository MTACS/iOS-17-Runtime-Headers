
@interface CKConversationListTipManager : NSObject {
    CKConversationListTipManagerSwift * _swiftManager;
}

@property (nonatomic, readonly) long long presentedTip;
@property (nonatomic, retain) CKConversationListTipManagerSwift *swiftManager;

- (void).cxx_destruct;
- (void)conversationListControllerDidAppear;
- (void)conversationListControllerDidDisappear;
- (id)initWithConversationListController:(id)arg1;
- (id)miniTipUIView;
- (long long)presentedTip;
- (void)setSwiftManager:(id)arg1;
- (id)swiftManager;
- (void)userDidPinConversation;

@end
