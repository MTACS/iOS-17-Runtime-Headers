
@interface _IFValueTransformer : NSValueTransformer {
    id /* block */  _forwardTransformation;
    id /* block */  _reverseTransformation;
}

@property (nonatomic, readonly, copy) id /* block */ forwardTransformation;
@property (nonatomic, readonly, copy) id /* block */ reverseTransformation;

+ (bool)allowsReverseTransformation;

- (void).cxx_destruct;
- (id /* block */)forwardTransformation;
- (id)initWithForwardTransformation:(id /* block */)arg1 reverseTransformation:(id /* block */)arg2;
- (id /* block */)reverseTransformation;
- (id)reverseTransformedValue:(id)arg1;
- (id)transformedValue:(id)arg1;

@end
