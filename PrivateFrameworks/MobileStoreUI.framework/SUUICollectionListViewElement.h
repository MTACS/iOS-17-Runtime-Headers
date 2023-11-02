
@interface SUUICollectionListViewElement : SUUIViewElement {
    SUUISearchBarViewElement * _searchHeader;
}

@property (nonatomic, readonly) SUUISearchBarViewElement *searchHeader;

- (void).cxx_destruct;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)searchHeader;

@end
