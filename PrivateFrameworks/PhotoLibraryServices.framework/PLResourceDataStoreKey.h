
@interface PLResourceDataStoreKey : NSObject <PLResourceDataStoreKey>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)refreshSandboxExtensionForURL:(id)arg1 assetID:(id)arg2 error:(id*)arg3;
+ (bool)refreshSandboxExtensionForURL:(id)arg1 libraryID:(id)arg2 assetUUID:(id)arg3 error:(id*)arg4;

- (id)descriptionForAssetID:(id)arg1;
- (id)fileURLForAssetID:(id)arg1;
- (id)initWithKeyStruct:(const void*)arg1;
- (bool)isEqualToKey:(id)arg1;
- (id)keyData;
- (id)uniformTypeIdentifier;
- (id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2;

@end
