
@interface SearchUIImageGridRowModel : SearchUICardSectionRowModel {
    NSArray * _cardSectionRowModels;
}

@property (retain) NSArray *cardSectionRowModels;

- (void).cxx_destruct;
- (id)cardSection;
- (id)cardSectionRowModels;
- (Class)cardSectionViewClass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithResult:(id)arg1 cardSection:(id)arg2 isInline:(bool)arg3 queryId:(unsigned long long)arg4 itemIdentifier:(id)arg5 builder:(id)arg6;
- (id)initWithResults:(id)arg1 itemIdentifier:(id)arg2 builder:(id)arg3;
- (bool)isTappable;
- (void)setCardSectionRowModels:(id)arg1;

@end
