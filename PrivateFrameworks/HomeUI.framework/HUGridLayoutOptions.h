
@interface HUGridLayoutOptions : NSObject <HUGridDisplayOptions, NSCopying> {
    HUGridBannerCellLayoutOptions * _bannerCellOptions;
    HUGridCameraCellLayoutOptions * _cameraCellOptions;
    double  _columnSpacing;
    unsigned long long  _columnStyle;
    unsigned long long  _contentColorStyle;
    NSString * _contentSizeCategory;
    bool  _editing;
    HUFilterCategoryCellLayoutOptions * _filterCategoryCellOptions;
    double  _headlineBaselineToSceneHeaderBaselineDistance;
    HUGridHeadlineCellLayoutOptions * _headlineCellOptions;
    UIFont * _headlineFont;
    bool  _headlineHidden;
    HUGridMediaPlatterCellLayoutOptions * _mediaPlatterCellOptions;
    double  _minimumMarginBelowHeadline;
    HUMosaicCameraCellLayoutOptions * _mosaicCameraCellOptions;
    long long  _numberOfCameraCellsPerRow;
    NSNumber * _overrideNumberOfColumns;
    NSNumber * _overrideViewSizeSubclass;
    HUGridScenePlaceholderLayoutOptions * _placeholderSceneCellOptions;
    HUGridPlaceholderServiceCellLayoutOptions * _placeholderServiceCellOptions;
    double  _rowSpacing;
    HUGridSceneCellLayoutOptions * _sceneCellOptions;
    long long  _scrollDirection;
    double  _sectionBottomMargin;
    double  _sectionBottomToNextSectionTitleBaselineDistance;
    UIFont * _sectionHeaderFont;
    double  _sectionLeadingMargin;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _sectionTitleMargin;
    double  _sectionTopMargin;
    double  _sectionTrailingMargin;
    HUGridServiceCellLayoutOptions * _serviceCellOptions;
    HUGridStatusCellLayoutOptions * _statusCellOptions;
    bool  _statusHidden;
    struct CGSize { 
        double width; 
        double height; 
    }  _viewSize;
    HUGridWelcomeUIBannerCellLayoutOptions * _welcomeUIBannerCellOptions;
}

@property (nonatomic, copy) HUGridBannerCellLayoutOptions *bannerCellOptions;
@property (nonatomic, readonly) double cameraCellHeight;
@property (nonatomic, copy) HUGridCameraCellLayoutOptions *cameraCellOptions;
@property (nonatomic, readonly) double cameraCellWidth;
@property (nonatomic, readonly) long long cellSizeSubclass;
@property (nonatomic) double columnSpacing;
@property (nonatomic) unsigned long long columnStyle;
@property (nonatomic) unsigned long long contentColorStyle;
@property (nonatomic) NSString *contentSizeCategory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEditing, nonatomic) bool editing;
@property (nonatomic, copy) HUFilterCategoryCellLayoutOptions *filterCategoryCellOptions;
@property (nonatomic, readonly) double fixedWidthForCell;
@property (nonatomic, readonly) double gutter;
@property (readonly) unsigned long long hash;
@property (nonatomic) double headlineBaselineToSceneHeaderBaselineDistance;
@property (nonatomic, readonly) double headlineCellHeight;
@property (nonatomic, copy) HUGridHeadlineCellLayoutOptions *headlineCellOptions;
@property (nonatomic, retain) UIFont *headlineFont;
@property (nonatomic) bool headlineHidden;
@property (nonatomic, readonly) double largeTitleCellTopMargin;
@property (nonatomic, copy) HUGridMediaPlatterCellLayoutOptions *mediaPlatterCellOptions;
@property (nonatomic) double minimumMarginBelowHeadline;
@property (nonatomic, copy) HUMosaicCameraCellLayoutOptions *mosaicCameraCellOptions;
@property (nonatomic, readonly) long long numberOfCameraCellsPerRow;
@property (nonatomic, readonly) long long numberOfColumns;
@property (nonatomic, retain) NSNumber *overrideNumberOfColumns;
@property (nonatomic, retain) NSNumber *overrideViewSizeSubclass;
@property (nonatomic, copy) HUGridScenePlaceholderLayoutOptions *placeholderSceneCellOptions;
@property (nonatomic, copy) HUGridPlaceholderServiceCellLayoutOptions *placeholderServiceCellOptions;
@property (nonatomic, readonly) double pointWidthForCurrentViewSizeSubclass;
@property (nonatomic, readonly) double pointWidthForFullWidthCell;
@property (nonatomic) double rowSpacing;
@property (nonatomic, copy) HUGridSceneCellLayoutOptions *sceneCellOptions;
@property (nonatomic) long long scrollDirection;
@property (nonatomic) double sectionBottomMargin;
@property (nonatomic) double sectionBottomToNextSectionTitleBaselineDistance;
@property (nonatomic, readonly) double sectionHeaderCellHeight;
@property (nonatomic, retain) UIFont *sectionHeaderFont;
@property (nonatomic) double sectionLeadingMargin;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } sectionTitleMargin;
@property (nonatomic) double sectionTopMargin;
@property (nonatomic) double sectionTrailingMargin;
@property (nonatomic, copy) HUGridServiceCellLayoutOptions *serviceCellOptions;
@property (nonatomic, copy) HUGridStatusCellLayoutOptions *statusCellOptions;
@property (nonatomic) bool statusHidden;
@property (nonatomic, readonly) double statusListCellBottomMargin;
@property (nonatomic, readonly) double statusListCellHeight;
@property (nonatomic, readonly) double statusListCellTopMargin;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } viewSize;
@property (nonatomic, readonly) long long viewSizeSubclass;
@property (nonatomic, copy) HUGridWelcomeUIBannerCellLayoutOptions *welcomeUIBannerCellOptions;

