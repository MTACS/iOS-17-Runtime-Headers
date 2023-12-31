
@interface HAPValueTransformer : HMFObject

+ (Class)expectedClassForFormat:(unsigned long long)arg1;
+ (Class)expectedTransformedClassForFormat:(unsigned long long)arg1;

- (id)reverseTransformedValue:(id)arg1 format:(unsigned long long)arg2 error:(id*)arg3;
- (id)transformedValue:(id)arg1 format:(unsigned long long)arg2 error:(id*)arg3;

@end
