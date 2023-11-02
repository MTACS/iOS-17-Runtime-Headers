
@interface SearchUIGridSectionModel : SearchUISectionModel {
    unsigned long long  _numberOfColumns;
}

@property (nonatomic) unsigned long long numberOfColumns;

+ (long long)sectionType;

- (id)initWithRowModels:(id)arg1 numberOfColumns:(long long)arg2 section:(id)arg3;
- (id)layoutSectionForEnvironment:(id)arg1 attributes:(id)arg2 dataSource:(id)arg3;
- (bool)needsHorizontalNavigation;
- (unsigned long long)numberOfColumns;
- (id)overriddenAccessibilityIdentifier;
- (long long)sectionBackgroundStyleWithAttributes:(id)arg1;
- (void)setCornerMaskRulesOnRowModelsForColumnCount:(unsigned long long)arg1;
- (void)setNumberOfColumns:(unsigned long long)arg1;
- (bool)wantsHeaderSeparator;

@end
