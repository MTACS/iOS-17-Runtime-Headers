
@interface SFPersonImageView : UIImageView {
    double  _highlightDarkeningAlpha;
    bool  _imageIsSquare;
}

@property (nonatomic) double highlightDarkeningAlpha;
@property (nonatomic) bool imageIsSquare;

+ (id)darkenImage:(id)arg1 toLevel:(double)arg2;

- (double)highlightDarkeningAlpha;
- (bool)imageIsSquare;
- (id)initWithImage:(id)arg1 isSquare:(bool)arg2;
- (void)layoutSubviews;
- (void)setHighlightDarkeningAlpha:(double)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setImageIsSquare:(bool)arg1;

@end
