
@interface WKProcessGroup : NSObject {
    struct WeakObjCPtr<id<WKProcessGroupDelegate>> { 
        id m_weakReference; 
    }  _delegate;
    struct RetainPtr<WKGeolocationProviderIOS> { 
        void *m_ptr; 
    }  _geolocationProvider;
    struct RefPtr<WebKit::WebProcessPool, WTF::RawPtrTraits<WebKit::WebProcessPool>, WTF::DefaultRefDerefTraits<WebKit::WebProcessPool>> { 
        struct WebProcessPool {} *m_ptr; 
    }  _processPool;
}

@property (readonly) struct OpaqueWKContext { }*_contextRef;
@property (readonly) WKGeolocationProviderIOS *_geolocationProvider;
@property (nonatomic) <WKProcessGroupDelegate> *delegate;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct OpaqueWKContext { }*)_contextRef;
- (id)_geolocationProvider;
- (id)delegate;
- (id)init;
- (id)initWithInjectedBundleURL:(id)arg1;
- (id)initWithInjectedBundleURL:(id)arg1 andCustomClassesForParameterCoder:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
