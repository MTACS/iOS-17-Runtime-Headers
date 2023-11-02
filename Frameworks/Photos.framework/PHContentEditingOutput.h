
@interface PHContentEditingOutput : NSObject <NSSecureCoding> {
    NSString * _accessibilityDescription;
    PHAdjustmentData * _adjustmentData;
    NSURL * _appropriateURLForDerivingRenderedContentURLs;
    long long  _baseVersion;
    NSMutableSet * _deliveredRenderedContentURLs;
    NSURL * _editorBundleURL;
    double  _fullSizeRenderDuration;
    long long  _fullSizeRenderHeight;
    long long  _fullSizeRenderWidth;
    bool  _isAsyncAdjustment;
    bool  _isSubstandardRender;
    bool  _loopingLivePhoto;
    long long  _mediaType;
    NSNumber * _originalResourceChoice;
    NSData * _penultimateRenderedJPEGData;
    NSURL * _penultimateRenderedVideoComplementContentURL;
    NSURL * _penultimateRenderedVideoContentURL;
    NSNumber * _playbackVariation;
    NSNumber * _reframeVariation;
    NSURL * _renderedContentURL;
    NSURL * _renderedPreviewContentURL;
    NSURL * _renderedVideoComplementContentURL;
    NSURL * _renderedVideoPosterURL;
    PHContentEditingOutputRequestOptions * _requestOptions;
    NSNumber * _videoDuration;
}

@property (nonatomic, copy) NSString *accessibilityDescription;
@property (retain) PHAdjustmentData *adjustmentData;
@property long long baseVersion;
@property (readonly, copy) UTType *defaultRenderedContentType;
@property (retain) NSURL *editorBundleURL;
@property (nonatomic) double fullSizeRenderDuration;
@property (nonatomic) long long fullSizeRenderHeight;
@property (nonatomic) long long fullSizeRenderWidth;
@property (nonatomic) bool isAsyncAdjustment;
@property (nonatomic) bool isSubstandardRender;
@property (getter=isLoopingLivePhoto, readonly) bool loopingLivePhoto;
@property (readonly) long long mediaType;
@property (nonatomic, retain) NSNumber *originalResourceChoice;
@property (retain) NSData *penultimateRenderedJPEGData;
@property (copy) NSURL *penultimateRenderedVideoComplementContentURL;
@property (copy) NSURL *penultimateRenderedVideoContentURL;
@property (nonatomic, retain) NSNumber *playbackVariation;
@property (nonatomic, retain) NSNumber *reframeVariation;
@property (copy) NSURL *renderedContentURL;
@property (nonatomic, retain) NSURL *renderedPreviewContentURL;
@property (copy) NSURL *renderedVideoComplementContentURL;
@property (copy) NSURL *renderedVideoPosterURL;
@property (nonatomic, readonly) PHContentEditingOutputRequestOptions *requestOptions;
@property (readonly, copy) NSArray *supportedRenderedContentTypes;
@property (nonatomic, retain) NSNumber *videoDuration;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (bool)_currentDeviceSupportsHEICEncoding;
+ (id)_renderURLWithExtensionForMediaType:(long long)arg1 useHEICImage:(bool)arg2 appropriateForURL:(id)arg3;
+ (id)_renderURLWithExtensionForUniformTypeIdentifierType:(id)arg1 appropriateForURL:(id)arg2;
+ (id)defaultExtensionForUniformTypeIdentifierType:(id)arg1;
+ (id)imageRenderURLUsingHEICFormat:(bool)arg1 appropriateForURL:(id)arg2;
+ (unsigned long long)maximumAdjustmentDataLength;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setupRequiredRenderedContentURLsWithEditingInput:(id)arg1 options:(id)arg2;
- (id)accessibilityDescription;
- (id)adjustmentData;
- (id)assetAdjustmentsWithEditorBundleID:(id)arg1;
- (long long)baseVersion;
- (void)clearRenderedContentURL;
- (id)debugDescription;
- (id)defaultRenderedContentType;
- (id)description;
- (id)editorBundleURL;
- (void)encodeWithCoder:(id)arg1;
- (double)fullSizeRenderDuration;
- (long long)fullSizeRenderHeight;
- (long long)fullSizeRenderWidth;
- (id)initWithAdjustmentBaseVersion:(long long)arg1 mediaType:(long long)arg2 appropriateForURL:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentEditingInput:(id)arg1;
- (id)initWithContentEditingInput:(id)arg1 withOptions:(id)arg2;
- (id)initWithPlaceholderForCreatedAsset:(id)arg1;
- (bool)isAsyncAdjustment;
- (bool)isLoopingLivePhoto;
- (bool)isOnlyChangingOriginalChoice;
- (bool)isSubstandardRender;
- (long long)mediaType;
- (id)originalResourceChoice;
- (id)penultimateRenderedJPEGData;
- (id)penultimateRenderedVideoComplementContentURL;
- (id)penultimateRenderedVideoContentURL;
- (id)playbackVariation;
- (id)reframeVariation;
- (id)renderURLWithExtensionForMediaType:(long long)arg1;
- (id)renderedContentURL;
- (id)renderedContentURLForType:(id)arg1 error:(id*)arg2;
- (id)renderedPreviewContentURL;
- (id)renderedVideoComplementContentURL;
- (id)renderedVideoPosterURL;
- (id)requestOptions;
- (void)setAccessibilityDescription:(id)arg1;
- (void)setAdjustmentData:(id)arg1;
- (void)setBaseVersion:(long long)arg1;
- (void)setEditorBundleURL:(id)arg1;
- (void)setFullSizeRenderDuration:(double)arg1;
- (void)setFullSizeRenderHeight:(long long)arg1;
- (void)setFullSizeRenderWidth:(long long)arg1;
- (void)setIsAsyncAdjustment:(bool)arg1;
- (void)setIsSubstandardRender:(bool)arg1;
- (void)setOriginalResourceChoice:(id)arg1;
- (void)setPenultimateRenderedJPEGData:(id)arg1;
- (void)setPenultimateRenderedVideoComplementContentURL:(id)arg1;
- (void)setPenultimateRenderedVideoContentURL:(id)arg1;
- (void)setPlaybackVariation:(id)arg1;
- (void)setReframeVariation:(id)arg1;
- (void)setRenderedContentURL:(id)arg1;
- (void)setRenderedJPEGData:(id)arg1;
- (void)setRenderedPreviewContentURL:(id)arg1;
- (void)setRenderedVideoComplementContentURL:(id)arg1;
- (void)setRenderedVideoPosterURL:(id)arg1;
- (void)setVideoDuration:(id)arg1;
- (bool)shouldPreferHEICForRenderedImages;
- (id)supportedRenderedContentTypes;
- (id)videoDuration;

// Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate

- (id)initWithPhotoEditSnapshot:(id)arg1 appropriateForURL:(id)arg2;

@end
