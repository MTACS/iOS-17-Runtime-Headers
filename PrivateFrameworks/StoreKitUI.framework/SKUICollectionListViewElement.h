
@interface SKUICollectionListViewElement : SKUIViewElement {
    SKUISearchBarViewElement * _searchHeader;
}

@property (nonatomic, readonly) SKUISearchBarViewElement *searchHeader;

- (void).cxx_destruct;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)searchHeader;

@end
