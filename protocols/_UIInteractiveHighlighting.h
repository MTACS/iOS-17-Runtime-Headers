
@protocol _UIInteractiveHighlighting <NSObject>

@required

- (void)_highlightForInteraction:(id <UIInteraction>)arg1 fractionComplete:(double)arg2 ended:(bool)arg3;

@optional

- (void)_highlightDidEndForInteraction:(id <UIInteraction>)arg1;
- (bool)_highlightsAlongsideDefaultEffect;
- (long long)_preferredHighlightAnimationStyleForInteraction:(id <UIInteraction>)arg1;
- (void)_prepareHighlightForInteraction:(id <UIInteraction>)arg1;

@end
