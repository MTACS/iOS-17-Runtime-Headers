
@interface PXLivePhotoViewModulator : NSObject <ISBasePlayerUIViewChangeObserver, PXMutableLivePhotoViewModulator> {
    bool  _animateGainMapAppearance;
    bool  _displayingVideoComplement;
    struct CGImage { } * _gainMapImage;
    float  _gainMapValue;
    PXImageLayerModulator * _imageModulator;
    bool  _isPerformingChanges;
    bool  _isPerformingUpdates;
    ISLivePhotoUIView * _livePhotoView;
    struct { 
        bool input; 
        bool gainMapImage; 
    }  _needsUpdateFlags;
    bool  _revealsGainMapImage;
    PXImageLayerModulator * _videoModulator;
}

@property (nonatomic) bool animateGainMapAppearance;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool displayingVideoComplement;
@property (nonatomic, readonly) struct CGImage { }*gainMapImage;
@property (nonatomic, readonly) float gainMapValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXImageLayerModulator *imageModulator;
@property (nonatomic, readonly) ISLivePhotoUIView *livePhotoView;
@property (nonatomic, readonly) bool revealsGainMapImage;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXImageLayerModulator *videoModulator;

- (void).cxx_destruct;
- (void)_invalidateGainMapImage;
- (void)_invalidateInput;
- (bool)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)_updateGainMapImage;
- (void)_updateIfNeeded;
- (void)_updateInput;
- (bool)animateGainMapAppearance;
- (void)basePlayerUIView:(id)arg1 didChange:(unsigned long long)arg2 withAnimationDuration:(double)arg3;
- (void)dealloc;
- (bool)displayingVideoComplement;
- (struct CGImage { }*)gainMapImage;
- (float)gainMapValue;
- (id)imageModulator;
- (id)init;
- (id)initWithImageModulator:(id)arg1 videoModulator:(id)arg2;
- (id)livePhotoView;
- (void)performChanges:(id /* block */)arg1;
- (void)performChanges_Private:(id /* block */)arg1;
- (void)prepareForReuse;
- (bool)revealsGainMapImage;
- (void)setAnimateGainMapAppearance:(bool)arg1;
- (void)setDisplayingVideoComplement:(bool)arg1;
- (void)setGainMapImage:(struct CGImage { }*)arg1;
- (void)setGainMapImage:(struct CGImage { }*)arg1 animated:(bool)arg2;
- (void)setGainMapValue:(float)arg1;
- (void)setLivePhotoView:(id)arg1;
- (void)setRevealsGainMapImage:(bool)arg1;
- (id)videoModulator;

@end
