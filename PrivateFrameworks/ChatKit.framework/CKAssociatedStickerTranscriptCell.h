
@interface CKAssociatedStickerTranscriptCell : CKAssociatedMessageTranscriptCell {
    VKCStickerEffectView * _effectView;
    bool  _gestureRecognizersEnabled;
    UILongPressGestureRecognizer * _longPressGestureRecognizer;
    IMSticker * _sticker;
    UITapGestureRecognizer * _tapGestureRecognizer;
}

@property (nonatomic, retain) VKCStickerEffectView *effectView;
@property (nonatomic) bool gestureRecognizersEnabled;
@property (nonatomic, readonly) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (nonatomic, retain) IMSticker *sticker;
@property (nonatomic, readonly) UITapGestureRecognizer *tapGestureRecognizer;

- (void).cxx_destruct;
- (void)configureForChatItem:(id)arg1 context:(id)arg2;
- (void)doubleTapGestureRecognized:(id)arg1;
- (id)effectView;
- (bool)gestureRecognizersEnabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviewsForAlignmentContents;
- (void)layoutSubviewsForDrawer;
- (void)longPressGestureRecognized:(id)arg1;
- (id)longPressGestureRecognizer;
- (void)performDroppedWiggle:(id /* block */)arg1;
- (void)performHide:(id /* block */)arg1;
- (void)performInsertion:(id /* block */)arg1;
- (void)performReload:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)performReveal:(id /* block */)arg1;
- (void)performWiggleAnimationIfNeeded;
- (void)prepareForReuse;
- (void)setAssociatedItemView:(id)arg1;
- (void)setEffectView:(id)arg1;
- (void)setGestureRecognizersEnabled:(bool)arg1;
- (void)setSticker:(id)arg1;
- (id)sticker;
- (id)tapGestureRecognizer;

@end
