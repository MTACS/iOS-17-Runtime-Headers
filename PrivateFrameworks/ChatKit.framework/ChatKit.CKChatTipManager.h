
@interface ChatKit.CKChatTipManager : NSObject {
    void $__lazy_storage_$_checkInTip;
    void $__lazy_storage_$_undoOrEditMessageTip;
    void chatController;
    void checkInDelegate;
    void checkInTipObservation;
    void checkInTipView;
    void inlineTip;
    void tipObservation;
}

@property (nonatomic) <CKCheckInTipsViewDelegate> *checkInDelegate;
@property (nonatomic, readonly) bool presentingTip;

- (void).cxx_destruct;
- (void)chatControllerDidAppear;
- (void)chatControllerDidDisappear;
- (id)checkInDelegate;
- (void)dismissTipIfPresented;
- (id)init;
- (id)initWithChatController:(id)arg1;
- (void)presentCheckInTip;
- (bool)presentingTip;
- (void)setCheckInDelegate:(id)arg1;
- (void)undoOrEditMessageUsed;

@end
