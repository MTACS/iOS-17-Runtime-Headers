
@protocol ASVWorldGestureRecognizerDelegate <ASVUnifiedGestureRecognizerDelegate>

@required

- (void)worldGestureRecognizer:(void *)arg1 decelerationTranslationDelta:(void *)arg2; // needs 2 arg types, found 1: ASVWorldGestureRecognizer *
- (void)worldGestureRecognizer:(void *)arg1 translatedAssetToScreenPoint:(void *)arg2; // needs 2 arg types, found 1: ASVWorldGestureRecognizer *
- (void)worldGestureRecognizerBeganTranslation:(ASVWorldGestureRecognizer *)arg1;
- (void)worldGestureRecognizerBeganTranslationDeceleration:(ASVWorldGestureRecognizer *)arg1;
- (void)worldGestureRecognizerEndedTranslation:(ASVWorldGestureRecognizer *)arg1;
- (void)worldGestureRecognizerEndedTranslationDeceleration:(ASVWorldGestureRecognizer *)arg1;

@optional

- (void)worldGestureRecognizer:(void *)arg1 levitatedAssetToScreenPoint:(void *)arg2; // needs 2 arg types, found 1: ASVWorldGestureRecognizer *
- (void)worldGestureRecognizerBeganLevitation:(ASVWorldGestureRecognizer *)arg1;
- (void)worldGestureRecognizerEndedLevitation:(ASVWorldGestureRecognizer *)arg1;

@end
