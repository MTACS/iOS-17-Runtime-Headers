
@interface SearchUISectionModel : NSObject {
    SearchUIAsyncSectionLoader * _asyncLoader;
    bool  _drawPlattersIfNecessary;
    NSArray * _rowModels;
    SearchUISection * _section;
    bool  _selfSizingInTwoAxes;
    bool  _shouldHeightMatchSection;
}

@property (nonatomic, readonly) SearchUIAsyncSectionLoader *asyncLoader;
@property (nonatomic, readonly) SFColor *backgroundColor;
@property (nonatomic) bool drawPlattersIfNecessary;
@property (nonatomic, readonly) bool needsHorizontalNavigation;
@property (nonatomic, retain) NSArray *rowModels;
@property (nonatomic, readonly) SearchUISection *section;
@property (nonatomic, readonly) bool selfSizingInTwoAxes;
@property (nonatomic, readonly) bool shouldHeightMatchSection;

+ (id)sectionModelWithGridRowModels:(id)arg1 numberOfColumns:(long long)arg2 section:(id)arg3 expandedCollectionSections:(id)arg4;
+ (id)sectionModelWithRows:(id)arg1 drawPlattersIfNecessary:(bool)arg2 section:(id)arg3 expandedCollectionSections:(id)arg4;
+ (id)sectionModelWithScrollingRowModels:(id)arg1 numberOfRows:(long long)arg2 section:(id)arg3;
+ (long long)sectionType;

- (void).cxx_destruct;
- (id)asyncLoader;
- (id)backgroundColor;
- (id)description;
- (bool)drawPlattersIfNecessary;
- (unsigned long long)hash;
- (id)initWithRowModels:(id)arg1 section:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)layoutSectionForEnvironment:(id)arg1 attributes:(id)arg2 dataSource:(id)arg3;
- (bool)needsHorizontalNavigation;
- (id)overriddenAccessibilityIdentifier;
- (void)prepareForSnapshot;
- (void)reloadCornerMaskingOverrideWithAttributes:(id)arg1;
- (void)removeRowModelAtIndex:(long long)arg1;
- (id)rowModels;
- (id)section;
- (long long)sectionBackgroundStyleWithAttributes:(id)arg1;
- (bool)selfSizingInTwoAxes;
- (int)separatorStyleForIndex:(unsigned long long)arg1;
- (int)separatorStyleForIndex:(unsigned long long)arg1 shouldDrawTopAndBottomSeparators:(bool)arg2;
- (void)setDrawPlattersIfNecessary:(bool)arg1;
- (void)setRowModels:(id)arg1;
- (bool)shouldDisplayChevronForIndex:(unsigned long long)arg1 nextCardsEnabled:(bool)arg2;
- (bool)shouldHeightMatchSection;
- (bool)shouldLeaveSpaceForChevronForIndex:(unsigned long long)arg1;
- (bool)wantsHeaderSeparator;

@end
