
@interface PHLivePhotoResult : PHCompositeMediaResult {
    PHCompositeMediaResult * _imageResult;
    bool  _isDegraded;
    bool  _requiresImageResult;
    PHCompositeMediaResult * _videoResult;
}

- (void).cxx_destruct;
- (void)_mergeInfoDictionaryFromResult:(id)arg1;
- (void)addImageResult:(id)arg1;
- (void)addVideoResult:(id)arg1;
- (id)allowedInfoKeys;
- (unsigned int)cgOrientation;
- (bool)containsValidData;
- (id)exifOrientation;
- (id)imageData;
- (struct CGImage { }*)imageRef;
- (id)imageURL;
- (bool)isDegraded;
- (bool)isPlaceholder;
- (id)sanitizedInfoDictionary;
- (void)setDegraded:(bool)arg1;
- (void)setRequiresImageResult:(bool)arg1;
- (long long)uiOrientation;
- (id)uniformTypeIdentifier;
- (id)videoAdjustmentData;
- (id)videoURL;

@end
