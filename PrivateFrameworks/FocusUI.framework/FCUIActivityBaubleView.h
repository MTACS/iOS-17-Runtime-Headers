
@interface FCUIActivityBaubleView : UIView <FCUIActivityBaubleLayoutDescribing, FCUIContentSizeCategoryAdjusting> {
    bool  _adjustsFontForContentSizeCategory;
    UIImageView * _glyphImageView;
    double  _maximumPointSize;
    NSString * _preferredContentSizeCategory;
    double  _referenceDimension;
    UIFont * _referenceFont;
    double  _referencePointSize;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double maximumPointSize;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (nonatomic, readonly) double referenceDimension;
@property (nonatomic, readonly) double referencePointSize;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_needsTextAttributesUpdate;
- (double)_scaledValueForValue:(double)arg1;
- (void)_setNeedsTextAttributesUpdate;
- (void)_updateTextAttributes;
- (void)_updateTextAttributesIfNecessary;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (id)initWithBaubleDescription:(id)arg1 shadowAttributes:(struct { float x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; })arg2;
- (void)layoutSubviews;
- (double)maximumPointSize;
- (id)preferredContentSizeCategory;
- (double)referenceDimension;
- (double)referencePointSize;
- (double)scaledValueForValue:(double)arg1;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setPreferredContentSizeCategory:(id)arg1;
- (void)setTintColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)tintColor;

@end
