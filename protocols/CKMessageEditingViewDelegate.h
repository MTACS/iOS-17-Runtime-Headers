
@protocol CKMessageEditingViewDelegate <NSObject>

@required

- (BOOL)messageEditingColor;
- (bool)messageEditingViewBalloonHasTail;
- (void)messageEditingViewConfirmButtonSelected:(CKMessageEditingView *)arg1;
- (void)messageEditingViewDidUpdateBalloonViewContent:(CKMessageEditingView *)arg1;
- (void)messageEditingViewDidUpdateBalloonViewFrame:(CKMessageEditingView *)arg1;
- (double)messageEditingViewDismissAnimationBalloonMaxWidth;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })messageEditingViewDismissAnimationContentInsets;
- (void)messageEditingViewRejectButtonSelected:(CKMessageEditingView *)arg1;

@end
