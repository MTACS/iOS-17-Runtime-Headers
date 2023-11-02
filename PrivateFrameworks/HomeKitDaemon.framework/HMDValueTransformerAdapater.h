
@interface HMDValueTransformerAdapater : HMDValueTransformer {
    NSValueTransformer * _transformer;
}

+ (bool)allowsReverseTransformation;
+ (Class)transformedValueClass;
+ (Class)valueClass;

- (void).cxx_destruct;
- (id)initWithTransformer:(id)arg1;
- (bool)isKindOfTransformer:(Class)arg1;
- (id)reverseTransformedValue:(id)arg1;
- (id)reverseTransformedValue:(id)arg1 error:(id*)arg2;
- (id)transformedValue:(id)arg1;
- (id)transformedValue:(id)arg1 error:(id*)arg2;

@end
