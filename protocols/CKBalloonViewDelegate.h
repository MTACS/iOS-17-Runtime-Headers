
@protocol CKBalloonViewDelegate <NSObject>

@required

- (void)balloonView:(CKBalloonView *)arg1 userDidDragOutsideBalloonWithPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)balloonViewDoubleTapped:(CKBalloonView *)arg1;
- (void)balloonViewLongTouched:(CKBalloonView *)arg1;
- (void)balloonViewSelected:(CKBalloonView *)arg1 withModifierFlags:(long long)arg2 selectedText:(NSString *)arg3;
- (void)balloonViewShouldCopyToPasteboard:(CKBalloonView *)arg1;
- (void)balloonViewShowInlineReply:(CKBalloonView *)arg1;
- (void)balloonViewTapped:(CKBalloonView *)arg1 withModifierFlags:(long long)arg2 selectedText:(NSString *)arg3;
- (void)balloonViewTextViewDidChangeSelection:(CKBalloonView *)arg1 selectedText:(NSString *)arg2 textView:(CKBalloonTextView *)arg3;
- (void)interactionStartedFromPreviewItemControllerInBalloonView:(CKBalloonView *)arg1;
- (void)interactionStoppedFromPreviewItemControllerInBalloonView:(CKBalloonView *)arg1;
- (void)liveBalloonTouched:(CKBalloonView *)arg1;

@optional

- (void)audioBalloonScrubberDidChangeValue:(double)arg1;
- (void)audioBalloonScrubberWithRecognizer:(UIPanGestureRecognizer *)arg1 didChangeValue:(double)arg2;
- (void)balloonView:(CKBalloonView *)arg1 willInsertPluginViewAsSubview:(UIView<CKTranscriptPluginView> *)arg2;
- (void)interactionStartedWithPluginBalloonView:(CKBalloonView *)arg1;
- (void)launchReaderViewForBalloonView:(CKBalloonView *)arg1;
- (void)playbackSpeedDidChangeForAudioMessageBalloonView:(CKBalloonView *)arg1 playbackSpeed:(double)arg2;
- (void)reloadLayoutForBalloonView:(CKBalloonView *)arg1;
- (void)tuConversationBalloonJoinButtonTapped:(CKBalloonView *)arg1;

@end
