
@protocol CKMessageHighlightButtonDelegate <NSObject>

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })messageHightlightButtonBalloonViewFrame:(CKMessageHighlightButton *)arg1;
- (void)messageHightlightButtonDidFinishAnimating:(CKMessageHighlightButton *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })messageHightlightButtonReplyButtonFrame:(CKMessageHighlightButton *)arg1;
- (BOOL)messageHightlightButtonTranscriptOrientation:(CKMessageHighlightButton *)arg1;
- (void)messageHightlightButtonWasClicked:(CKMessageHighlightButton *)arg1;

@end
