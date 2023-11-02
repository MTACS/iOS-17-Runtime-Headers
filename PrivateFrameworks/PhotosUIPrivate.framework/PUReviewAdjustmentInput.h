
@interface PUReviewAdjustmentInput : NSObject {
    long long  _adjustmentBaseVersion;
    NSURL * _baseImageFileURL;
    NSURL * _baseVideoFileURL;
    UIImage * _currentPreviewImage;
    NSData * _knownAdjustmentData;
}

@property (setter=_setBaseImageVersion:, nonatomic) long long adjustmentBaseVersion;
@property (setter=_setBaseImageFileURL:, nonatomic) NSURL *baseImageFileURL;
@property (setter=_setBaseVideoFileURL:, nonatomic) NSURL *baseVideoFileURL;
@property (setter=_setCurrentPreviewImage:, nonatomic, retain) UIImage *currentPreviewImage;
@property (setter=_setKnownAdjustmentData:, nonatomic, retain) NSData *knownAdjustmentData;

- (void).cxx_destruct;
- (void)_setBaseImageFileURL:(id)arg1;
- (void)_setBaseImageVersion:(long long)arg1;
- (void)_setBaseVideoFileURL:(id)arg1;
- (void)_setCurrentPreviewImage:(id)arg1;
- (void)_setKnownAdjustmentData:(id)arg1;
- (long long)adjustmentBaseVersion;
- (id)baseImageFileURL;
- (id)baseVideoFileURL;
- (id)currentPreviewImage;
- (id)knownAdjustmentData;

@end
