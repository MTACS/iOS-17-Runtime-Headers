
@protocol LAUIPearlGlyphViewDelegate <NSObject>

@required

- (void)pearlGlyphView:(LAUIPearlGlyphView *)arg1 didLayoutContentLayer:(CALayer *)arg2;

@optional

- (void)pearlGlyphViewWillRender:(LAUIPearlGlyphView *)arg1;

@end
