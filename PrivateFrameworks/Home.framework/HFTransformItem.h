
@interface HFTransformItem : HFItem <NSCopying> {
    id /* block */  _optionsTransformBlock;
    id /* block */  _resultsTransformBlock;
    HFItem * _sourceItem;
}

@property (nonatomic, copy) id /* block */ optionsTransformBlock;
@property (nonatomic, copy) id /* block */ resultsTransformBlock;
@property (nonatomic, retain) HFItem *sourceItem;
@property (nonatomic, readonly) HFItem *transformedSourceItem;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithSourceItem:(id)arg1 resultKeyExclusionFilter:(id)arg2;
- (id)initWithSourceItem:(id)arg1 resultKeyFilter:(id)arg2;
- (id)initWithSourceItem:(id)arg1 transformationBlock:(id /* block */)arg2;
- (id)initWithSourceItem:(id)arg1 updateOptionsTransformBlock:(id /* block */)arg2 resultsTransformBlock:(id /* block */)arg3;
- (id /* block */)optionsTransformBlock;
- (id /* block */)resultsTransformBlock;
- (void)setOptionsTransformBlock:(id /* block */)arg1;
- (void)setResultsTransformBlock:(id /* block */)arg1;
- (void)setSourceItem:(id)arg1;
- (id)sourceItem;
- (id)transformedSourceItem;

@end
