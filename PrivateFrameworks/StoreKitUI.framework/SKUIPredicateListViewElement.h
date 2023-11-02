
@interface SKUIPredicateListViewElement : SKUIViewElement {
    NSPredicate * _compoundEntityValuePredicate;
}

@property (nonatomic, readonly) NSPredicate *compoundEntityValuePredicate;
@property (nonatomic, readonly, copy) NSArray *predicateViewElements;

- (void).cxx_destruct;
- (void)_enumeratePredicateViewElementsUsingBlock:(id /* block */)arg1;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)compoundEntityValuePredicate;
- (id)predicateViewElements;

@end
