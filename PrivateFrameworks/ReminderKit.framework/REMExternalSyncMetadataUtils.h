
@interface REMExternalSyncMetadataUtils : NSObject

+ (id)decodeExternalIdentifierForMarkedForDeletionObject:(id)arg1;
+ (id)encodeExternalIdentifierForMarkedForDeletionObject:(id)arg1;
+ (bool)shouldUseExternalIdentifierAsDeletionKeyWithAccountType:(long long)arg1;

@end
