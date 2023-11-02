
@interface PUReviewAdjustmentOutput : NSObject {
    long long  __adjustmentInputBaseVersion;
    NSURL * __baseImageURL;
    NSURL * __baseVideoURL;
    NSURL * _renderedImageFileURL;
    NSURL * _renderedVideoFileURL;
}

@property (setter=_setAdjustmentInputBaseVersion:, nonatomic) long long _adjustmentInputBaseVersion;
@property (setter=_setBaseImageURL:, nonatomic, retain) NSURL *_baseImageURL;
@property (setter=_setBaseVideoURL:, nonatomic, retain) NSURL *_baseVideoURL;
@property (setter=_setRenderedImageFileURL:, nonatomic, retain) NSURL *renderedImageFileURL;
@property (setter=_setRenderedVideoFileURL:, nonatomic, retain) NSURL *renderedVideoFileURL;

- (void).cxx_destruct;
- (long long)_adjustmentInputBaseVersion;
- (id)_baseImageURL;
- (id)_baseVideoURL;
- (void)_setAdjustmentInputBaseVersion:(long long)arg1;
- (void)_setBaseImageURL:(id)arg1;
- (void)_setBaseVideoURL:(id)arg1;
- (void)_setRenderedImageFileURL:(id)arg1;
- (void)_setRenderedVideoFileURL:(id)arg1;
- (id)renderedImageFileURL;
- (id)renderedVideoFileURL;

@end
