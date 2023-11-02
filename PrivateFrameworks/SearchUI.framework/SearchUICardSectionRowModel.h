
@interface SearchUICardSectionRowModel : SearchUIRowModel {
    NSString * _cardReuseIdentifier;
    bool  _isHorizontalInLayout;
    bool  _isInline;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumLayoutSize;
    long long  _sectionType;
    bool  _shouldFillAvailableSpace;
}

@property (nonatomic, copy) NSString *cardReuseIdentifier;
@property (nonatomic, readonly) Class cardSectionViewClass;
@property (nonatomic) bool isHorizontalInLayout;
@property (nonatomic) bool isInline;
@property (nonatomic) struct CGSize { double x1; double x2; } minimumLayoutSize;
@property (nonatomic) long long sectionType;
@property (nonatomic) bool shouldFillAvailableSpace;

- (void).cxx_destruct;
- (id)accessibilityIdentifier;
- (bool)anyCardSectionsAreTappable:(id)arg1;
- (bool)anyCardSectionsHaveNextCards:(id)arg1;
- (id)backgroundColor;
- (id)cardReuseIdentifier;
- (Class)cardSectionViewClass;
- (Class)cellViewClass;
- (Class)collectionViewCellClass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dragSubtitle;
- (id)dragText;
- (id)dragTitle;
- (id)dragURL;
- (id)fallbackCardSectionForCompactResult;
- (bool)fillsBackgroundWithContent;
- (bool)hasLeadingImage;
- (id)horizontalRowModel;
- (id)initWithResult:(id)arg1 cardSection:(id)arg2 isInline:(bool)arg3 queryId:(unsigned long long)arg4 itemIdentifier:(id)arg5;
- (bool)isDraggable;
- (bool)isFocusable;
- (bool)isHorizontalInLayout;
- (bool)isInline;
- (bool)isQuerySuggestion;
- (bool)isTappable;
- (struct CGSize { double x1; double x2; })minimumLayoutSize;
- (id)nextCard;
- (bool)prefersNoSeparatorAbove;
- (id)punchouts;
- (id)reuseIdentifier;
- (long long)sectionType;
- (int)separatorStyle;
- (void)setCardReuseIdentifier:(id)arg1;
- (void)setIsHorizontalInLayout:(bool)arg1;
- (void)setIsInline:(bool)arg1;
- (void)setMinimumLayoutSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSectionType:(long long)arg1;
- (void)setShouldFillAvailableSpace:(bool)arg1;
- (bool)shouldFillAvailableSpace;
- (bool)supportsCustomUserReportRequestAfforance;

@end
