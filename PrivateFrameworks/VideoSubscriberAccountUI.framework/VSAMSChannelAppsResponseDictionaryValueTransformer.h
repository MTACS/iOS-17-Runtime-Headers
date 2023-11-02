
@interface VSAMSChannelAppsResponseDictionaryValueTransformer : NSValueTransformer

+ (bool)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)parseAppData:(id)arg1;
- (id)transformedValue:(id)arg1;

@end
