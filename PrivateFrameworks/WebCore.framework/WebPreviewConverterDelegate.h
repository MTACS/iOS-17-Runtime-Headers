
@interface WebPreviewConverterDelegate : NSObject {
    struct WeakPtr<WebCore::PreviewPlatformDelegate, WTF::DefaultWeakPtrImpl> { 
        struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { 
            struct DefaultWeakPtrImpl {} *m_ptr; 
        } m_impl; 
    }  _delegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2 lengthReceived:(long long)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)initWithDelegate:(void*)arg1;

@end
