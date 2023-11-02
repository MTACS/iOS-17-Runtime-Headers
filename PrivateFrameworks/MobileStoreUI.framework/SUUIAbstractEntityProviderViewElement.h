
@interface SUUIAbstractEntityProviderViewElement : SUUIViewElement {
    NSString * _entityTypeString;
    NSArray * _prefetchedProperties;
}

@property (nonatomic, readonly, copy) NSString *entityTypeString;
@property (nonatomic, readonly) SUUILimitListViewElement *limitListViewElement;
@property (nonatomic, readonly) SUUIPredicateListViewElement *predicateListViewElement;
@property (nonatomic, readonly, copy) NSArray *prefetchedProperties;
@property (nonatomic, readonly) SUUISortDescriptorListViewElement *sortDescriptorListViewElement;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)entityTypeString;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)limitListViewElement;
- (id)predicateListViewElement;
- (id)prefetchedProperties;
- (id)sortDescriptorListViewElement;

@end
