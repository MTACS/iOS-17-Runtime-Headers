
@interface _MPCVideoViewControllerMediaFoundationImplementation : UIViewController <AVPlayerViewControllerDelegate, MPCPlaybackEngineEventObserving, MPCVideoOutput> {
    AVPlayerViewController * _internalController;
    MPCPlaybackEngine * _playbackEngine;
    unsigned long long  _stateHandle;
    int  _videoDebugToken;
    <MPCVideoOutputDelegate> * _videoOutputDelegate;
}

@property (nonatomic) bool allowsPictureInPicturePlayback;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AVPlayerViewController *internalController;
@property (getter=isPictureInPictureActive, nonatomic, readonly) bool pictureInPictureActive;
@property (nonatomic, readonly) MPCPlaybackEngine *playbackEngine;
@property (nonatomic, readonly) UIViewController *playerViewController;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } presentationSize;
@property (getter=isReadyForDisplay, nonatomic, readonly) bool readyForDisplay;
@property (nonatomic) bool showsPlaybackControls;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } videoBounds;
@property (nonatomic, copy) NSString *videoGravity;
@property (nonatomic) <MPCVideoOutputDelegate> *videoOutputDelegate;

+ (id)keyPathsForValuesAffectingAllowsPictureInPicturePlayback;
+ (id)keyPathsForValuesAffectingIsPictureInPictureActive;
+ (id)keyPathsForValuesAffectingIsReadyForDisplay;
+ (id)keyPathsForValuesAffectingPresentationSize;
+ (id)keyPathsForValuesAffectingShowsPlaybackControls;
+ (id)keyPathsForValuesAffectingVideoBounds;
+ (id)keyPathsForValuesAffectingVideoGravity;

- (void).cxx_destruct;
- (id)_stateDictionary;
- (void)_updateViewControllerHierarchyForPlaybackEngine:(id)arg1;
- (bool)allowsPictureInPicturePlayback;
- (void)dealloc;
- (id)description;
- (void)engine:(id)arg1 willChangeToItem:(id)arg2 fromItem:(id)arg3;
- (void)engineDidResetMediaServices:(id)arg1;
- (void)enterFullScreenWithCompletion:(id /* block */)arg1;
- (void)exitFullScreenWithCompletion:(id /* block */)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithPlaybackEngine:(id)arg1;
- (id)internalController;
- (bool)isPictureInPictureActive;
- (bool)isReadyForDisplay;
- (id)playbackEngine;
- (id)playerViewController;
- (struct CGSize { double x1; double x2; })presentationSize;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setAllowsPictureInPicturePlayback:(bool)arg1;
- (void)setShowsPlaybackControls:(bool)arg1;
- (void)setVideoGravity:(id)arg1;
- (void)setVideoOutputDelegate:(id)arg1;
- (void)showFullScreenPresentationFromView:(id)arg1 completion:(id /* block */)arg2;
- (bool)showsPlaybackControls;
- (void)stopPictureInPicture;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })videoBounds;
- (id)videoGravity;
- (id)videoOutputDelegate;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
