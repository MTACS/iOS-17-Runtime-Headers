
@protocol PLAssetID <NSObject>

@required

- (unsigned short)bundleScope;
- (NSString *)directory;
- (NSString *)filename;
- (PLPhotoLibraryPathManagerIdentifier *)libraryID;
- (NSString *)uuid;

@end
