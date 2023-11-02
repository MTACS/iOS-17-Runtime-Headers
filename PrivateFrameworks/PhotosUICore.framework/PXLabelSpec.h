
@interface PXLabelSpec : PXViewSpec {
    bool  _adjustsFontSizeToFitWidth;
    bool  _allowTruncation;
    long long  _capitalization;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    long long  _fallbackCapitalization;
    NSDictionary * _fallbackTextAttributes;
    UIFont * _font;
    double  _minimumScaleFactor;
    double  _minimumTruncatedScaleFactor;
    unsigned long long  _numberOfLines;
    long long  _textAlignment;
    NSDictionary * _textAttributes;
    UIColor * _textColor;
    long long  _verticalAlignment;
}

@property (nonatomic) bool adjustsFontSizeToFitWidth;
@property (nonatomic) bool allowTruncation;
@property (nonatomic) long long capitalization;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic) long long fallbackCapitalization;
@property (nonatomic, copy) NSDictionary *fallbackTextAttributes;
@property (nonatomic, copy) UIFont *font;
@property (nonatomic) double minimumScaleFactor;
@property (nonatomic) double minimumTruncatedScaleFactor;
@property (nonatomic) unsigned long long numberOfLines;
@property (nonatomic) long long textAlignment;
@property (nonatomic, copy) NSDictionary *textAttributes;
@property (nonatomic, copy) UIColor *textColor;
@property (nonatomic) long long verticalAlignment;

+ (id)_memoriesLabelSpecForContext:(struct { long long x1; long long x2; long long x3; long long x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; bool x6; })arg1;
+ (id)memoriesLabelSpecForLabelKind:(long long)arg1 descriptor:(struct PXViewSpecDescriptor { long long x1; unsigned long long x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; })arg2 featureSpec:(id)arg3;
+ (id)memoriesLabelSpecForLabelKind:(long long)arg1 tileKind:(long long)arg2 featureSpec:(id)arg3 boundedByRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
+ (id)memoriesLabelSpecForLabelKind:(long long)arg1 tileKind:(long long)arg2 gadgetSpec:(id)arg3 boundedByRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
+ (id)memoriesLabelSpecForLabelKind:(long long)arg1 tileKind:(long long)arg2 specSet:(long long)arg3 variant:(long long)arg4 boundedBy:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 shouldScale:(bool)arg6;
+ (id)px_headerSubtitleLabelSpecForZoomLevel:(long long)arg1 featureSpec:(id)arg2;
+ (id)px_headerTitleLabelSpecForZoomLevel:(long long)arg1 featureSpec:(id)arg2;

- (void).cxx_destruct;
- (bool)adjustsFontSizeToFitWidth;
- (bool)allowTruncation;
- (long long)capitalization;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)fallbackCapitalization;
- (id)fallbackTextAttributes;
- (id)font;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (double)minimumScaleFactor;
- (double)minimumTruncatedScaleFactor;
- (unsigned long long)numberOfLines;
- (void)setAdjustsFontSizeToFitWidth:(bool)arg1;
- (void)setAllowTruncation:(bool)arg1;
- (void)setCapitalization:(long long)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setFallbackCapitalization:(long long)arg1;
- (void)setFallbackTextAttributes:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setMinimumScaleFactor:(double)arg1;
- (void)setMinimumTruncatedScaleFactor:(double)arg1;
- (void)setNumberOfLines:(unsigned long long)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextAttributes:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setVerticalAlignment:(long long)arg1;
- (long long)textAlignment;
- (id)textAttributes;
- (id)textColor;
- (long long)verticalAlignment;

@end
