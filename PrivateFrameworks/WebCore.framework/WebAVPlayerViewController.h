
@interface WebAVPlayerViewController : NSObject <AVPlayerViewControllerDelegate> {
    struct RetainPtr<AVPlayerViewController> { 
        void *m_ptr; 
    }  _avPlayerViewController;
    struct WeakObjCPtr<WebAVPlayerViewControllerDelegate> { 
        id m_weakReference; 
    }  _delegate;
    struct ThreadSafeWeakPtr<WebCore::VideoFullscreenInterfaceAVKit> { 
        struct RefPtr<WTF::ThreadSafeWeakPtrControlBlock, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock>, WTF::ThreadSafeWeakPtrControlBlockRefDerefTraits> { 
            struct ThreadSafeWeakPtrControlBlock {} *m_ptr; 
        } m_controlBlock; 
        struct VideoFullscreenInterfaceAVKit {} *m_objectOfCorrectType; 
    }  _fullscreenInterface;
    struct RetainPtr<NSTimer> { 
        void *m_ptr; 
    }  _startPictureInPictureTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct { unsigned char x1; char *x2; unsigned char x3; char *x4; id x5; }*logChannel;
@property (nonatomic, readonly) const void*logIdentifier;
@property (nonatomic, readonly) const void*loggerPtr;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)avPlayerViewController;
- (void)dealloc;
- (void)enterFullScreenAnimated:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)exitFullScreenAnimated:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)flashPlaybackControlsWithDuration:(double)arg1;
- (void)initObserver;
- (id)initWithFullscreenInterface:(void*)arg1;
- (bool)isPictureInPictureActive;
- (bool)isPictureInPicturePossible;
- (struct { unsigned char x1; char *x2; unsigned char x3; char *x4; id x5; }*)logChannel;
- (const void*)logIdentifier;
- (const void*)loggerPtr;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)pictureInPictureActive;
- (bool)pictureInPictureWasStartedWhenEnteringBackground;
- (bool)playerViewControllerShouldHandleDoneButtonTap:(id)arg1;
- (void)removeFromParentViewController;
- (void)removeObserver;
- (void)setAllowsPictureInPicturePlayback:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPlayerController:(id)arg1;
- (void)setShowsPlaybackControls:(bool)arg1;
- (void)setWebKitOverrideRouteSharingPolicy:(unsigned long long)arg1 routingContextUID:(id)arg2;
- (bool)showsPlaybackControls;
- (void)startPictureInPicture;
- (void)stopPictureInPicture;
- (void)tryToStartPictureInPicture;
- (id)view;

@end
