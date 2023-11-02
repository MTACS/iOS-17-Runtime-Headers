
@interface WebCoreAVFLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate> {
    struct WeakPtr<WebCore::MediaPlayerPrivateAVFoundationObjC, WTF::DefaultWeakPtrImpl> { 
        struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { 
            struct DefaultWeakPtrImpl {} *m_ptr; 
        } m_impl; 
    }  m_player;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithPlayer:(void*)arg1;
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
- (bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (bool)resourceLoader:(id)arg1 shouldWaitForResponseToAuthenticationChallenge:(id)arg2;

@end
