
@interface HMDTimeOffsetToDateComponentsTransformer : HMDValueTransformer

+ (id)transformedValue:(id)arg1 error:(id*)arg2;
+ (Class)transformedValueClass;
+ (Class)valueClass;

- (id)reverseTransformedValue:(id)arg1 error:(id*)arg2;

@end
