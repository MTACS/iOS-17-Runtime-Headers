
@protocol PKGlyphViewDelegate <NSObject>

@optional

- (void)glyphView:(PKGlyphView *)arg1 revealingCheckmark:(bool)arg2;
- (void)glyphView:(PKGlyphView *)arg1 transitioningToState:(long long)arg2;
- (void)glyphViewUserIntentEdgeDidChange:(PKGlyphView *)arg1;

@end
