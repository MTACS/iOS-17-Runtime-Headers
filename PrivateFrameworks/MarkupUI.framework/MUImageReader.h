
@interface MUImageReader : NSObject

+ (id)_privateImageMetadataDescriptors;
+ (id)cleanImageMetadataFromData:(id)arg1;
+ (bool)hasPrivateImageMetadata:(id)arg1;
+ (id)imageDescriptionFromSourceContent:(id)arg1;

- (id)_readAnnotationsFromDataProvider:(struct CGDataProvider { }*)arg1;
- (id)_readBaseImageFromDataProvider:(struct CGDataProvider { }*)arg1 providerSource:(id)arg2 baseWasValid:(bool*)arg3;
- (id)_readDataFromTagAtPath:(id)arg1 inMetadata:(struct CGImageMetadata { }*)arg2;
- (bool)readAnnotationsFromArchivedModelData:(id)arg1 toController:(id)arg2;
- (id)readArchivedModelDataFromImageData:(id)arg1;
- (id)readArchivedModelDataFromImageURL:(id)arg1;
- (id)readBaseImageFromData:(id)arg1 baseWasValid:(bool*)arg2;
- (id)readBaseImageFromImageAtURL:(id)arg1 baseWasValid:(bool*)arg2;

@end
