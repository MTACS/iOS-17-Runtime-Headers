
@interface WKCustomProtocolLoader : NSObject <NSURLConnectionDelegate> {
    struct ObjectIdentifierGeneric<WebKit::LegacyCustomProtocolIDType, WTF::ObjectIdentifierThreadSafeAccessTraits> { 
        unsigned long long m_identifier; 
    }  _customProtocolID;
    struct WeakPtr<WebKit::LegacyCustomProtocolManagerProxy, WTF::DefaultWeakPtrImpl> { 
        struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { 
            struct DefaultWeakPtrImpl {} *m_ptr; 
        } m_impl; 
    }  _customProtocolManagerProxy;
    unsigned long long  _storagePolicy;
    struct RetainPtr<NSURLConnection> { 
        void *m_ptr; 
    }  _urlConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancel;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (id)initWithLegacyCustomProtocolManagerProxy:(void*)arg1 customProtocolID:(struct ObjectIdentifierGeneric<WebKit::LegacyCustomProtocolIDType, WTF::ObjectIdentifierThreadSafeAccessTraits> { unsigned long long x1; })arg2 request:(id)arg3;

@end
