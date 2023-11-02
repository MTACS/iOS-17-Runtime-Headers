
@interface MTLValueTransformer : NSValueTransformer <MTLTransformerErrorHandling> {
    id /* block */  _forwardBlock;
    id /* block */  _reverseBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) id /* block */ forwardBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) id /* block */ reverseBlock;
@property (readonly) Class superclass;

+ (bool)allowsReverseTransformation;
+ (id)reversibleTransformerWithBlock:(id /* block */)arg1;
+ (id)reversibleTransformerWithForwardBlock:(id /* block */)arg1 reverseBlock:(id /* block */)arg2;
+ (Class)transformedValueClass;
+ (id)transformerUsingForwardBlock:(id /* block */)arg1;
+ (id)transformerUsingForwardBlock:(id /* block */)arg1 reverseBlock:(id /* block */)arg2;
+ (id)transformerUsingReversibleBlock:(id /* block */)arg1;
+ (id)transformerWithBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (id /* block */)forwardBlock;
- (id)initWithForwardBlock:(id /* block */)arg1 reverseBlock:(id /* block */)arg2;
- (id /* block */)reverseBlock;
- (id)transformedValue:(id)arg1;
- (id)transformedValue:(id)arg1 success:(bool*)arg2 error:(id*)arg3;

@end
