
@interface _MPMediaKitEntityRelationshipTranslator : _MPKeyPathEntityRelationshipTranslator {
    NSString * _mediaKitType;
    id /* block */  _payloadTransformBlock;
}

@property (nonatomic, copy) NSString *mediaKitType;
@property (nonatomic, readonly) id /* block */ payloadTransformBlock;

- (void).cxx_destruct;
- (id)initWithRelatedMPModelClass:(Class)arg1 mediaKitType:(id)arg2 payloadTransformBlock:(id /* block */)arg3;
- (id)mediaKitType;
- (id /* block */)payloadTransformBlock;
- (id)prepareSource:(id)arg1 context:(id)arg2;
- (void)setMediaKitType:(id)arg1;

@end
