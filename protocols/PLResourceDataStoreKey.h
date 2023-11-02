
@protocol PLResourceDataStoreKey <PLValidatesResourceModel, NSObject>

@required

- (NSString *)descriptionForAssetID:(id <PLAssetID>)arg1;
- (NSURL *)fileURLForAssetID:(id <PLAssetID>)arg1;
- (<PLResourceDataStoreKey> *)initWithKeyStruct:(const void*)arg1;
- (bool)isEqualToKey:(id <PLResourceDataStoreKey>)arg1;
- (NSData *)keyData;
- (NSString *)uniformTypeIdentifier;

@end
