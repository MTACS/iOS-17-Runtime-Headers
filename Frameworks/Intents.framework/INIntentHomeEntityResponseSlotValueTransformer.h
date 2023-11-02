
@interface INIntentHomeEntityResponseSlotValueTransformer : NSValueTransformer

+ (long long)_intents_valueType;
+ (bool)allowsReverseTransformation;
+ (Class)reverseTransformedValueClass;
+ (Class)transformedValueClass;

- (id)reverseTransformedValue:(id)arg1;
- (id)transformedValue:(id)arg1;

@end
