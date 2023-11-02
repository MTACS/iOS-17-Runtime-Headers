
@interface TDTextureRawRenditionSpec : TDTextureImageRenditionSpec

+ (id)fetchRequest;

- (id)createCSIRepresentationWithCompression:(bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (id)textureWithDocument:(id)arg1;

@end
