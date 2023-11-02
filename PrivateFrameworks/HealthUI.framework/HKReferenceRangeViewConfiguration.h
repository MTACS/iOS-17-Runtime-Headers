
@interface HKReferenceRangeViewConfiguration : NSObject {
    long long  _currentValueNumLinesIfNoRange;
    UIColor * _currentValueTextColor;
    double  _currentValueTextSize;
    double  _currentValueToReferenceValuePadding;
    UIFont * _currentValueUnitFont;
    UIColor * _currentValueUnitTextColor;
    NSString * _currentValueUnitTextStyle;
    UIFont * _currentValueValueFontWithRange;
    UIFont * _currentValueValueFontWithoutRange;
    UIFont * _dynamicTypeAnchorFont;
    bool  _hideReferenceRangeValues;
    double  _horizontalPadding;
    Class  _labelClass;
    NSString * _referenceRangeTextStyle;
    UIColor * _referenceRangeViewBorderColor;
    UIColor * _referenceRangeViewColor;
    double  _referenceRangeViewHeight;
    UIColor * _referenceValueTextColor;
    double  _referenceValueYOffset;
}

@property (nonatomic) long long currentValueNumLinesIfNoRange;
@property (nonatomic, retain) UIColor *currentValueTextColor;
@property (nonatomic) double currentValueTextSize;
@property (nonatomic) double currentValueToReferenceValuePadding;
@property (nonatomic, retain) UIFont *currentValueUnitFont;
@property (nonatomic, retain) UIColor *currentValueUnitTextColor;
@property (nonatomic, copy) NSString *currentValueUnitTextStyle;
@property (nonatomic, retain) UIFont *currentValueValueFontWithRange;
@property (nonatomic, retain) UIFont *currentValueValueFontWithoutRange;
@property (nonatomic, retain) UIFont *dynamicTypeAnchorFont;
@property (nonatomic) bool hideReferenceRangeValues;
@property (nonatomic) double horizontalPadding;
@property (nonatomic) Class labelClass;
@property (nonatomic, copy) NSString *referenceRangeTextStyle;
@property (nonatomic, retain) UIColor *referenceRangeViewBorderColor;
@property (nonatomic, retain) UIColor *referenceRangeViewColor;
@property (nonatomic) double referenceRangeViewHeight;
@property (nonatomic, retain) UIColor *referenceValueTextColor;
@property (nonatomic) double referenceValueYOffset;

+ (id)annotationEmbeddedConfiguration;
+ (id)defaultConfiguration;

- (void).cxx_destruct;
- (long long)currentValueNumLinesIfNoRange;
- (id)currentValueTextColor;
- (double)currentValueTextSize;
- (double)currentValueToReferenceValuePadding;
- (id)currentValueUnitFont;
- (id)currentValueUnitTextColor;
- (id)currentValueUnitTextStyle;
- (id)currentValueValueFontWithRange;
- (id)currentValueValueFontWithoutRange;
- (id)dynamicTypeAnchorFont;
- (bool)hideReferenceRangeValues;
- (double)horizontalPadding;
- (Class)labelClass;
- (id)referenceRangeTextStyle;
- (id)referenceRangeViewBorderColor;
- (id)referenceRangeViewColor;
- (double)referenceRangeViewHeight;
- (id)referenceValueTextColor;
- (double)referenceValueYOffset;
- (void)setCurrentValueNumLinesIfNoRange:(long long)arg1;
- (void)setCurrentValueTextColor:(id)arg1;
- (void)setCurrentValueTextSize:(double)arg1;
- (void)setCurrentValueToReferenceValuePadding:(double)arg1;
- (void)setCurrentValueUnitFont:(id)arg1;
- (void)setCurrentValueUnitTextColor:(id)arg1;
- (void)setCurrentValueUnitTextStyle:(id)arg1;
- (void)setCurrentValueValueFontWithRange:(id)arg1;
- (void)setCurrentValueValueFontWithoutRange:(id)arg1;
- (void)setDynamicTypeAnchorFont:(id)arg1;
- (void)setHideReferenceRangeValues:(bool)arg1;
- (void)setHorizontalPadding:(double)arg1;
- (void)setLabelClass:(Class)arg1;
- (void)setReferenceRangeTextStyle:(id)arg1;
- (void)setReferenceRangeViewBorderColor:(id)arg1;
- (void)setReferenceRangeViewColor:(id)arg1;
- (void)setReferenceRangeViewHeight:(double)arg1;
- (void)setReferenceValueTextColor:(id)arg1;
- (void)setReferenceValueYOffset:(double)arg1;

@end
