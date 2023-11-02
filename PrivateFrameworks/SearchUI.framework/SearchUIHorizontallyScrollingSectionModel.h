
@interface SearchUIHorizontallyScrollingSectionModel : SearchUISectionModel {
    long long  _numberOfRows;
}

@property long long numberOfRows;

+ (long long)sectionType;

- (bool)drawsBackground;
- (id)initWithRowModels:(id)arg1 section:(id)arg2 numberOfRows:(long long)arg3;
- (id)layoutSectionForEnvironment:(id)arg1 attributes:(id)arg2 dataSource:(id)arg3;
- (bool)needsHorizontalNavigation;
- (long long)numberOfRows;
- (id)overriddenAccessibilityIdentifier;
- (long long)sectionBackgroundStyleWithAttributes:(id)arg1;
- (bool)selfSizingInTwoAxes;
- (void)setNumberOfRows:(long long)arg1;
- (bool)shouldHeightMatchSection;
- (bool)wantsHeaderSeparator;

@end
