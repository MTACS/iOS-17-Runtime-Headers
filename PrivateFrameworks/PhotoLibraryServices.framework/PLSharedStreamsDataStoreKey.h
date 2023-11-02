
@interface PLSharedStreamsDataStoreKey : PLResourceDataStoreKey <PLChooserKeyProperties> {
    NSString * _relativePath;
    unsigned int  _sharedStreamsResourceType;
}

+ (id)_keyDataWithRelativePath:(id)arg1 type:(unsigned int)arg2;
+ (id)_relativeDCIMFilePathForPersonID:(id)arg1 albumID:(id)arg2 dcimDirectory:(id)arg3 fileName:(id)arg4;
+ (id)_relativeFilePathForPersonID:(id)arg1 albumID:(id)arg2 fileName:(id)arg3;
+ (id)_replacementPathExtensionForType:(unsigned int)arg1;
+ (unsigned long long)dataLengthFromPreviewByte:(unsigned char)arg1;

- (void).cxx_destruct;
- (id)descriptionForAssetID:(id)arg1;
- (id)fileURLForAssetID:(id)arg1;
- (id)initWithAsset:(id)arg1 album:(id)arg2 type:(unsigned int)arg3;
- (id)initWithKeyStruct:(const void*)arg1;
- (bool)isDerivative;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToKey:(id)arg1;
- (id)keyData;
- (unsigned int)recipeIDForAssetID:(id)arg1;
- (unsigned int)resourceType;
- (unsigned int)resourceVersion;
- (id)uniformTypeIdentifier;
- (id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2;

@end
