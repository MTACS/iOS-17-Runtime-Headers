
@interface EDAccountECAccountTransformer : NSValueTransformer

+ (bool)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)transformAccount:(id)arg1;
- (id)transformDeliveryAccount:(id)arg1;
- (id)transformReceivingAccount:(id)arg1;
- (id)transformedValue:(id)arg1;

@end
