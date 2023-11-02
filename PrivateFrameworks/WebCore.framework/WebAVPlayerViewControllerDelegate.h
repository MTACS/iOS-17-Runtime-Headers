
@interface WebAVPlayerViewControllerDelegate : NSObject <AVPlayerViewControllerDelegate_WebKitOnly> {
    struct ThreadSafeWeakPtr<WebCore::VideoFullscreenInterfaceAVKit> { 
        struct RefPtr<WTF::ThreadSafeWeakPtrControlBlock, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock>, WTF::ThreadSafeWeakPtrControlBlockRefDerefTraits> { 
            struct ThreadSafeWeakPtrControlBlock {} *m_ptr; 
        } m_controlBlock; 
        struct VideoFullscreenInterfaceAVKit {} *m_objectOfCorrectType; 
    }  _fullscreenInterface;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) /* Warning: unhandled struct encoding: '{RefPtr<WebCore::VideoFullscreenInterfaceAVKit' */ struct  fullscreenInterface; /* unknown property attribute:  WTF::DefaultRefDerefTraits<WebCore::VideoFullscreenInterfaceAVKit>>=^{VideoFullscreenInterfaceAVKit}} */
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct RefPtr<WebCore::VideoFullscreenInterfaceAVKit, WTF::RawPtrTraits<WebCore::VideoFullscreenInterfaceAVKit>, WTF::DefaultRefDerefTraits<WebCore::VideoFullscreenInterfaceAVKit>> { struct VideoFullscreenInterfaceAVKit {} *x1; })fullscreenInterface;
- (void)playerViewController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2;
- (void)playerViewController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)arg2;
- (bool)playerViewController:(id)arg1 shouldExitFullScreenWithReason:(long long)arg2;
- (void)playerViewControllerDidStartPictureInPicture:(id)arg1;
- (void)playerViewControllerDidStopPictureInPicture:(id)arg1;
- (bool)playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart:(id)arg1;
- (bool)playerViewControllerShouldStartPictureInPictureFromInlineWhenEnteringBackground:(id)arg1;
- (void)playerViewControllerWillStartPictureInPicture:(id)arg1;
- (void)playerViewControllerWillStopPictureInPicture:(id)arg1;
- (void)setFullscreenInterface:(struct RefPtr<WebCore::VideoFullscreenInterfaceAVKit, WTF::RawPtrTraits<WebCore::VideoFullscreenInterfaceAVKit>, WTF::DefaultRefDerefTraits<WebCore::VideoFullscreenInterfaceAVKit>> { struct VideoFullscreenInterfaceAVKit {} *x1; })arg1;

@end
