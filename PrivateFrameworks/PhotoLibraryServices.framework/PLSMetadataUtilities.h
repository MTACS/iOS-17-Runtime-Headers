
@interface PLSMetadataUtilities : NSObject

+ (id)_allAlbumsInPhotoLibrary:(id)arg1;
+ (id)_detailsForAlbum:(id)arg1;
+ (id)_detailsForAsset:(id)arg1 includingLocal:(bool)arg2 includingFingerprints:(bool)arg3;
+ (id)_normalizeObjectForJSON:(id)arg1;
+ (bool)_writeDetails:(id)arg1 forEntityNamed:(id)arg2 toFilepath:(id)arg3 withDefaultFilename:(id)arg4;
+ (void)_writeJSONForObjectDetails:(id)arg1 toFile:(id)arg2;
+ (id)allAlbumsDetailsWriteToPath:(id)arg1 inLibrary:(id)arg2;
+ (id)allAssetsDetailsWriteToPath:(id)arg1 includingLocal:(bool)arg2 includingFingerprints:(bool)arg3 forAlbumTitled:(id)arg4 library:(id)arg5;
+ (id)dictionaryFromManagedObject:(id)arg1 excludeAttributes:(id)arg2 includingRelationships:(id)arg3 excludeRelationshipAttributes:(id)arg4 andSubRelationships:(id)arg5;
+ (bool)initializeJSONFileAtPath:(id)arg1;
+ (void)serializeJSONFromObjectDetails:(id)arg1 ToPath:(id)arg2;
+ (void)writeJSONData:(id)arg1 toFile:(id)arg2;

@end
