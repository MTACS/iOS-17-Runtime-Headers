
@interface NSURLRequest : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSURLRequestInternal * _internal;
}

@property (readonly, copy) NSData *HTTPBody;
@property (readonly, retain) NSInputStream *HTTPBodyStream;
@property (readonly, copy) NSString *HTTPMethod;
@property (readonly) id HTTPPropertyList;
@property (readonly) bool HTTPShouldHandleCookies;
@property (readonly) bool HTTPShouldUsePipelining;
@property (readonly, copy) NSURL *URL;
@property (getter=_gkSAPSession, setter=_gkSetSAPSession:, nonatomic, retain) GKFairPlaySAPSession *_gkSAPSession;
@property (readonly) void*_inner;
@property (nonatomic, readonly) NSString *adIdentifier;
@property (readonly, copy) NSDictionary *allHTTPHeaderFields;
@property (readonly) bool allowsCellularAccess;
@property (readonly) bool allowsConstrainedNetworkAccess;
@property (readonly) bool allowsExpensiveNetworkAccess;
@property (nonatomic, readonly) NSDictionary *ams_cookies;
@property (nonatomic, readonly) bool ams_requestIsBagLoad;
@property (readonly) bool assumesHTTP3Capable;
@property (readonly) unsigned long long attribution;
@property (readonly) unsigned long long cachePolicy;
@property (nonatomic, readonly) bool hasRecursiveRequestFlag;
@property (readonly, copy) NSURL *mainDocumentURL;
@property (nonatomic, readonly) NSNumber *maximumRequestCount;
@property (readonly) unsigned long long networkServiceType;
@property (nonatomic, readonly) bool recursiveRequestFlag;
@property (nonatomic, readonly) long long requestType;
@property (readonly) bool requiresDNSSECValidation;
@property (readonly) double timeoutInterval;

// Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork

+ (bool)allowsAnyHTTPSCertificateForHost:(id)arg1;
+ (id)allowsSpecificHTTPSCertificateForHost:(id)arg1;
+ (double)defaultTimeoutInterval;
+ (id)requestWithURL:(id)arg1;
+ (id)requestWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3;
+ (void)setAllowsAnyHTTPSCertificate:(bool)arg1 forHost:(id)arg2;
+ (void)setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2;
+ (void)setDefaultTimeoutInterval:(double)arg1;
+ (bool)supportsSecureCoding;

- (id)HTTPBody;
- (id)HTTPBodyStream;
- (id)HTTPContentType;
- (id)HTTPExtraCookies;
- (id)HTTPMethod;
- (id)HTTPPropertyList;
- (id)HTTPReferrer;
- (bool)HTTPShouldHandleCookies;
- (bool)HTTPShouldUsePipelining;
- (id)HTTPUserAgent;
- (id)URL;
- (struct _CFURLRequest { }*)_CFURLRequest;
- (bool)_URLHasScheme:(id)arg1;
- (id)_allHTTPHeaderFieldsAsArrays;
- (id)_allProtocolProperties;
- (bool)_allowPrivateAccessTokensForThirdParty;
- (unsigned long long)_allowedProtocolTypes;
- (bool)_blockTrackers;
- (id)_copyReplacingURLWithURL:(id)arg1;
- (bool)_failInsecureLoadWithHTTPSDNSRecord;
- (bool)_ignoreHSTS;
- (id)_initWithCFURLRequest:(struct _CFURLRequest { }*)arg1;
- (id)_initWithInternal:(id)arg1;
- (void*)_inner;
- (bool)_isIdempotent;
- (bool)_isKnownTracker;
- (bool)_isNonAppInitiated;
- (bool)_isSafeRequestForBackgroundDownload;
- (bool)_isWebSearchContent;
- (bool)_needsNetworkTrackingPrevention;
- (double)_payloadTransmissionTimeout;
- (bool)_preventHSTSStorage;
- (bool)_privacyProxyFailClosed;
- (bool)_privacyProxyFailClosedForUnreachableHosts;
- (bool)_privacyProxyFailClosedForUnreachableNonMainHosts;
- (bool)_prohibitPrivacyProxy;
- (id)_propertyForKey:(id)arg1;
- (void)_removePropertyForKey:(id)arg1;
- (bool)_requiresShortConnectionTimeout;
- (bool)_schemeWasUpgradedDueToDynamicHSTS;
- (void)_setProperty:(id)arg1 forKey:(id)arg2;
- (id)_startTimeoutDate;
- (double)_timeWindowDelay;
- (double)_timeWindowDuration;
- (id)_trackerContext;
- (bool)_useEnhancedPrivacyMode;
- (id)allHTTPHeaderFields;
- (bool)allowsCellularAccess;
- (bool)allowsConstrainedNetworkAccess;
- (bool)allowsExpensiveNetworkAccess;
- (bool)assumesHTTP3Capable;
- (unsigned long long)attribution;
- (id)boundInterfaceIdentifier;
- (unsigned long long)cachePolicy;
- (struct __CFURL { }*)cfURL;
- (id)contentDispositionEncodingFallbackArray;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)expectedWorkload;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithHTTPPropertyList:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3;
- (bool)isEqual:(id)arg1;
- (id)mainDocumentURL;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)networkServiceType;
- (bool)requiresDNSSECValidation;
- (double)timeoutInterval;
- (id)valueForHTTPHeaderField:(id)arg1;

