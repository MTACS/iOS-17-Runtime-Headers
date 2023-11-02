
@interface WebGeolocationProviderInitializationListener : NSObject <WebGeolocationProviderInitializationListener> {
    struct RefPtr<WebCore::Geolocation, WTF::RawPtrTraits<WebCore::Geolocation>, WTF::DefaultRefDerefTraits<WebCore::Geolocation>> { 
        struct Geolocation {} *m_ptr; 
    }  m_geolocation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithGeolocation:(struct NakedRef<WebCore::Geolocation> { struct Geolocation {} *x1; })arg1;
- (void)initializationAllowedWebView:(id)arg1;
- (void)initializationDeniedWebView:(id)arg1;

@end
