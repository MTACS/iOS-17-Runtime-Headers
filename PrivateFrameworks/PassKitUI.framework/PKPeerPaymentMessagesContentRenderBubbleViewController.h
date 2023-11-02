
@interface PKPeerPaymentMessagesContentRenderBubbleViewController : PKPeerPaymentMessagesContentBaseViewController {
    PKPeerPaymentBubbleView * _bubbleView;
    PKPeerPaymentMessage * _currentMessage;
    struct CGSize { 
        double width; 
        double height; 
    }  _pendingBubbleViewSize;
    bool  _remoteFetchInProgress;
}

- (void).cxx_destruct;
- (void)_bubbleViewDoubleTapped;
- (void)_bubbleViewLongPressed;
- (void)_bubbleViewPanned;
- (void)_bubbleViewSelected;
- (void)_fetchStatus;
- (bool)_isMessage:(id)arg1 validForTransaction:(id)arg2;
- (bool)_isMessageFromMe:(id)arg1;
- (void)_resizeBubbleViewToReferenceSizeAnimated;
- (void)_resizeBubbleViewToSize:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (id)bubbleView;
- (struct CGSize { double x1; double x2; })contentSizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)generatedSnapshot;
- (void)loadView;
- (void)reloadContent;

@end
