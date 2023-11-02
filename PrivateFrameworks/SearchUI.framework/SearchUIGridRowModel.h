
@interface SearchUIGridRowModel : SearchUICardSectionRowModel {
    SearchUIGridLayoutManager * _gridLayoutManager;
    bool  _shouldHide;
}

@property (nonatomic, retain) SearchUIGridLayoutManager *gridLayoutManager;
@property (nonatomic) bool shouldHide;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)gridLayoutManager;
- (bool)hasLeadingImage;
- (id)initWithResult:(id)arg1 cardSection:(id)arg2 gridLayoutManager:(id)arg3 queryId:(unsigned long long)arg4 itemIdentifier:(id)arg5;
- (bool)prefersNoSeparatorAbove;
- (void)setGridLayoutManager:(id)arg1;
- (void)setShouldHide:(bool)arg1;
- (bool)shouldHide;

@end
