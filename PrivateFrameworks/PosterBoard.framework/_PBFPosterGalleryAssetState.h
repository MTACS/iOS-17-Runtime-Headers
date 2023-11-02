
@interface _PBFPosterGalleryAssetState : NSObject {
    PBFPosterGalleryAsset * _asset;
    PRPosterDescriptorGalleryOptions * _galleryOptions;
    bool  _galleryOptionsDidFail;
    bool  _isLiveAlwaysPoster;
    bool  _isVisible;
    long long  _livePreviewState;
    PBFGalleryPosterViewController * _livePreviewViewController;
    <PBFPosterPreview> * _preview;
    _PBFImageView * _previewImageView;
    bool  _shouldPrefetch;
    PBFPosterSnapshotCollection * _snapshotCollection;
    bool  _willUseLivePreview;
}

@property (nonatomic, readonly) PBFPosterGalleryAsset *asset;
@property (nonatomic, readonly) PRPosterDescriptorGalleryOptions *galleryOptions;
@property (nonatomic, readonly) bool isLiveAlwaysPoster;
@property (setter=setVisible:, nonatomic) bool isVisible;
@property (nonatomic) long long livePreviewState;
@property (nonatomic, retain) PBFGalleryPosterViewController *livePreviewViewController;
@property (nonatomic, readonly) <PBFPosterPreview> *preview;
@property (nonatomic, retain) _PBFImageView *previewImageView;
@property (nonatomic) bool shouldPrefetch;
@property (nonatomic, readonly) PBFPosterSnapshotCollection *snapshotCollection;
@property (nonatomic, readonly) bool willUseLivePreview;

+ (id)liveAlwaysPostersPredicate;

- (void).cxx_destruct;
- (id)asset;
- (id)galleryOptions;
- (unsigned long long)hash;
- (id)initWithPreview:(id)arg1;
- (bool)isLiveAlwaysPoster;
- (bool)isVisible;
- (long long)livePreviewState;
- (id)livePreviewViewController;
- (id)preview;
- (id)previewImageView;
- (void)setLivePreviewState:(long long)arg1;
- (void)setLivePreviewViewController:(id)arg1;
- (void)setPreviewImageView:(id)arg1;
- (void)setShouldPrefetch:(bool)arg1;
- (void)setVisible:(bool)arg1;
- (bool)shouldPrefetch;
- (id)snapshotCollection;
- (bool)willUseLivePreview;

@end
