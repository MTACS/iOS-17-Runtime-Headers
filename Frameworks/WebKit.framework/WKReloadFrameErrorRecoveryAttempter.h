
@interface WKReloadFrameErrorRecoveryAttempter : NSObject <NSSecureCoding, _WKErrorRecoveryAttempting> {
    struct RetainPtr<_WKFrameHandle> { 
        void *m_ptr; 
    }  _frameHandle;
    struct String { 
        struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
            struct StringImpl {} *m_ptr; 
        } m_impl; 
    }  _urlString;
    struct WeakObjCPtr<WKWebView> { 
        id m_weakReference; 
    }  _webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)attemptRecovery;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWebView:(id)arg1 frameHandle:(id)arg2 urlString:(const void*)arg3;

@end
