
@interface VSBlockBasedValueTransformer : NSValueTransformer {
    id /* block */  _reverseTransformationBlock;
    id /* block */  _transformationBlock;
}

@property (nonatomic, copy) id /* block */ reverseTransformationBlock;
@property (nonatomic, copy) id /* block */ transformationBlock;

- (void).cxx_destruct;
- (id)init;
- (id /* block */)reverseTransformationBlock;
- (id)reverseTransformedValue:(id)arg1;
- (void)setReverseTransformationBlock:(id /* block */)arg1;
- (void)setTransformationBlock:(id /* block */)arg1;
- (id /* block */)transformationBlock;
- (id)transformedValue:(id)arg1;

@end
