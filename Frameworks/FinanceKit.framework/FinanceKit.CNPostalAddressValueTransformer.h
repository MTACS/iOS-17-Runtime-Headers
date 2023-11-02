
@interface FinanceKit.CNPostalAddressValueTransformer : NSSecureUnarchiveFromDataTransformer

+ (bool)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)init;
- (id)reverseTransformedValue:(id)arg1;
- (id)transformedValue:(id)arg1;

@end
