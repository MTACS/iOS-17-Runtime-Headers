
@interface WebVideoFullscreenController : NSObject {
    struct RefPtr<VideoFullscreenControllerContext, WTF::RawPtrTraits<VideoFullscreenControllerContext>, WTF::DefaultRefDerefTraits<VideoFullscreenControllerContext>> { 
        struct VideoFullscreenControllerContext {} *m_ptr; 
    }  _context;
    struct RefPtr<WebCore::HTMLVideoElement, WTF::RawPtrTraits<WebCore::HTMLVideoElement>, WTF::DefaultRefDerefTraits<WebCore::HTMLVideoElement>> { 
        struct HTMLVideoElement {} *m_ptr; 
    }  _videoElement;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didFinishFullscreen:(void*)arg1;
- (void)enterFullscreen:(id)arg1 mode:(unsigned int)arg2;
- (void)exitFullscreen;
- (id)init;
- (void)requestHideAndExitFullscreen;
- (void)setVideoElement:(struct NakedPtr<WebCore::HTMLVideoElement> { struct HTMLVideoElement {} *x1; })arg1;
- (struct NakedPtr<WebCore::HTMLVideoElement> { struct HTMLVideoElement {} *x1; })videoElement;

@end
