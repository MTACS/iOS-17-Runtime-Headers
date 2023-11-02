
@interface SGSelectiveTransformer : NSObject <PMLTransformerProtocol> {
    NSString * _inputKey;
    <PMLTransformerProtocol> * _transformer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSString *inputKey;
@property (readonly) Class superclass;
@property (retain) <PMLTransformerProtocol> *transformer;

+ (id)withTransformer:(id)arg1 appliedToInputKey:(id)arg2;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)initWithTransformer:(id)arg1 appliedToInputKey:(id)arg2;
- (id)inputKey;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSGSelectiveTransformer:(id)arg1;
- (void)setInputKey:(id)arg1;
- (void)setTransformer:(id)arg1;
- (id)toPlistWithChunks:(id)arg1;
- (id)transform:(id)arg1;
- (id)transformer;

@end
