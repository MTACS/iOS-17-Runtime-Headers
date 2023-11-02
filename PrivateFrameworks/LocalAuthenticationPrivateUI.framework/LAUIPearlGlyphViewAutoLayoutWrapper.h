
@interface LAUIPearlGlyphViewAutoLayoutWrapper : UIView {
    LAUIPearlGlyphView * _glyphView;
}

@property (nonatomic, readonly) LAUIPearlGlyphView *glyphView;

- (void).cxx_destruct;
- (id)glyphView;
- (id)initWithGlyphView:(id)arg1;
- (void)layoutSubviews;

@end
