
@interface SBHAppLibraryVisualConfiguration : NSObject <BSDescriptionProviding, NSCopying> {
    SBHSearchVisualConfiguration * _activeSearchVisualConfiguration;
    SBHSearchVisualConfiguration * _compactSearchVisualConfiguration;
    struct CGSize { 
        double width; 
        double height; 
    }  _expandedCategoryPodIconSpacing;
    SBHSearchVisualConfiguration * _extendedSearchVisualConfiguration;
    struct CGSize { 
        double width; 
        double height; 
    }  _landscapeCategoryPodIconSpacing;
    struct CGSize { 
        double width; 
        double height; 
    }  _portraitCategoryPodIconSpacing;
    double  _searchContinuousCornerRadius;
    SBHSearchVisualConfiguration * _standardSearchVisualConfiguration;
    bool  _usesInsetPlatterSearchAppearance;
}

@property (nonatomic, retain) SBHSearchVisualConfiguration *activeSearchVisualConfiguration;
@property (nonatomic, retain) SBHSearchVisualConfiguration *compactSearchVisualConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGSize { double x1; double x2; } expandedCategoryPodIconSpacing;
@property (nonatomic, retain) SBHSearchVisualConfiguration *extendedSearchVisualConfiguration;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } landscapeCategoryPodIconSpacing;
@property (nonatomic) struct CGSize { double x1; double x2; } portraitCategoryPodIconSpacing;
@property (nonatomic) double searchContinuousCornerRadius;
@property (nonatomic, retain) SBHSearchVisualConfiguration *standardSearchVisualConfiguration;
@property (readonly) Class superclass;
@property (nonatomic) bool usesInsetPlatterSearchAppearance;

- (void).cxx_destruct;
- (id)activeSearchVisualConfiguration;
- (id)compactSearchVisualConfiguration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (struct CGSize { double x1; double x2; })expandedCategoryPodIconSpacing;
- (id)extendedSearchVisualConfiguration;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (struct CGSize { double x1; double x2; })landscapeCategoryPodIconSpacing;
- (struct CGSize { double x1; double x2; })portraitCategoryPodIconSpacing;
- (double)searchContinuousCornerRadius;
- (void)setActiveSearchVisualConfiguration:(id)arg1;
- (void)setCompactSearchVisualConfiguration:(id)arg1;
- (void)setExpandedCategoryPodIconSpacing:(struct CGSize { double x1; double x2; })arg1;
- (void)setExtendedSearchVisualConfiguration:(id)arg1;
- (void)setLandscapeCategoryPodIconSpacing:(struct CGSize { double x1; double x2; })arg1;
- (void)setPortraitCategoryPodIconSpacing:(struct CGSize { double x1; double x2; })arg1;
- (void)setSearchContinuousCornerRadius:(double)arg1;
- (void)setStandardSearchVisualConfiguration:(id)arg1;
- (void)setUsesInsetPlatterSearchAppearance:(bool)arg1;
- (id)standardSearchVisualConfiguration;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (bool)usesInsetPlatterSearchAppearance;

@end
