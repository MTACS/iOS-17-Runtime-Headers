
@interface WKGeolocationProviderIOS : NSObject {
    struct RetainPtr<id<_WKGeolocationCoreLocationProvider>> { 
        void *m_ptr; 
    }  _coreLocationProvider;
    struct RefPtr<WebKit::WebGeolocationManagerProxy, WTF::RawPtrTraits<WebKit::WebGeolocationManagerProxy>, WTF::DefaultRefDerefTraits<WebKit::WebGeolocationManagerProxy>> { 
        struct WebGeolocationManagerProxy {} *m_ptr; 
    }  _geolocationManager;
    bool  _isWebCoreGeolocationActive;
    struct RefPtr<WebKit::WebGeolocationPosition, WTF::RawPtrTraits<WebKit::WebGeolocationPosition>, WTF::DefaultRefDerefTraits<WebKit::WebGeolocationPosition>> { 
        struct WebGeolocationPosition {} *m_ptr; 
    }  _lastActivePosition;
    struct Deque<GeolocationRequestData, 0UL> { 
        unsigned long long m_start; 
        unsigned long long m_end; 
        struct VectorBuffer<GeolocationRequestData, 0UL, WTF::FastMalloc> { 
            struct GeolocationRequestData {} *m_buffer; 
            unsigned int m_capacity; 
            unsigned int m_size; 
        } m_buffer; 
    }  _requestsWaitingForCoreLocationAuthorization;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_setEnableHighAccuracy:(bool)arg1;
- (void)_startUpdating;
- (void)_stopUpdating;
- (void)decidePolicyForGeolocationRequestFromOrigin:(void*)arg1 completionHandler:(void*)arg2 view:(id)arg3;
- (void)errorOccurred:(id)arg1;
- (void)geolocationAuthorizationDenied;
- (void)geolocationAuthorizationGranted;
- (id)init;
- (id)initWithProcessPool:(void*)arg1;
- (void)positionChanged:(id)arg1;
- (void)resetGeolocation;

@end
