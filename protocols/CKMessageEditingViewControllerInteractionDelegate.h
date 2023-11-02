
@protocol CKMessageEditingViewControllerInteractionDelegate <NSObject>

@required

- (double)balloonMaxWidthForMessageEditingViewController:(CKMessageEditingViewController *)arg1;
- (bool)messageEditingViewController:(CKMessageEditingViewController *)arg1 balloonHasTailForChatItemGuid:(NSString *)arg2;
- (BOOL)messageEditingViewController:(CKMessageEditingViewController *)arg1 colorForChatItemGuid:(NSString *)arg2;
- (void)messageEditingViewController:(CKMessageEditingViewController *)arg1 confirmedEditWithComposition:(CKComposition *)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })messageEditingViewController:(CKMessageEditingViewController *)arg1 contentInsetsForChatItemGuid:(NSString *)arg2;
- (void)messageEditingViewController:(CKMessageEditingViewController *)arg1 didUpdateFrameForBalloonView:(UIView *)arg2;
- (CKComposition *)messageEditingViewController:(CKMessageEditingViewController *)arg1 originalMessageCompositionForMessageWithGuid:(NSString *)arg2;
- (void)messageEditingViewControllerDidFinishAnimatingOut:(CKMessageEditingViewController *)arg1;
- (void)messageEditingViewControllerIsAnimatingIn:(CKMessageEditingViewController *)arg1;
- (void)messageEditingViewControllerIsAnimatingOut:(CKMessageEditingViewController *)arg1;
- (void)messageEditingViewControllerRequestsDismissal:(CKMessageEditingViewController *)arg1 presentKeyboard:(bool)arg2;
- (void)messageEditingViewControllerWillAnimateOut:(CKMessageEditingViewController *)arg1;
- (NSDictionary *)proofReadingInfoForMessageEditingViewController:(CKMessageEditingViewController *)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })transcriptContentInsetsForMessageEditingViewController:(CKMessageEditingViewController *)arg1;

@end
