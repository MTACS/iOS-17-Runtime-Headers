
@protocol REMExternalSyncMetadataProviding

@required

- (NSString *)daPushKey;
- (NSString *)daSyncToken;
- (NSString *)externalIdentifier;
- (NSString *)externalIdentifierForMarkedForDeletionObject;
- (NSString *)externalModificationTag;
- (bool)shouldUseExternalIdentifierAsDeletionKey;

@end
