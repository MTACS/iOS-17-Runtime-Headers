
@interface PPKImageReader : NSObject

+ (id)_privateImageMetadataDescriptors;

- (id)_readAnnotationsFromDataProvider:(struct CGDataProvider { }*)arg1;
- (id)_readDataFromTagAtPath:(id)arg1 inMetadata:(struct CGImageMetadata { }*)arg2;

@end
