
@interface WKCustomProtocol : NSURLProtocol {
    struct ObjectIdentifierGeneric<WebKit::LegacyCustomProtocolIDType, WTF::ObjectIdentifierThreadSafeAccessTraits> { 
        unsigned long long m_identifier; 
    }  _customProtocolID;
    struct RetainPtr<__CFRunLoop *> { 
        void *m_ptr; 
    }  _initializationRunLoop;
}

@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{ObjectIdentifierGeneric<WebKit::LegacyCustomProtocolIDType' */ struct  customProtocolID; /* unknown property attribute:  WTF::ObjectIdentifierThreadSafeAccessTraits>=Q} */
@property (nonatomic, readonly) struct __CFRunLoop { }*initializationRunLoop;

+ (bool)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct ObjectIdentifierGeneric<WebKit::LegacyCustomProtocolIDType, WTF::ObjectIdentifierThreadSafeAccessTraits> { unsigned long long x1; })customProtocolID;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;
- (struct __CFRunLoop { }*)initializationRunLoop;
- (void)startLoading;
- (void)stopLoading;

@end
