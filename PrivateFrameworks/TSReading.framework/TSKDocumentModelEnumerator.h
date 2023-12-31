
@interface TSKDocumentModelEnumerator : NSEnumerator {
    NSMutableArray * _enumeratorStack;
    id /* block */  _filter;
    bool  _filterBeforeAddingChildren;
    <TSKModel> * _root;
    bool  _stop;
}

@property (nonatomic, retain) NSMutableArray *enumeratorStack;
@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic) bool filterBeforeAddingChildren;
@property (nonatomic, retain) <TSKModel> *root;

- (void)dealloc;
- (void)enumerateReferencedStylesUsingBlock:(id /* block */)arg1;
- (void)enumerateUsingBlock:(id /* block */)arg1;
- (id)enumeratorStack;
- (id /* block */)filter;
- (bool)filterBeforeAddingChildren;
- (id)initWithEnumerator:(id)arg1 filter:(id /* block */)arg2;
- (id)initWithRootModelObject:(id)arg1 filter:(id /* block */)arg2;
- (id)nextObject;
- (id)root;
- (void)setEnumeratorStack:(id)arg1;
- (void)setFilter:(id /* block */)arg1;
- (void)setFilterBeforeAddingChildren:(bool)arg1;
- (void)setRoot:(id)arg1;

@end
