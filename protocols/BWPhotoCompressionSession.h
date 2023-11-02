
@protocol BWPhotoCompressionSession <NSObject>

@required

- (int)addAuxImage:(struct __CVBuffer { }*)arg1 type:(int)arg2 auxImageMetadata:(struct CGImageMetadata { }*)arg3 options:(NSDictionary *)arg4;
- (int)addCompressedThumbnailImage:(struct __IOSurface { }*)arg1 thumbnailImageSize:(unsigned long long)arg2 options:(NSDictionary *)arg3;
- (int)addMainImage:(struct __CVBuffer { }*)arg1 metadata:(NSDictionary *)arg2 options:(NSDictionary *)arg3;
- (int)addMetadata:(NSDictionary *)arg1;
- (int)addThumbnailImage:(struct __CVBuffer { }*)arg1 options:(NSDictionary *)arg2;
- (unsigned long long)auxiliaryImagesSize;
- (int)closeContainer;
- (int)closeContainerAndCopySurfaceOut:(struct __IOSurface {}**)arg1;
- (unsigned long long)containerSize;
- (bool)isContainerOpen;
- (int)openContainerWithOptions:(NSDictionary *)arg1 settingsID:(long long)arg2;
- (unsigned long long)thumbnailImageSize;

@end
