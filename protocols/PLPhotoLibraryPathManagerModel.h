
@protocol PLPhotoLibraryPathManagerModel <NSObject>

@required

- (NSString *)assetAbbreviatedMetadataDirectoryForDirectory:(NSString *)arg1 type:(unsigned char)arg2 bundleScope:(unsigned short)arg3;
- (NSString *)assetMainFilePathWithDirectory:(NSString *)arg1 filename:(NSString *)arg2 bundleScope:(unsigned short)arg3;
- (NSString *)pathToAssetAlbumOrderStructure;

@end
