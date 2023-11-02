
@interface PLTaggedPointerDataStoreKey : PLTaggedPointer <PLChooserKeyProperties, PLResourceDataStoreKey, PLTableThumbResourceKey>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)keyWithKeyStruct:(const void*)arg1 keyLength:(unsigned long long)arg2 forStoreClassID:(unsigned short)arg3 inLibraryWithID:(id)arg4;

- (id)_heapAllocatedRepresentationInLibraryWithID:(id)arg1;
- (id)descriptionForAssetID:(id)arg1;
- (id)fileURLForAssetID:(id)arg1;
- (id)initWithKeyStruct:(const void*)arg1;
- (bool)isDerivative;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToKey:(id)arg1;
- (id)keyData;
- (unsigned int)recipeIDForAssetID:(id)arg1;
- (bool)representsSquareResource;
- (unsigned int)resourceType;
- (unsigned int)resourceVersion;
- (void)tableType:(unsigned int*)arg1 index:(int*)arg2;
- (id)uniformTypeIdentifier;
- (id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2;

@end
