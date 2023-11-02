
@interface SGStringPreprocessingTransformer : NSObject <PMLTransformerProtocol> {
    NSArray * _methodNames;
    NSMethodSignature * _methodSignatureNoValue;
    NSMethodSignature * _methodSignatureWithValue;
    NSArray * _methodValues;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)withMethods:(id)arg1;

- (void).cxx_destruct;
- (void)applySelector:(SEL)arg1 preprocesor:(id)arg2 string:(id)arg3 value:(id)arg4;
- (unsigned long long)hash;
- (id)initWithMethods:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToStringPreprocessingTransformer:(id)arg1;
- (SEL)selectorForMethod:(id)arg1 preprocessor:(id)arg2;
- (id)toPlistWithChunks:(id)arg1;
- (id)transform:(id)arg1;
- (id)transformBatch:(id)arg1;

@end
