
@interface AVConferencePreview : NSObject {
    bool  _CFAvailable;
    double  _currentZoomFactor;
    bool  _isPreviewRunning;
    NSString * _localCameraUID;
    double  _maxZoomFactor;
    bool  _zoomAvailable;
    NSObject<OS_dispatch_queue> * avConferencePreviewNotificationQueue;
    NSObject<OS_dispatch_queue> * avConferencePreviewQueue;
    CALayer * caLayerBack;
    CALayer * caLayerFront;
    bool  clientWantsPreview;
    AVConferenceXPCClient * connection;
    unsigned int  connectionAttempts;
    NSObject<AVConferencePreviewClientDelegate> * delegate;
    struct CGSize { 
        double width; 
        double height; 
    }  localScreenLandscapeAspectRatio;
    struct CGSize { 
        double width; 
        double height; 
    }  localScreenPortraitAspectRatio;
    VideoAttributes * localVideoAttributes;
}

@property (nonatomic, retain) NSObject<AVConferencePreviewClientDelegate> *delegate;

+ (id)AVConferencePreviewSingleton;

- (void)addStickerWithURL:(id)arg1 isFaceSticker:(bool)arg2 atPosition:(struct CGPoint { double x1; double x2; })arg3 identifier:(id)arg4;
- (id)allocWithZone:(struct _NSZone { }*)arg1;
- (id)autorelease;
- (void)beginPIPToPreviewAnimation;
- (void)beginPreviewToPIPAnimation;
- (void)cameraCFramingAvailabilityDidChange:(bool)arg1;
- (void)cameraDidBecomeAvailableForUniqueID:(id)arg1;
- (void)cameraDidBecomeInterruptedForForUniqueID:(id)arg1 reason:(long long)arg2;
- (void)cameraZoomAvailabilityDidChange:(bool)arg1 currentZoomFactor:(double)arg2 maxZoomFactor:(double)arg3;
- (void)clearAllStickers:(bool)arg1;
- (void)connectLayer:(id)arg1 withSlot:(unsigned int)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)currentZoomFactor;
- (void)dealloc;
- (id)delegate;
- (void)didChangeLocalCameraUID:(id)arg1;
- (void)didChangeLocalScreenAttributes:(id)arg1;
- (void)didChangeLocalVideoAttributes:(id)arg1;
- (void)didGetSnapshot:(id)arg1;
- (void)didPausePreview;
- (void)didReceiveCommError;
- (void)didReceiveErrorFromCameraUniqueID:(id)arg1 error:(id)arg2;
- (void)didStartPreview;
- (void)didStopPreview;
- (void)endPIPToPreviewAnimation;
- (void)endPreviewToPIPAnimation;
- (void)getSnapshot;
- (id)init;
- (bool)isCameraZoomAvailable;
- (bool)isPreviewRunning;
- (unsigned int)localCamera;
- (id)localCameraUID;
- (id)localScreenAttributesForVideoAttributes:(id)arg1;
- (id)localVideoAttributes;
- (id)localVideoLayer:(bool)arg1;
- (double)maxZoomFactor;
- (void)pausePreview;
- (void)registerBlocksForDelegateNotifications;
- (oneway void)release;
- (void)resetLocalCameraAfterServerDisconnect;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setAnimoji:(id)arg1;
- (void)setCameraZoomFactor:(double)arg1;
- (void)setCameraZoomFactor:(double)arg1 withRate:(double)arg2;
- (void)setCinematicFramingEnabled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFollowSystemCameraEnabled:(bool)arg1;
- (void)setLocalCamera:(unsigned int)arg1;
- (void)setLocalCameraWithUID:(id)arg1;
- (void)setLocalScreenAttributes:(id)arg1;
- (void)setLocalVideoAttributes:(id)arg1;
- (void)setLocalVideoLayer:(id)arg1 front:(bool)arg2;
- (void)setMemoji:(id)arg1;
- (void)startPreview;
- (void)startPreviewUnpausing:(bool)arg1;
- (void)stopPreview;

@end
