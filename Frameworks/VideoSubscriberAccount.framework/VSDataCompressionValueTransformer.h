
@interface VSDataCompressionValueTransformer : NSValueTransformer

+ (bool)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)_dataByPerformingOperation:(int)arg1 onData:(id)arg2;
- (id)reverseTransformedValue:(id)arg1;
- (id)transformedValue:(id)arg1;

@end
