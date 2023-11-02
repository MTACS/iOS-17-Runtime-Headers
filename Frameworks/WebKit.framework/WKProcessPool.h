
@interface WKProcessPool : NSObject <NSSecureCoding, WKObject> {
    struct WeakObjCPtr<id<_WKAutomationDelegate>> { 
        id m_weakReference; 
    }  _automationDelegate;
    struct RetainPtr<_WKAutomationSession> { 
        void *m_ptr; 
    }  _automationSession;
    struct RetainPtr<id<_WKGeolocationCoreLocationProvider>> { 
        void *m_ptr; 
    }  _coreLocationProvider;
    struct WeakObjCPtr<id<_WKDownloadDelegate>> { 
        id m_weakReference; 
    }  _downloadDelegate;
    struct RetainPtr<WKGeolocationProviderIOS> { 
        void *m_ptr; 
    }  _geolocationProvider;
    struct ObjectStorage<WebKit::WebProcessPool> { 
        struct type { 
            unsigned char __lx[920]; 
        } data; 
    }  _processPool;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (setter=_setAutomationDelegate:, nonatomic) <_WKAutomationDelegate> *_automationDelegate;
@property (nonatomic, readonly) _WKProcessPoolConfiguration *_configuration;
@property (getter=_isCookieStoragePartitioningEnabled, setter=_setCookieStoragePartitioningEnabled:, nonatomic) bool _cookieStoragePartitioningEnabled;
@property (setter=_setCoreLocationProvider:, nonatomic) <_WKGeolocationCoreLocationProvider> *_coreLocationProvider;
@property (setter=_setDownloadDelegate:, nonatomic) <_WKDownloadDelegate> *_downloadDelegate;
@property (readonly) WKGeolocationProviderIOS *_geolocationProvider;
@property (setter=_setJavaScriptConfigurationDirectory:, nonatomic, copy) NSURL *_javaScriptConfigurationDirectory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/WebKit.framework/WebKit

+ (id)_allProcessPoolsForTesting;
+ (void)_clearCaptivePortalModeEnabledGloballyForTesting;
+ (void)_forceGameControllerFramework;
+ (bool)_lockdownModeEnabledGloballyForTesting;
+ (void)_setCaptivePortalModeEnabledGloballyForTesting:(bool)arg1;
+ (void)_setLinkedOnOrAfterEverything;
+ (void)_setLinkedOnOrAfterEverythingForTesting;
+ (void)_setLinkedOnOrBeforeEverythingForTesting;
+ (void)_setWebProcessCountLimit:(unsigned int)arg1;
+ (id)_sharedProcessPool;
+ (id)_websiteDataURLForContainerWithURL:(id)arg1;
+ (id)_websiteDataURLForContainerWithURL:(id)arg1 bundleIdentifierIfNotInContainer:(id)arg2;
+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addSupportedPlugin:(id)arg1 named:(id)arg2 withMimeTypes:(id)arg3 withExtensions:(id)arg4;
- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (void)_automationCapabilitiesDidChange;
- (id)_automationDelegate;
- (void)_clearPermanentCredentialsForProtectionSpace:(id)arg1;
- (void)_clearSupportedPlugins;
- (void)_clearWebProcessCache;
- (id)_configuration;
- (id)_coreLocationProvider;
- (id)_downloadDelegate;
- (id)_downloadURLRequest:(id)arg1 websiteDataStore:(id)arg2 originatingWebView:(id)arg3;
- (void)_garbageCollectJavaScriptObjectsForTesting;
- (id)_geolocationProvider;
- (void)_getActivePagesOriginsInWebProcessForTesting:(int)arg1 completionHandler:(id /* block */)arg2;
- (int)_gpuProcessIdentifier;
- (bool)_hasAudibleMediaActivity;
- (bool)_hasPrewarmedWebProcess;
- (id)_initWithConfiguration:(id)arg1;
- (bool)_isCookieStoragePartitioningEnabled;
- (bool)_isWebProcessSuspended:(int)arg1;
- (id)_javaScriptConfigurationDirectory;
- (void)_makeNextWebProcessLaunchFailForTesting;
- (unsigned long long)_maximumSuspendedPageCount;
- (struct OpaqueWKNotificationManager { }*)_notificationManagerForTesting;
- (unsigned long long)_numberOfConnectedGameControllerFrameworkGamepadsForTesting;
- (unsigned long long)_numberOfConnectedGamepadsForTesting;
- (unsigned long long)_numberOfConnectedHIDGamepadsForTesting;
- (id)_objectForBundleParameter:(id)arg1;
- (unsigned long long)_pluginProcessCount;
- (void)_preconnectToServer:(id)arg1;
- (int)_prewarmedProcessIdentifier;
- (unsigned long long)_processCacheCapacity;
- (unsigned long long)_processCacheSize;
- (void)_registerURLSchemeAsBypassingContentSecurityPolicy:(id)arg1;
- (void)_registerURLSchemeAsCanDisplayOnlyIfCanRequest:(id)arg1;
- (void)_registerURLSchemeAsSecure:(id)arg1;
- (bool)_requestWebProcessTermination:(int)arg1;
- (id)_resumeDownloadFromData:(id)arg1 websiteDataStore:(id)arg2 path:(id)arg3 originatingWebView:(id)arg4;
- (void)_seedResourceLoadStatisticsForTestingWithFirstParty:(id)arg1 thirdParty:(id)arg2 shouldScheduleNotification:(bool)arg3 completionHandler:(id /* block */)arg4;
- (unsigned long long)_serviceWorkerProcessCount;
- (void)_setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2;
- (void)_setAutomationDelegate:(id)arg1;
- (void)_setAutomationSession:(id)arg1;
- (void)_setCanHandleHTTPSServerTrustEvaluation:(bool)arg1;
- (void)_setCookieStoragePartitioningEnabled:(bool)arg1;
- (void)_setCoreLocationProvider:(id)arg1;
- (void)_setDomainRelaxationForbiddenForURLScheme:(id)arg1;
- (void)_setDownloadDelegate:(id)arg1;
- (void)_setJavaScriptConfigurationDirectory:(id)arg1;
- (void)_setObject:(id)arg1 forBundleParameter:(id)arg2;
- (void)_setObjectsForBundleParametersWithDictionary:(id)arg1;
- (void)_setUseSeparateServiceWorkerProcess:(bool)arg1;
- (void)_setUsesOnlyHIDGamepadProviderForTesting:(bool)arg1;
- (void)_terminateAllWebContentProcesses;
- (void)_terminateServiceWorkers;
- (void)_warmInitialProcess;
- (unsigned long long)_webPageContentProcessCount;
- (unsigned long long)_webProcessCount;
- (unsigned long long)_webProcessCountIgnoringPrewarmed;
- (unsigned long long)_webProcessCountIgnoringPrewarmedAndCached;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

// Image: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages

+ (id)webContentProcessPool;

// Image: /System/Library/PrivateFrameworks/Silex.framework/Silex

+ (id)embedProcessPool;

@end
