
@interface SearchUICombinedCardSectionRowModel : SearchUIRowModel {
    NSArray * _cardSectionRowModels;
}

@property (nonatomic, retain) NSArray *cardSectionRowModels;
@property (readonly) NSArray *snippetUICardSections;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)cardSection;
- (id)cardSectionRowModels;
- (Class)cellViewClass;
- (Class)collectionViewCellClass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dragSubtitle;
- (id)dragText;
- (id)dragTitle;
- (id)dragURL;
- (id)firstRowModel;
- (id)initWithResult:(id)arg1 cardSectionRowModels:(id)arg2 dataSourceIdentifier:(id)arg3;
- (bool)isDraggable;
- (bool)isTappable;
- (id)nextCard;
- (id)punchouts;
- (id)reuseIdentifier;
- (int)separatorStyle;
- (void)setCardSectionRowModels:(id)arg1;
- (void)setIsTopHit:(bool)arg1;
- (id)snippetUICardSections;

@end
