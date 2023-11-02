
@interface SKUIAbstractEntityProviderViewElement : SKUIViewElement {
    NSString * _entityTypeString;
    NSArray * _prefetchedProperties;
}

@property (nonatomic, readonly, copy) NSString *entityTypeString;
@property (nonatomic, readonly) SKUILimitListViewElement *limitListViewElement;
@property (nonatomic, readonly) SKUIPredicateListViewElement *predicateListViewElement;
@property (nonatomic, readonly, copy) NSArray *prefetchedProperties;
@property (nonatomic, readonly) SKUISortDescriptorListViewElement *sortDescriptorListViewElement;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)entityTypeString;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)limitListViewElement;
- (id)predicateListViewElement;
- (id)prefetchedProperties;
- (id)sortDescriptorListViewElement;

@end
