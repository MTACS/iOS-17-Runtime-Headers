
@interface SGConversationFlatteningTransformer : NSObject <PMLTransformerProtocol> {
    NSObject<PMLTransformerProtocol> * _perMessageTranformer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)withPerMessageTransformer:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithPerMessageTransformer:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConversationFlatteningTransformer:(id)arg1;
- (id)toPlistWithChunks:(id)arg1;
- (id)transform:(id)arg1;

@end
