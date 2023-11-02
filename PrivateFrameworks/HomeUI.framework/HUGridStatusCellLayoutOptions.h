
@interface HUGridStatusCellLayoutOptions : HUGridCellLayoutOptions {
    double  _backgroundSize;
    double  _badgeSize;
    UIFont * _descriptionFont;
    double  _descriptionInnerMargin;
    double  _estimatedCellWidth;
    UIFont * _largeDescriptionFont;
    unsigned long long  _numberOfTitleLines;
}

@property (nonatomic) double backgroundSize;
@property (nonatomic, readonly) double backgroundToTitleSpacing;
@property (nonatomic) double badgeSize;
@property (nonatomic, readonly) double cellHeight;
@property (nonatomic, readonly) double cellSpacing;
@property (nonatomic, readonly) double cellToBackgroundHorizontalSpacing;
@property (nonatomic, retain) UIFont *descriptionFont;
@property (nonatomic) double descriptionInnerMargin;
@property (nonatomic) double estimatedCellWidth;
@property (nonatomic, retain) UIFont *largeDescriptionFont;
@property (nonatomic) unsigned long long numberOfTitleLines;

+ (id)defaultOptionsForCellSizeSubclass:(long long)arg1;

- (void).cxx_destruct;
- (double)backgroundSize;
- (double)backgroundToTitleSpacing;
- (struct CGPoint { double x1; double x2; })badgeOffsetForUserInterfaceLayoutDirection:(long long)arg1;
- (double)badgeSize;
- (double)cellHeight;
- (double)cellSpacing;
- (double)cellToBackgroundHorizontalSpacing;
- (double)cellWidthForAttributedTitle:(id)arg1 shortTitle:(id)arg2;
- (double)cellWidthForTitle:(id)arg1 shortTitle:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionFont;
- (double)descriptionInnerMargin;
- (double)estimatedCellWidth;
- (id)largeDescriptionFont;
- (unsigned long long)numberOfTitleLines;
- (void)setBackgroundSize:(double)arg1;
- (void)setBadgeSize:(double)arg1;
- (void)setDescriptionFont:(id)arg1;
- (void)setDescriptionInnerMargin:(double)arg1;
- (void)setEstimatedCellWidth:(double)arg1;
- (void)setLargeDescriptionFont:(id)arg1;
- (void)setNumberOfTitleLines:(unsigned long long)arg1;
- (long long)titleAlignmentForUserInterfaceLayoutDirection:(long long)arg1;

@end
