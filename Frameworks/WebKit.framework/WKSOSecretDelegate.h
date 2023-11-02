
@interface WKSOSecretDelegate : NSObject <WKNavigationDelegate, WKUIDelegate> {
    bool  _isFirstNavigation;
    struct ThreadSafeWeakPtr<WebKit::PopUpSOAuthorizationSession> { 
        struct RefPtr<WTF::ThreadSafeWeakPtrControlBlock, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock>, WTF::ThreadSafeWeakPtrControlBlockRefDerefTraits> { 
            struct ThreadSafeWeakPtrControlBlock {} *m_ptr; 
        } m_controlBlock; 
        struct PopUpSOAuthorizationSession {} *m_objectOfCorrectType; 
    }  _weakSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithSession:(void*)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webViewDidClose:(id)arg1;

@end
