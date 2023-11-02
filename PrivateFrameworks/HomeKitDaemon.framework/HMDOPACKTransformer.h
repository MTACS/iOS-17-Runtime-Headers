
@interface HMDOPACKTransformer : HMDValueTransformer

+ (id)OPACKFromValue:(id)arg1 error:(id*)arg2;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)isStructuredDataCompatible;
+ (id)reverseTransformedValue:(id)arg1 error:(id*)arg2;
+ (id)transformedValue:(id)arg1 error:(id*)arg2;
+ (Class)valueClass;
+ (id)valueFromOPACK:(id)arg1 error:(id*)arg2;

- (id)OPACKFromValue:(id)arg1 error:(id*)arg2;
- (id)valueFromOPACK:(id)arg1 error:(id*)arg2;

@end
