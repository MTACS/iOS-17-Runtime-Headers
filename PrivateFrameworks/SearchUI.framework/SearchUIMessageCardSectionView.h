
@interface SearchUIMessageCardSectionView : SearchUICardSectionView <CKAudioControllerDelegate, CKBalloonViewDelegate> {
    CKAudioController * _audioController;
    CKBalloonView * _balloonView;
    CKVibrantBalloonContainerView * _vibrantBalloon;
}

@property (nonatomic, retain) CKAudioController *audioController;
@property (nonatomic, retain) CKBalloonView *balloonView;
@property (nonatomic, retain) NUIContainerBoxView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) CKVibrantBalloonContainerView *vibrantBalloon;

+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (void).cxx_destruct;
- (void)audioBalloonScrubberDidChangeValue:(double)arg1;
- (id)audioBalloonViewWithFileURL:(id)arg1;
- (id)audioController;
- (void)audioController:(id)arg1 mediaObjectDidFinishPlaying:(id)arg2;
- (void)audioController:(id)arg1 mediaObjectProgressDidChange:(id)arg2 currentTime:(double)arg3 duration:(double)arg4;
- (id)balloonView;
- (void)balloonView:(id)arg1 userDidDragOutsideBalloonWithPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)balloonViewDoubleTapped:(id)arg1;
- (void)balloonViewLongTouched:(id)arg1;
- (void)balloonViewRequestsDeselection:(id)arg1;
- (void)balloonViewSelected:(id)arg1 toggleSelection:(bool)arg2;
- (void)balloonViewSelected:(id)arg1 withModifierFlags:(long long)arg2 selectedText:(id)arg3;
- (void)balloonViewShouldCopyToPasteboard:(id)arg1;
- (void)balloonViewShowInlineReply:(id)arg1;
- (void)balloonViewTapped:(id)arg1 withModifierFlags:(long long)arg2 selectedText:(id)arg3;
- (void)balloonViewTextViewDidChangeSelection:(id)arg1 selectedText:(id)arg2 textView:(id)arg3;
- (void)didMoveToWindow;
- (void)interactionStartedFromPreviewItemControllerInBalloonView:(id)arg1;
- (void)interactionStoppedFromPreviewItemControllerInBalloonView:(id)arg1;
- (void)liveBalloonTouched:(id)arg1;
- (void)setAudioController:(id)arg1;
- (void)setBalloonView:(id)arg1;
- (void)setVibrantBalloon:(id)arg1;
- (id)setupContentView;
- (id)textBalloonView;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateWithRowModel:(id)arg1;
- (id)vibrantBalloon;

@end
