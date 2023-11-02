
@interface IMChatTranscriptItemExtendedLayoutAttributes : IMChatTranscriptItemLayoutAttributes {
    struct CGSize { 
        double width; 
        double height; 
    }  _drawableSize;
    long long  _layoutOrientation;
    double  _topMargin;
}

@property (nonatomic) struct CGSize { double x1; double x2; } drawableSize;
@property (nonatomic) long long layoutOrientation;
@property (nonatomic) double topMargin;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGSize { double x1; double x2; })drawableSize;
- (long long)layoutOrientation;
- (void)setDrawableSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLayoutOrientation:(long long)arg1;
- (void)setTopMargin:(double)arg1;
- (double)topMargin;

@end
