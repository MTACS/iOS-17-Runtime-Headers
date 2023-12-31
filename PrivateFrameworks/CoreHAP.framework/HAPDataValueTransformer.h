
@interface HAPDataValueTransformer : HAPValueTransformer

+ (id)defaultDataValueTransformer;
+ (Class)expectedTransformedClassForFormat:(unsigned long long)arg1;
+ (void)initialize;
+ (bool)isValidFormat:(unsigned long long)arg1;

- (id)reverseTransformedValue:(id)arg1 format:(unsigned long long)arg2 error:(id*)arg3;
- (id)transformedValue:(id)arg1 format:(unsigned long long)arg2 error:(id*)arg3;

@end
