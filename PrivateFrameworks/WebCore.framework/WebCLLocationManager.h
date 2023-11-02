
@interface WebCLLocationManager : NSObject <CLLocationManagerDelegate> {
    struct Client { int (**x1)(); } * _client;
    bool  _isWaitingForAuthorization;
    struct RetainPtr<CLLocationManager> { 
        void *m_ptr; 
    }  _locationManager;
    bool  _mode;
    struct String { 
        struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
            struct StringImpl {} *m_ptr; 
        } m_impl; 
    }  _websiteIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithWebsiteIdentifier:(const void*)arg1 client:(struct Client { int (**x1)(); }*)arg2 mode:(bool)arg3;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (void)setEnableHighAccuracy:(bool)arg1;
- (void)stop;

@end
