
@interface STKMSStickerView : MSStickerView {
    <STKMSStickerViewDelegate> * _delegate;
    UILongPressGestureRecognizer * _longPressGestureRecognizer;
}

@property (nonatomic) <STKMSStickerViewDelegate> *delegate;

- (void).cxx_destruct;
- (void)_prepareForReuse;
- (id)delegate;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleLongPress:(id)arg1;
- (void)handleTap:(id)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)startAnimatingWithOffset:(double)arg1;

@end
