
@protocol REMExternalSyncMetadataWritableProviding

@required

- (NSString *)daPushKey;
- (NSString *)daSyncToken;
- (NSString *)externalIdentifier;
- (NSString *)externalModificationTag;
- (void)setDaPushKey:(NSString *)arg1;
- (void)setDaSyncToken:(NSString *)arg1;
- (void)setExternalIdentifier:(NSString *)arg1;
- (void)setExternalModificationTag:(NSString *)arg1;

@end
