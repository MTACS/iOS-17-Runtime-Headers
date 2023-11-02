
@interface PXCuratedLibraryChapterHeaderLayoutSpec : PXFeatureSpec {
    PXExtendedImageConfiguration * _chevronImageConfiguration;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentInset;
    double  _floatingAppearanceCrossfadeDistance;
    double  _floatingAppearanceCrossfadeDuration;
    double  _floatingAppearanceCrossfadeStartDistance;
    double  _floatingDistanceFromSafeAreaTop;
    double  _floatingFadeOutDistance;
    UIColor * _floatingTitleDeemphasizedColor;
    UIColor * _floatingTitleEmphasizedColor;
    bool  _shouldAbbreviateMonth;
    bool  _shouldAlwaysShowFloatingVersion;
    bool  _shouldFloat;
    double  _spacingBetweenTitleAndChevron;
    double  _spacingBetweenTitleBottomAndNextCardTop;
    double  _spacingBetweenTitleTopAndPreviousCardBottom;
    UIColor * _titleDeemphasizedColor;
    UIColor * _titleEmphasizedColor;
    UIFont * _titleFont;
    double  _titleHeight;
}

@property (nonatomic, readonly) PXExtendedImageConfiguration *chevronImageConfiguration;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentInset;
@property (nonatomic, readonly) double floatingAppearanceCrossfadeDistance;
@property (nonatomic, readonly) double floatingAppearanceCrossfadeDuration;
@property (nonatomic, readonly) double floatingAppearanceCrossfadeStartDistance;
@property (nonatomic, readonly) double floatingDistanceFromSafeAreaTop;
@property (nonatomic, readonly) double floatingFadeOutDistance;
@property (nonatomic, readonly) UIColor *floatingTitleDeemphasizedColor;
@property (nonatomic, readonly) UIColor *floatingTitleEmphasizedColor;
@property (nonatomic, readonly) bool shouldAbbreviateMonth;
@property (nonatomic, readonly) bool shouldAlwaysShowFloatingVersion;
@property (nonatomic, readonly) bool shouldFloat;
@property (nonatomic, readonly) double spacingBetweenTitleAndChevron;
@property (nonatomic, readonly) double spacingBetweenTitleBottomAndNextCardTop;
@property (nonatomic, readonly) double spacingBetweenTitleTopAndPreviousCardBottom;
@property (nonatomic, readonly) UIColor *titleDeemphasizedColor;
@property (nonatomic, readonly) UIColor *titleEmphasizedColor;
@property (nonatomic, readonly) UIFont *titleFont;
@property (nonatomic, readonly) double titleHeight;

- (void).cxx_destruct;
- (id)chevronImageConfiguration;
- (struct CGSize { double x1; double x2; })contentInset;
- (double)floatingAppearanceCrossfadeDistance;
- (double)floatingAppearanceCrossfadeDuration;
- (double)floatingAppearanceCrossfadeStartDistance;
- (double)floatingDistanceFromSafeAreaTop;
- (double)floatingFadeOutDistance;
- (id)floatingTitleDeemphasizedColor;
- (id)floatingTitleEmphasizedColor;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (bool)shouldAbbreviateMonth;
- (bool)shouldAlwaysShowFloatingVersion;
- (bool)shouldFloat;
- (double)spacingBetweenTitleAndChevron;
- (double)spacingBetweenTitleBottomAndNextCardTop;
- (double)spacingBetweenTitleTopAndPreviousCardBottom;
- (id)titleDeemphasizedColor;
- (id)titleEmphasizedColor;
- (id)titleFont;
- (double)titleHeight;

@end
