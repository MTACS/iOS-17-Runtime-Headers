
@interface WFEventSignificantFigureValueTransformer : NSValueTransformer

+ (bool)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)transformedValue:(id)arg1;

@end
