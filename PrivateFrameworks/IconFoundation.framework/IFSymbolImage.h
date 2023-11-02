
@interface IFSymbolImage : IFImage {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _alignmentRect;
    double  _baselineOffset;
    double  _capHeight;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentBounds;
    bool  _flippable;
    double  _fontMatchingScaleFactor;
    struct CGImage { } * _internalCGImage;
    double  _internalScale;
    struct CGSize { 
        double width; 
        double height; 
    }  _internalSize;
    long long  _layoutDirection;
    double  _pointSize;
    double  _referencePointSize;
    unsigned long long  _symbolSize;
    long long  _symbolWeight;
    CUINamedVectorGlyph * _vectorGlyph;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } alignmentRect;
@property (nonatomic, readonly) double baselineOffset;
@property (nonatomic, readonly) double capHeight;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentBounds;
@property (getter=isFlippable, nonatomic, readonly) bool flippable;
@property (nonatomic, readonly) double fontMatchingScaleFactor;
@property (nonatomic, readonly) long long layoutDirection;
@property (nonatomic, readonly) double pointSize;
@property (nonatomic, readonly) double referencePointSize;
@property (nonatomic, readonly) unsigned long long symbolSize;
@property (nonatomic, readonly) long long symbolWeight;
@property (retain) CUINamedVectorGlyph *vectorGlyph;

- (void).cxx_destruct;
- (struct CGImage { }*)CGImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentRect;
- (double)baselineOffset;
- (double)capHeight;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBounds;
- (void)dealloc;
- (double)fontMatchingScaleFactor;
- (id)initWithNamedVectorGlyph:(id)arg1;
- (bool)isFlippable;
- (long long)layoutDirection;
- (double)pointSize;
- (double)referencePointSize;
- (double)scale;
- (void)setVectorGlyph:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (unsigned long long)symbolSize;
- (long long)symbolWeight;
- (id)vectorGlyph;

@end
