
@interface _MPStorePlatformEntityRelationshipTranslator : _MPKeyPathEntityRelationshipTranslator {
    id /* block */  _payloadTransformBlock;
}

@property (nonatomic, readonly) id /* block */ payloadTransformBlock;

- (void).cxx_destruct;
- (id)initWithRelatedMPModelClass:(Class)arg1 payloadTransformBlock:(id /* block */)arg2;
- (id /* block */)payloadTransformBlock;
- (id)prepareSource:(id)arg1 context:(id)arg2;

@end
