
@interface CLKUICurvedLabel : UILabel <CLKUILabel> {
    double  _animationAlpha;
    NSAttributedString * _attributedStringUnmodified;
    NSAttributedString * _attributedStringWithoutColorModification;
    bool  _attributedTextProvidesColor;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cachedBounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cachedGlyphsBoundingRect;
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedSize;
    bool  _cachedSizeIsValid;
    double  _centerAngle;
    double  _circleRadius;
    UIFont * _font;
    bool  _hasMonospacedNumbers;
    double  _imagePadding;
    unsigned long long  _imagePlacement;
    UIView * _imageView;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageViewOverrideSize;
    bool  _interior;
    NSNumber * _isTextTruncated;
    NSLayoutManager * _layoutManager;
    double  _maxAngularWidth;
    double  _maxTextWidth;
    bool  _storageIsEmpty;
    bool  _storageIsNonAttributedText;
    UIColor * _textColor;
    NSTextContainer * _textContainer;
    NSTextStorage * _textStorage;
    double  _tracking;
    double  _viewAlpha;
}

@property (nonatomic, readonly) double _lastLineBaseline;
@property (nonatomic) double animationAlpha;
@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic) bool attributedTextProvidesColor;
@property (nonatomic) double centerAngle;
@property (nonatomic) double circleRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIFont *font;
@property (readonly) unsigned long long hash;
@property (nonatomic) double imagePadding;
@property (nonatomic) unsigned long long imagePlacement;
@property (nonatomic) UIView *imageView;
@property (nonatomic) struct CGSize { double x1; double x2; } imageViewOverrideSize;
@property (nonatomic) bool interior;
@property (nonatomic, readonly) bool isTextTruncated;
@property (nonatomic) double maxAngularWidth;
@property (nonatomic, readonly) double maxLinearTextWidth;
@property (nonatomic, readonly) double maxLinearWidth;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } opticalInsets;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long textAlignment;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } textBoundingRect;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic) double tracking;

- (void).cxx_destruct;
- (double)_distance;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_drawableCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1;
- (void)_enumerateTransforms:(bool)arg1 callback:(id /* block */)arg2;
- (void)_enumerateTransformsForDrawableCharacters:(id /* block */)arg1;
- (double)_extraWidthForImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_glyphsBoundingRect;
- (bool)_hasImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_imageBounds;
- (double)_lastLineBaseline;
- (struct __CTLine { }*)_newLineFromDrawableTextStorage;
- (struct CGPoint { double x1; double x2; })_offsetOfBoundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_setAttributedText:(id)arg1;
- (void)_transformForImage:(id /* block */)arg1;
- (void)_updateMaxSize;
- (void)_updateTextColor;
- (void)_updateTracking;
- (double)alpha;
- (double)animationAlpha;
- (id)attributedText;
- (bool)attributedTextProvidesColor;
- (double)centerAngle;
- (struct CGPoint { double x1; double x2; })centerForImage;
- (double)circleRadius;
- (void)dealloc;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)font;
- (void)getTextCenter:(struct CGPoint { double x1; double x2; }*)arg1 startAngle:(double*)arg2 endAngle:(double*)arg3;
- (double)imagePadding;
- (unsigned long long)imagePlacement;
- (id)imageView;
- (struct CGSize { double x1; double x2; })imageViewOverrideSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)interior;
- (void)invalidateCachedSize;
- (bool)isTextTruncated;
- (void)layoutSubviews;
- (double)maxAngularWidth;
- (double)maxLinearTextWidth;
- (double)maxLinearWidth;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })opticalInsets;
- (void)setAlpha:(double)arg1;
- (void)setAnimationAlpha:(double)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setAttributedTextProvidesColor:(bool)arg1;
- (void)setCenterAngle:(double)arg1;
- (void)setCircleRadius:(double)arg1;
- (void)setFont:(id)arg1;
- (void)setImagePadding:(double)arg1;
- (void)setImagePlacement:(unsigned long long)arg1;
- (void)setImageView:(id)arg1;
- (void)setImageView:(id)arg1 placement:(unsigned long long)arg2 padding:(double)arg3;
- (void)setImageViewOverrideSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setInterior:(bool)arg1;
- (void)setMaxAngularWidth:(double)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (void)setText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTracking:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)text;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textBoundingRect;
- (id)textColor;
- (double)tracking;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForImage;

@end
