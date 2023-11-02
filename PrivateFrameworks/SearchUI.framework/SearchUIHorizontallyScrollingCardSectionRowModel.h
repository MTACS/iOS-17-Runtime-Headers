
@interface SearchUIHorizontallyScrollingCardSectionRowModel : SearchUIRowModel {
    NSArray * _cardSectionRowModels;
    long long  _numberOfRows;
}

@property (retain) NSArray *cardSectionRowModels;
@property (readonly) long long numberOfRows;

- (void).cxx_destruct;
- (id)cardSection;
- (id)cardSectionRowModels;
- (Class)cellViewClass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)hasLeadingImage;
- (id)initWithResult:(id)arg1 cardSection:(id)arg2 queryId:(unsigned long long)arg3 itemIdentifier:(id)arg4 builder:(id)arg5;
- (id)initWithResults:(id)arg1 itemIdentifier:(id)arg2 builder:(id)arg3;
- (long long)numberOfRows;
- (id)reuseIdentifier;
- (void)setCardSectionRowModels:(id)arg1;

@end
