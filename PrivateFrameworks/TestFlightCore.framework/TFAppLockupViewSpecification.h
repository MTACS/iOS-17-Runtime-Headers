
@interface TFAppLockupViewSpecification : NSObject {
    double  _firstSubtitleLabelBaselineToSecondSubtitleLabelBaseline;
    UIFont * _subtitleLabelFont;
    double  _titleLabelBaselineToFirstSubtitleLabelBaseline;
    UIFont * _titleLabelFont;
}

@property (nonatomic, readonly) double firstSubtitleLabelBaselineToSecondSubtitleLabelBaseline;
@property (nonatomic, readonly) UIColor *iconPlaceholderColor;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } iconSize;
@property (nonatomic, readonly) double paddingBetweenIconAndText;
@property (nonatomic, readonly) UIFont *subtitleLabelFont;
@property (nonatomic, readonly) UIColor *subtitleTextColor;
@property (nonatomic, readonly) double titleLabelBaselineToFirstSubtitleLabelBaseline;
@property (nonatomic, readonly) UIFont *titleLabelFont;
@property (nonatomic, readonly) UIColor *titleTextColor;

- (void).cxx_destruct;
- (id)_createSubtitleLabelFontWithTraitCollection:(id)arg1;
- (id)_createTitleLabelFontWithTraitCollection:(id)arg1;
- (id)_subtitleFontStyle;
- (id)_titleFontStyle;
- (double)firstSubtitleLabelBaselineToSecondSubtitleLabelBaseline;
- (id)iconPlaceholderColor;
- (struct CGSize { double x1; double x2; })iconSize;
- (id)initWithTraitCollection:(id)arg1;
- (double)paddingBetweenIconAndText;
- (id)subtitleLabelFont;
- (id)subtitleTextColor;
- (double)titleLabelBaselineToFirstSubtitleLabelBaseline;
- (id)titleLabelFont;
- (id)titleTextColor;

@end