+ (unsigned long long)_numberOfAccessibilityColumnsForFlexibleWidthStyleWithSizeSubclass:(long long)arg1;
+ (unsigned long long)_numberOfColumnsForFlexibleWidthStyleWithSizeSubclass:(long long)arg1 contentSizeCategory:(id)arg2;
+ (unsigned long long)_numberOfNormalColumnsForFlexibleWidthStyleWithSizeSubclass:(long long)arg1;
+ (id)defaultOptionsForViewSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)defaultOptionsForViewSize:(struct CGSize { double x1; double x2; })arg1 columnStyle:(unsigned long long)arg2;
+ (id)defaultOptionsForViewSize:(struct CGSize { double x1; double x2; })arg1 columnStyle:(unsigned long long)arg2 overrideSizeSubclass:(id)arg3;
+ (id)defaultOptionsForViewSize:(struct CGSize { double x1; double x2; })arg1 overrideSizeSubclass:(long long)arg2;

- (void).cxx_destruct;
- (id)_childDisplayOptions;
- (id)_columnStyleToString:(unsigned long long)arg1;
- (double)_pointWidthForFixedColumnStyleWithFractionalNumberOfColumns:(double)arg1;
- (double)_pointWidthForFlexibleColumnStyleWithFractionalNumberOfColumns:(double)arg1 totalNumberOfColumns:(long long)arg2 totalWidth:(double)arg3 useDefaultSectionMargin:(bool)arg4;
- (double)_pointWidthForFractionalNumberOfColumns:(double)arg1;
- (double)_preferredSectionHeightForNumberOfRows:(unsigned long long)arg1 withCellHeight:(double)arg2;
- (id)bannerCellOptions;
- (double)cameraCellHeight;
- (id)cameraCellOptions;
- (double)cameraCellWidth;
- (long long)cellSizeSubclass;
- (double)columnSpacing;
- (unsigned long long)columnStyle;
- (unsigned long long)contentColorStyle;
- (id)contentSizeCategory;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)filterCategoryCellOptions;
- (double)fixedWidthForCell;
- (double)gutter;
- (double)headlineBaselineToSceneHeaderBaselineDistance;
- (double)headlineCellHeight;
- (id)headlineCellOptions;
- (id)headlineFont;
- (bool)headlineHidden;
- (id)initWithViewSize:(struct CGSize { double x1; double x2; })arg1 columnStyle:(unsigned long long)arg2 overrideSizeSubclass:(id)arg3;
- (bool)isEditing;
- (double)largeTitleCellTopMargin;
- (id)mediaPlatterCellOptions;
- (double)minimumMarginBelowHeadline;
- (id)mosaicCameraCellOptions;
- (long long)numberOfCameraCellsPerRow;
- (long long)numberOfColumns;
- (id)overrideNumberOfColumns;
- (id)overrideViewSizeSubclass;
- (id)placeholderSceneCellOptions;
- (id)placeholderServiceCellOptions;
- (double)pointWidthForCurrentViewSizeSubclass;
- (double)pointWidthForFullWidthCell;
- (double)pointWidthForNumberOfColumns:(long long)arg1;
- (double)pointWidthForWelcomeUIBanner;
- (double)preferredSectionHeightForNumberOfSceneRows:(unsigned long long)arg1;
- (double)preferredSectionHeightForNumberOfServiceRows:(unsigned long long)arg1 spanningColumns:(unsigned long long)arg2;
- (double)rowSpacing;
- (id)sceneCellOptions;
- (long long)scrollDirection;
- (double)sectionBottomMargin;
- (double)sectionBottomToNextSectionTitleBaselineDistance;
- (double)sectionHeaderCellHeight;
- (id)sectionHeaderFont;
- (double)sectionLeadingMargin;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionTitleMargin;
- (double)sectionTopMargin;
- (double)sectionTrailingMargin;
- (id)serviceCellOptions;
- (void)setBannerCellOptions:(id)arg1;
- (void)setCameraCellOptions:(id)arg1;
- (void)setColumnSpacing:(double)arg1;
- (void)setColumnStyle:(unsigned long long)arg1;
- (void)setContentColorStyle:(unsigned long long)arg1;
- (void)setContentSizeCategory:(id)arg1;
- (void)setEditing:(bool)arg1;
- (void)setFilterCategoryCellOptions:(id)arg1;
- (void)setHeadlineBaselineToSceneHeaderBaselineDistance:(double)arg1;
- (void)setHeadlineCellOptions:(id)arg1;
- (void)setHeadlineFont:(id)arg1;
- (void)setHeadlineHidden:(bool)arg1;
- (void)setMediaPlatterCellOptions:(id)arg1;
- (void)setMinimumMarginBelowHeadline:(double)arg1;
- (void)setMosaicCameraCellOptions:(id)arg1;
- (void)setOverrideNumberOfColumns:(id)arg1;
- (void)setOverrideViewSizeSubclass:(id)arg1;
- (void)setPlaceholderSceneCellOptions:(id)arg1;
- (void)setPlaceholderServiceCellOptions:(id)arg1;
- (void)setRowSpacing:(double)arg1;
- (void)setSceneCellOptions:(id)arg1;
- (void)setScrollDirection:(long long)arg1;
- (void)setSectionBottomMargin:(double)arg1;
- (void)setSectionBottomToNextSectionTitleBaselineDistance:(double)arg1;
- (void)setSectionHeaderFont:(id)arg1;
- (void)setSectionLeadingMargin:(double)arg1;
- (void)setSectionTitleMargin:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSectionTopMargin:(double)arg1;
- (void)setSectionTrailingMargin:(double)arg1;
- (void)setServiceCellOptions:(id)arg1;
- (void)setStatusCellOptions:(id)arg1;
- (void)setStatusHidden:(bool)arg1;
- (void)setWelcomeUIBannerCellOptions:(id)arg1;
- (id)statusCellOptions;
- (bool)statusHidden;
- (double)statusListCellBottomMargin;
- (double)statusListCellHeight;
- (double)statusListCellTopMargin;
- (struct CGSize { double x1; double x2; })viewSize;
- (long long)viewSizeSubclass;
- (id)welcomeUIBannerCellOptions;

@end