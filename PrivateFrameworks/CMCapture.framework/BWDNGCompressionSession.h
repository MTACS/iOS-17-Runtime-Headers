
@interface BWDNGCompressionSession : NSObject <BWPhotoCompressionSession> {
    unsigned long long  _auxiliaryImagesSize;
    unsigned long long  _containerSize;
    long long  _currentSettingsID;
    struct CMPhotoDNGCompressor { } * _dngCompressor;
    unsigned long long  _previewImageSize;
}

@property (nonatomic, readonly) unsigned long long auxiliaryImagesSize;
@property (nonatomic, readonly) unsigned long long containerSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long thumbnailImageSize;

- (int)addAuxImage:(struct __CVBuffer { }*)arg1 type:(int)arg2 auxImageMetadata:(struct CGImageMetadata { }*)arg3 options:(id)arg4;
- (int)addCompressedThumbnailImage:(struct __IOSurface { }*)arg1 thumbnailImageSize:(unsigned long long)arg2 options:(id)arg3;
- (int)addMainImage:(struct __CVBuffer { }*)arg1 metadata:(id)arg2 options:(id)arg3;
- (int)addMetadata:(id)arg1;
- (int)addThumbnailImage:(struct __CVBuffer { }*)arg1 options:(id)arg2;
- (unsigned long long)auxiliaryImagesSize;
- (int)closeContainer;
- (int)closeContainerAndCopySurfaceOut:(struct __IOSurface {}**)arg1;
- (unsigned long long)containerSize;
- (void)dealloc;
- (id)description;
- (bool)isContainerOpen;
- (int)openContainerWithOptions:(id)arg1 settingsID:(long long)arg2;
- (unsigned long long)thumbnailImageSize;

@end
