
@interface SearchUILeadingTrailingSectionModel : SearchUISectionModel {
    SFLeadingTrailingCardSection * _cardSection;
    double  _horizontalSpacing;
    double  _leadingFractionalWidth;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _leadingGroupContentInsets;
    NSArray * _leadingRowModels;
    double  _preferredHeight;
    bool  _prefersSeparatorsInLeadingGroup;
    bool  _prefersSeparatorsInTrailingGroup;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _sectionInsets;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _trailingGroupContentInsets;
    NSArray * _trailingRowModels;
    double  _verticalSpacing;
}

@property (nonatomic, retain) SFLeadingTrailingCardSection *cardSection;
@property (nonatomic) double horizontalSpacing;
@property (nonatomic) double leadingFractionalWidth;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } leadingGroupContentInsets;
@property (nonatomic, retain) NSArray *leadingRowModels;
@property (nonatomic) double preferredHeight;
@property (nonatomic) bool prefersSeparatorsInLeadingGroup;
@property (nonatomic) bool prefersSeparatorsInTrailingGroup;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } sectionInsets;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } trailingGroupContentInsets;
@property (nonatomic, retain) NSArray *trailingRowModels;
@property (nonatomic) double verticalSpacing;

+ (long long)sectionType;

- (void).cxx_destruct;
- (id)buildGroupForFractionalWidth:(double)arg1 numberOfCards:(long long)arg2 isTopAligned:(bool)arg3 prefersSeparator:(bool)arg4;
- (id)cardSection;
- (double)horizontalSpacing;
- (id)initWithCardSection:(id)arg1 rowModels:(id)arg2 result:(id)arg3 queryId:(unsigned long long)arg4 section:(id)arg5;
- (id)layoutSectionForEnvironment:(id)arg1 attributes:(id)arg2 dataSource:(id)arg3;
- (double)leadingFractionalWidth;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })leadingGroupContentInsets;
- (id)leadingRowModels;
- (id)overriddenAccessibilityIdentifier;
- (double)preferredHeight;
- (bool)prefersSeparatorsInLeadingGroup;
- (bool)prefersSeparatorsInTrailingGroup;
- (id)primaryCardSection;
- (bool)primaryCardSectionIsLeading;
- (id)rowModels;
- (id)rowModelsForCardSections:(id)arg1 result:(id)arg2 queryId:(unsigned long long)arg3;
- (long long)sectionBackgroundStyleWithAttributes:(id)arg1;
- (long long)sectionBackgroundStyleWithAttributes:(id)arg1 forRowModel:(id)arg2;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })sectionInsets;
- (void)setCardSection:(id)arg1;
- (void)setHorizontalSpacing:(double)arg1;
- (void)setLeadingFractionalWidth:(double)arg1;
- (void)setLeadingGroupContentInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLeadingRowModels:(id)arg1;
- (void)setPreferredHeight:(double)arg1;
- (void)setPrefersSeparatorsInLeadingGroup:(bool)arg1;
- (void)setPrefersSeparatorsInTrailingGroup:(bool)arg1;
- (void)setSectionInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTrailingGroupContentInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTrailingRowModels:(id)arg1;
- (void)setVerticalSpacing:(double)arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })trailingGroupContentInsets;
- (id)trailingRowModels;
- (double)verticalSpacing;

@end
