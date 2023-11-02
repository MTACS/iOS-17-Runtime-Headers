
@interface HMBModelFieldOption : HMFObject

+ (id)encryptedExternalRecordField:(id)arg1;
+ (id)excludeFromCloudStorage;
+ (id)externalRecordField:(id)arg1;
+ (id)queryableField;
+ (id)queryableFieldWithEncodeBlock:(id /* block */)arg1 decodeBlock:(id /* block */)arg2;
+ (id)queryableFieldWithEncodeBlock:(id /* block */)arg1 decodeBlock:(id /* block */)arg2 descriptionBlock:(id /* block */)arg3;

- (void)applyTo:(id)arg1;

@end
