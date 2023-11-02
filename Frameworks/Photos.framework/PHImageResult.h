
@interface PHImageResult : PHCompositeMediaResult {
    bool  _degraded;
    NSNumber * _exifOrientation;
    struct CGImage { } * _imageRef;
    bool  _isDerivedFromDeferredPreview;
    bool  _isPlaceholder;
    NSString * _uniformTypeIdentifier;
}

@property (nonatomic, copy) NSNumber *exifOrientation;
@property (nonatomic, copy) NSString *uniformTypeIdentifier;

- (void).cxx_destruct;
- (id)allowedInfoKeys;
- (bool)containsValidData;
- (void)dealloc;
- (id)exifOrientation;
- (id)imageData;
- (struct CGImage { }*)imageRef;
- (id)imageURL;
- (bool)isDegraded;
- (bool)isDerivedFromDeferredPreview;
- (bool)isPlaceholder;
- (id)sanitizedInfoDictionary;
- (void)setDegraded:(bool)arg1;
- (void)setExifOrientation:(id)arg1;
- (void)setHighDynamicRangeGainMap:(struct __CVBuffer { }*)arg1 orientation:(unsigned int)arg2 averagePixelLuminance:(id)arg3;
- (void)setImageData:(id)arg1;
- (void)setImageRef:(struct CGImage { }*)arg1;
- (void)setImageURL:(id)arg1;
- (void)setIsDerivedFromDeferredPreview:(bool)arg1;
- (void)setIsPlaceholder:(bool)arg1;
- (void)setUniformTypeIdentifier:(id)arg1;
- (long long)uiOrientation;
- (id)uniformTypeIdentifier;

@end
