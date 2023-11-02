
@interface MTLReversibleValueTransformer : MTLValueTransformer

+ (bool)allowsReverseTransformation;

- (id)initWithForwardBlock:(id /* block */)arg1 reverseBlock:(id /* block */)arg2;
- (id)reverseTransformedValue:(id)arg1;
- (id)reverseTransformedValue:(id)arg1 success:(bool*)arg2 error:(id*)arg3;

@end
