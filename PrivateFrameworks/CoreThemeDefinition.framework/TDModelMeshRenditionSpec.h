
@interface TDModelMeshRenditionSpec : TDModelObjectRenditionSpec

@property (nonatomic, retain) NSOrderedSet *submeshes;

+ (id)fetchRequest;

- (id)createCSIRepresentationWithCompression:(bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (void)processSubMesh:(id)arg1 withAssetSubmeshIndex:(unsigned int*)arg2 assetKeySpec:(id)arg3 inDocument:(id)arg4;

@end
