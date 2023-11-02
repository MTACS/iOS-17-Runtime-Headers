
@interface NSURLRequestInternal : NSObject <NSCopying> {
    struct URLRequest { 
        int (**_vptr$CoreLoggable)(); 
        struct __CFURL {} *fURL; 
        unsigned long long fCachePolicy; 
        double fTimeout; 
        struct __CFURL {} *fMainDocumentURL; 
        struct __CFDictionary {} *fProtocolProperties; 
        struct __CFDictionary {} *fProxyDict; 
        struct HTTPRequest {} *fHTTPRequest; 
        struct Flags { 
            unsigned int _flag_SHOULD_HANDLE_HTTP_COOKIES : 1; 
            unsigned int _flag_IS_MUTABLE : 1; 
            unsigned int _flag_SHOULD_START_SYNCHRONOUSLY : 1; 
            unsigned int _flag_ALLOW_CELLULAR : 1; 
            unsigned int _flag_PREVENTSIDLESYSTEMSLEEP : 1; 
            unsigned int _flag_SET_EXPLICIT_SHOULD_HANDLE_COOKIES : 1; 
            unsigned int _flag_SET_EXPLICIT_NETWORK_SERVICE_TYPE : 1; 
            unsigned int _flag_SET_EXPLICIT_ALLOWS_CELLULAR : 1; 
            unsigned int _flag_SET_EXPLICIT_PREVENTS_IDLE_SYSTEM_SLEEP : 1; 
            unsigned int _flag_SET_EXPLICIT_SHOULD_PIPELINE : 1; 
            unsigned int _flag_SET_EXPLICIT_CACHE_POLICY : 1; 
            unsigned int _flag_SET_EXPLICIT_TIMEOUT : 1; 
            unsigned int _flag_SET_EXPLICIT_PROXY_DICT : 1; 
            unsigned int _flag_SET_EXPLICIT_SSL_PROPERTIES : 1; 
            unsigned int _flag_SET_EXPLICIT_SHOULD_START_SYNCHRONOUSLY : 1; 
        } fFlags; 
        struct __CFDictionary {} *fSSLProps; 
        struct __CFArray {} *fContentDispositionHeaderEncodingFallbackArray; 
        long long fRequestPriority; 
        unsigned long long fAllowedProtocolTypes; 
        int fNetworkServiceType; 
        struct __CFString {} *fBoundInterfaceIdentifier; 
        struct __CFString {} *fTrackerContext; 
        double fTimeWindowDelay; 
        double fTimeWindowDuration; 
        double fStartTimeoutTime; 
        unsigned char fRequiresShortConnectionTimeout; 
        unsigned char fPreventHSTSStorage; 
        unsigned char fIgnoreHSTS; 
        unsigned char fSchemeWasUpgradedDueToDynamicHSTS; 
        unsigned char fAssumesHTTP3Capable; 
        unsigned char fKnownTracker; 
        unsigned char fPrivacyProxyFailClosed; 
        unsigned char fPrivacyProxyFailClosedForUnreachableNonMainHosts; 
        unsigned char fPrivacyProxyFailClosedForUnreachableHosts; 
        unsigned char fProhibitPrivacyProxy; 
        unsigned char fAllowPrivateAccessTokensForThirdParty; 
        unsigned char fUseEnhancedPrivacyMode; 
        unsigned char fBlockTrackers; 
        unsigned char fFailInsecureLoadWithHTTPSDNSRecord; 
        unsigned char fIsWebSearchContent; 
        int fRequiresDNSSECValidation; 
        unsigned long long fAttribution; 
        double fPayloadTransmissionTimeout; 
        struct __CFDictionary {} *fATSOverrides; 
        struct unique_ptr<_CFHSTSPolicy, Deleter_CFRelease> { 
            struct __compressed_pair<_CFHSTSPolicy *, Deleter_CFRelease> { 
                struct _CFHSTSPolicy {} *__value_; 
            } __ptr_; 
        } fHSTSPolicy; 
        int fAllowsExpensiveNetworkAccess; 
        int fAllowsConstrainedNetworkAccess; 
        struct __CFURLStorageSession {} *_explicitStorageSession; 
    }  _request;
}

@property (readonly) void*_inner;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithMessage:(struct __CFHTTPMessage { }*)arg1 bodyParts:(struct __CFArray { }*)arg2 cachePolicy:(unsigned long long)arg3 timeout:(double)arg4 mainDocumentURL:(struct __CFURL { }*)arg5 mutable:(unsigned char)arg6;
- (void*)_inner;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;

@end