// Image: /System/Library/Frameworks/Social.framework/Social

+ (id)sl_urlRequestWithToken:(id)arg1 forURLString:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount

- (id)aa_HTTPBody;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

- (id)ams_cookies;
- (bool)ams_requestIsBagLoad;
- (id)body;

// Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit

- (bool)ak_usesHTTPSScheme;

// Image: /System/Library/PrivateFrameworks/CDDataAccess.framework/CDDataAccess

- (id)DARequestByApplyingStorageSession:(struct __CFURLStorageSession { }*)arg1;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess

- (id)DARequestByApplyingStorageSession:(struct __CFURLStorageSession { }*)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

- (id)_gkDictionaryKey;
- (id)_gkSAPSession;
- (void)_gkSetSAPSession:(id)arg1;
- (id)loggableHeaders;

// Image: /System/Library/PrivateFrameworks/MediaGroupsDaemon.framework/MediaGroupsDaemon

- (unsigned long long)rq_protocolVersion;
- (unsigned long long)rq_timeout;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)fcRequestWithURL:(id)arg1;
+ (id)fcRequestWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3;
+ (id)overrideUserAgent;
+ (void)setupFeldsparUserAgent;

// Image: /System/Library/PrivateFrameworks/PlatformSSO.framework/PlatformSSO

- (id)psso_DisplayRequest;

// Image: /System/Library/PrivateFrameworks/PromotedContentProxy.framework/PromotedContentProxy

- (id)adIdentifier;
- (bool)hasRecursiveRequestFlag;
- (id)maximumRequestCount;
- (bool)recursiveRequestFlag;
- (long long)requestType;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

+ (id)safari_nonAppInitiatedRequestWithURL:(id)arg1;

- (id)safari_requestBySettingAdvancedPrivacyProtectionsFlagIsEnabled:(bool)arg1;
- (id)safari_requestBySettingIsUserInitiated:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks

- (id)HTTPBodyString;

// Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit

+ (id)wlk_requestWithURL:(id)arg1 httpMethod:(id)arg2 httpBody:(id)arg3 httpHeaders:(id)arg4 cachePolicy:(unsigned long long)arg5 timeout:(double)arg6;
+ (id)wlk_requestWithURL:(id)arg1 httpMethod:(id)arg2 httpHeaders:(id)arg3 cachePolicy:(unsigned long long)arg4 timeout:(double)arg5;

// Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud

- (id)ic_valueForHTTPHeaderField:(id)arg1;
- (id)ic_valuesForCookieWithName:(id)arg1;

@end
