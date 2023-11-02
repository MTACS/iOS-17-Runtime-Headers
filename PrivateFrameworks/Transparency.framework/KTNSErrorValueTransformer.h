
@interface KTNSErrorValueTransformer : NSSecureUnarchiveFromDataTransformer

+ (bool)allowsReverseTransformation;
+ (id)name;
+ (void)registerTransformer;
+ (Class)transformedValueClass;

- (id)allowedTopLevelClasses;
- (id)reverseTransformedValue:(id)arg1;
- (id)transformedValue:(id)arg1;

@end
