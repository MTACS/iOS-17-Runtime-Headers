
@interface WebGeolocationPolicyListener : NSObject <WebAllowDenyPolicyListener> {
    struct RefPtr<WebCore::Geolocation, WTF::RawPtrTraits<WebCore::Geolocation>, WTF::DefaultRefDerefTraits<WebCore::Geolocation>> { 
        struct Geolocation {} *m_ptr; 
    }  _geolocation;
    struct RetainPtr<WebView> { 
        void *m_ptr; 
    }  _webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)allow;
- (void)deny;
- (void)denyOnlyThisRequest;
- (id)initWithGeolocation:(struct NakedPtr<WebCore::Geolocation> { struct Geolocation {} *x1; })arg1 forWebView:(id)arg2;
- (bool)shouldClearCache;

@end
