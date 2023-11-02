
@interface PLThumbnailResourceDataStoreKey : NSObject <PLResourceDataStoreKey, PLTableThumbResourceKey> {
    struct PLThumbnailDataStoreKeyStruct_V1 { 
        unsigned int version : 2; 
        unsigned int type : 3; 
        unsigned int unused : 1; 
        unsigned int index : 27; 
    }  _keyStruct;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int index;
@property (nonatomic) struct PLThumbnailDataStoreKeyStruct_V1 { unsigned int x1 : 2; unsigned int x2 : 3; unsigned int x3 : 1; unsigned int x4 : 27; } keyStruct;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int tableType;

+ (id)fileURLForPayloadKeyData:(unsigned long long)arg1 assetID:(id)arg2;
+ (unsigned int)recipeIDForTableType:(unsigned int)arg1 inStore:(id)arg2;
+ (bool)representsSquareResourceForPayloadKeyData:(unsigned long long)arg1;

- (id)descriptionForAssetID:(id)arg1;
- (id)fileURLForAssetID:(id)arg1;
- (int)index;
- (id)initWithKeyStruct:(const void*)arg1;
- (bool)isDerivative;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToKey:(id)arg1;
- (id)keyData;
- (struct PLThumbnailDataStoreKeyStruct_V1 { unsigned int x1 : 2; unsigned int x2 : 3; unsigned int x3 : 1; unsigned int x4 : 27; })keyStruct;
- (bool)representsSquareResource;
- (unsigned int)resourceType;
- (unsigned int)resourceVersion;
- (void)setKeyStruct:(struct PLThumbnailDataStoreKeyStruct_V1 { unsigned int x1 : 2; unsigned int x2 : 3; unsigned int x3 : 1; unsigned int x4 : 27; })arg1;
- (unsigned int)tableType;
- (void)tableType:(unsigned int*)arg1 index:(int*)arg2;
- (id)uniformTypeIdentifier;
- (id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2;

@end
