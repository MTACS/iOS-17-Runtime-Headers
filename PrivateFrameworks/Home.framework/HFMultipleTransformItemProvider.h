
@interface HFMultipleTransformItemProvider : HFItemProvider {
    NSMutableSet * _allItems;
    HFItemProvider * _sourceProvider;
    id /* block */  _transformationBlock;
    NSMutableDictionary * _transformedItems;
}

@property (nonatomic, retain) NSMutableSet *allItems;
@property (nonatomic, readonly) HFItemProvider *sourceProvider;
@property (nonatomic, copy) id /* block */ transformationBlock;
@property (nonatomic, retain) NSMutableDictionary *transformedItems;

- (void).cxx_destruct;
- (id)_subclass_transformItem:(id)arg1;
- (id)allItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithSourceProvider:(id)arg1;
- (id)initWithSourceProvider:(id)arg1 multipleTransformationBlock:(id /* block */)arg2;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (void)setAllItems:(id)arg1;
- (void)setTransformationBlock:(id /* block */)arg1;
- (void)setTransformedItems:(id)arg1;
- (id)sourceProvider;
- (id /* block */)transformationBlock;
- (id)transformedItems;

@end
