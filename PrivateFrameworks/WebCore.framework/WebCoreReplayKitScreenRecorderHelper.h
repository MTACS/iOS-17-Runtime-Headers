
@interface WebCoreReplayKitScreenRecorderHelper : NSObject {
    struct WeakPtr<WebCore::ReplayKitCaptureSource, WTF::DefaultWeakPtrImpl> { 
        struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { 
            struct DefaultWeakPtrImpl {} *m_ptr; 
        } m_impl; 
    }  _callback;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)disconnect;
- (id)initWithCallback:(void*)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
