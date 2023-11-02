
@protocol WFDrawerDragTracking <NSObject>

@required

- (void)beginDragging;
- (void)endDragging;
- (void)endDraggingWithAnimation:(WFDrawerAnimation *)arg1;
- (double)maxTranslationY;
- (double)minTranslationY;
- (void)updateDragForVerticalTranslation:(double)arg1;

@end
