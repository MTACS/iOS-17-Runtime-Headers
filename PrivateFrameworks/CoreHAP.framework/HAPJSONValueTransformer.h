
@interface HAPJSONValueTransformer : HAPValueTransformer

+ (id)defaultJSONValueTransformer;
+ (Class)expectedTransformedClassForFormat:(unsigned long long)arg1;
+ (void)initialize;

- (id)reverseTransformedValue:(id)arg1 format:(unsigned long long)arg2 error:(id*)arg3;
- (id)transformedValue:(id)arg1 format:(unsigned long long)arg2 error:(id*)arg3;

@end
