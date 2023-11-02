
@interface PKPhysicsFieldCustomBlock : PKPhysicsField {
    id /* block */  _batchBlock;
    id /* block */  _block;
}

+ (id)fieldWithCustomBatchBlock:(id /* block */)arg1;
+ (id)fieldWithCustomBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)initWithCustomBatchBlock:(id /* block */)arg1;
- (id)initWithCustomBlock:(id /* block */)arg1;

@end
