
@interface ISBasePlayerUIView : UIView <ISBasePlayerOutput, ISChangeObserver> {
    <ISBasePlayerUIViewChangeObserver> * __changeObserver;
    NSObject<OS_dispatch_queue> * _audioSessionQueue;
    struct { 
        bool didChangeWithAnimationDuration; 
    }  _changeObserverRespondsTo;
    UIView * _containerView;
    ISPlayerOutputContent * _content;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentsRect;
    UIView * _customPhotoView;
    UIImage * _overrideImage;
    UIImageView * _photoView;
    ISBasePlayer * _player;
    struct CGPoint { 
        double x; 
        double y; 
    }  _scaleAnchorOffset;
    ISVideoPlayerUIView * _videoBlurView;
    UIView * _videoContainerView;
    CAFilter * _videoFilter;
    id /* block */  _videoLayerReadyForDisplayChangeHandler;
    CAMeshTransform * _videoTransform;
    ISVideoPlayerUIView * _videoView;
    ISWrappedAVAudioSession * _wrappedAudioSession;
}

@property (setter=_setChangeObserver:, nonatomic) <ISBasePlayerUIViewChangeObserver> *_changeObserver;
@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentsRect;
@property (nonatomic, retain) UIView *customPhotoView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDisplayingPhoto, nonatomic, readonly) bool displayingPhoto;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isVideoReadyForDisplay;
@property (nonatomic, retain) UIImage *overrideImage;
@property (nonatomic, readonly) UIImageView *photoView;
@property (nonatomic, retain) ISBasePlayer *player;
@property (nonatomic) struct CGPoint { double x1; double x2; } scaleAnchorOffset;
@property (readonly) Class superclass;
@property (nonatomic, readonly) ISVideoPlayerUIView *videoBlurView;
@property (nonatomic, readonly) UIView *videoContainerView;
@property (nonatomic, retain) CAFilter *videoFilter;
@property (nonatomic, copy) id /* block */ videoLayerReadyForDisplayChangeHandler;
@property (nonatomic, copy) CAMeshTransform *videoTransform;
@property (nonatomic, readonly) ISVideoPlayerUIView *videoView;
@property (setter=_setWrappedAudioSession:, nonatomic, retain) ISWrappedAVAudioSession *wrappedAudioSession;

+ (Class)playerClass;

- (void).cxx_destruct;
- (id)_changeObserver;
- (void)_performCommonInitialization;
- (void)_setChangeObserver:(id)arg1;
- (void)_setWrappedAudioSession:(id)arg1;
- (void)_signalChange:(unsigned long long)arg1 withAnimationDuration:(double)arg2;
- (void)_updatePhotoView;
- (void)_updatePlayerAudioSession;
- (void)_updateVideoViewsFrameWithContainerBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_videoViewReadyForDisplayDidChange;
- (void)applyOutputInfo:(id)arg1 withTransitionOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)applyScale:(double)arg1 withTransitionOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)audioSessionDidChange;
- (id)containerView;
- (void)contentDidChange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsRect;
- (id)customPhotoView;
- (id)generateSnapshotImage;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDisplayingPhoto;
- (bool)isVideoReadyForDisplay;
- (void)layoutSubviews;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)overrideImage;
- (id)photoView;
- (id)player;
- (void)playerDidChange;
- (void)registerChangeObserver:(id)arg1;
- (struct CGPoint { double x1; double x2; })scaleAnchorOffset;
- (void)setContent:(id)arg1;
- (void)setContentMode:(long long)arg1;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCustomPhotoView:(id)arg1;
- (void)setOverrideImage:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setScaleAnchorOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setVideoFilter:(id)arg1;
- (void)setVideoLayerReadyForDisplayChangeHandler:(id /* block */)arg1;
- (void)setVideoTransform:(id)arg1;
- (void)unregisterChangeObserver:(id)arg1;
- (id)videoBlurView;
- (id)videoContainerView;
- (id)videoFilter;
- (id /* block */)videoLayerReadyForDisplayChangeHandler;
- (id)videoTransform;
- (id)videoView;
- (id)wrappedAudioSession;

@end
