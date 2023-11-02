
@interface HMDValueTransformer : NSValueTransformer

+ (id)decodeValue:(id)arg1 withTransformerNamed:(id)arg2 error:(id*)arg3;
+ (id)encodeValue:(id)arg1 withTransformerNamed:(id)arg2 error:(id*)arg3;
+ (id)reverseTransformedValue:(id)arg1 error:(id*)arg2;
+ (id)sharedTransformer;
+ (id)transformedValue:(id)arg1 error:(id*)arg2;
+ (Class)transformedValueClass;
+ (Class)valueClass;
+ (id)valueTransformerForName:(id)arg1;

- (id)description;
- (id)init;
- (bool)isKindOfTransformer:(Class)arg1;
- (id)reverseTransformedValue:(id)arg1;
- (id)reverseTransformedValue:(id)arg1 error:(id*)arg2;
- (id)transformedValue:(id)arg1;
- (id)transformedValue:(id)arg1 error:(id*)arg2;

@end
