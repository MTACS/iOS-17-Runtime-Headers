
@interface AVSampleBufferDisplayLayer : CALayer <AVContentKeyRecipient, AVContentKeyRecipientInternal, AVIntegrityChecking, AVMediaDataRequesterConsumer, AVPictureInPictureContentSource, AVQueuedSampleBufferRendering, AVQueuedSampleBufferRenderingInternal> {
    CALayer * _STSLayer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    CALayer * _contentLayer;
    struct CGSize { 
        double width; 
        double height; 
    }  _presentationSize;
    AVSampleBufferVideoRenderer * _sampleBufferVideoRenderer;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSString * _videoGravity;
    AVSampleBufferVideoOutput * _videoOutput;
}

@property (nonatomic, readonly) bool avkit_isVisible;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } avkit_videoRectInWindow;
@property (nonatomic, readonly) UIWindow *avkit_window;
@property (retain) struct OpaqueCMTimebase { }*controlTimebase;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDefunct, nonatomic, readonly) bool defunct;
@property (readonly, copy) NSString *description;
@property (getter=_disallowsVideoLayerDisplayCompositing, setter=_setDisallowsVideoLayerDisplayCompositing:) bool disallowsVideoLayerDisplayCompositing;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) bool hasSufficientMediaDataForReliablePlaybackStart;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool mayRequireContentKeysForMediaDataProcessing;
@property (nonatomic) AVSampleBufferVideoOutput *output;
@property (nonatomic, readonly) bool outputObscuredDueToInsufficientExternalProtection;
@property (nonatomic) bool preventsAutomaticBackgroundingDuringVideoPlayback;
@property (nonatomic) bool preventsCapture;
@property (nonatomic) bool preventsDisplaySleepDuringVideoPlayback;
@property (getter=isReadyForMoreMediaData, readonly) bool readyForMoreMediaData;
@property (nonatomic, readonly) bool requiresFlushToResumeDecoding;
@property (nonatomic, readonly) AVSampleBufferVideoRenderer *sampleBufferRenderer;
@property (getter=_sampleBufferVideoRenderer, nonatomic, readonly) AVSampleBufferVideoRenderer *sampleBufferVideoRenderer;
@property (nonatomic, readonly) long long status;
@property (readonly) Class superclass;
@property (readonly, retain) struct OpaqueCMTimebase { }*timebase;
@property (copy) NSString *videoGravity;

// Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_destRectForAspectRatio:(struct CGSize { double x1; double x2; })arg1;
+ (id)keyPathsForValuesAffectingError;
+ (id)keyPathsForValuesAffectingOutputObscuredDueToInsufficientExternalProtection;
+ (id)keyPathsForValuesAffectingStatus;

- (id)_STSLabel;
- (int)_attachToContentKeySession:(id)arg1 contentKeyBoss:(struct CMBaseObject { }*)arg2 failedSinceAlreadyAttachedToAnotherSession:(bool*)arg3;
- (bool)_attachedToExternalContentKeySession;
- (id)_contentLayer;
- (bool)_disallowsVideoLayerDisplayCompositing;
- (id)_sampleBufferVideoRenderer;
- (void)_setDisallowsVideoLayerDisplayCompositing:(bool)arg1;
- (void)_updateLayerTreeGeometryWithVideoGravity:(id)arg1 presentationSize:(struct CGSize { double x1; double x2; })arg2 videoGravityShouldTriggerAnimation:(bool)arg3;
- (void)_updatePresentationSize:(struct CGSize { double x1; double x2; })arg1;
- (id)contentKeySession;
- (struct OpaqueCMTimebase { }*)controlTimebase;
- (struct __CVBuffer { }*)copyDisplayedPixelBuffer;
- (void)copyFigSampleBufferAudioRenderer:(struct OpaqueFigSampleBufferAudioRenderer {}**)arg1;
- (void)dealloc;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)error;
- (void)expectMinimumUpcomingSampleBufferPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)expectMonotonicallyIncreasingUpcomingSampleBufferPresentationTimes;
- (void)expire;
- (void)flush;
- (void)flushAndRemoveImage;
- (void)flushWithRemovalOfDisplayedImage:(bool)arg1 completionHandler:(id /* block */)arg2;
- (bool)hasSufficientMediaDataForReliablePlaybackStart;
- (id)init;
- (bool)isDefunct;
- (bool)isReadyForMoreMediaData;
- (void)layerDidBecomeVisible:(bool)arg1;
- (void)layoutSublayers;
- (id)makeVideoRenderer;
- (bool)mayRequireContentKeysForMediaDataProcessing;
- (id)output;
- (bool)outputObscuredDueToInsufficientExternalProtection;
- (void)postVideoRectDidChangeNotification;
- (void)prerollDecodeWithCompletionHandler:(id /* block */)arg1;
- (bool)preventsAutomaticBackgroundingDuringVideoPlayback;
- (bool)preventsCapture;
- (bool)preventsDisplaySleepDuringVideoPlayback;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(id /* block */)arg2;
- (bool)requiresFlushToResumeDecoding;
- (void)resetUpcomingSampleBufferPresentationTimeExpectations;
- (id)sampleBufferRenderer;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setControlTimebase:(struct OpaqueCMTimebase { }*)arg1;
- (void)setOutput:(id)arg1;
- (void)setPreventsAutomaticBackgroundingDuringVideoPlayback:(bool)arg1;
- (void)setPreventsCapture:(bool)arg1;
- (void)setPreventsDisplaySleepDuringVideoPlayback:(bool)arg1;
- (bool)setRenderSynchronizer:(id)arg1 error:(id*)arg2;
- (void)setSTSLabel:(id)arg1;
- (void)setToneMapToStandardDynamicRange:(bool)arg1;
- (void)setVideoGravity:(id)arg1;
- (long long)status;
- (void)stopRequestingMediaData;
- (struct OpaqueCMTimebase { }*)timebase;
- (id)videoGravity;
- (id)videoPerformanceMetrics;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })videoRect;

// Image: /System/Library/Frameworks/AVKit.framework/AVKit

- (void)avkit_beginReducingResourcesForPictureInPictureViewController:(id)arg1 playerController:(id)arg2;
- (long long)avkit_contentSourceType;
- (void)avkit_endReducingResourcesForPictureInPictureViewController:(id)arg1 playerController:(id)arg2;
- (bool)avkit_isVisible;
- (id)avkit_makePlayerControllerIfNeeded:(id)arg1;
- (id)avkit_pictureInPictureViewController;
- (void)avkit_removePictureInPicturePlayerController;
- (id)avkit_sampleBufferDisplayLayerPlayerController;
- (void)avkit_startRoutingVideoToPictureInPictureViewController:(id)arg1;
- (void)avkit_stopRoutingVideoToPictureInPictureViewController:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })avkit_videoRectInWindow;
- (bool)avkit_wantsManagedSecondScreenPlayback;
- (void)avkit_willBeginStoppingPictureInPictureForPictureInPictureViewController:(id)arg1;
- (id)avkit_window;

@end
