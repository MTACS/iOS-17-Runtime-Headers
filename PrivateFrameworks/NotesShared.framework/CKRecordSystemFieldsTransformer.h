
@interface CKRecordSystemFieldsTransformer : NSValueTransformer

+ (Class)transformedValueClass;

- (id)reverseTransformedValue:(id)arg1;
- (id)transformedValue:(id)arg1;

@end
