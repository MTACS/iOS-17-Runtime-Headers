
@interface NSXPCConnection : NSObject <NSXPCProxyCreating> {
    NSObject<OS_xpc_object> * _bootstrap;
    union { 
        NSObject<OS_xpc_object> *xpc; 
        id remote; 
        /* Warning: Unrecognized filer type: ')' using 'void*' */ void*OS_xpc_remote_connection; 
    }  _connection;
    _NSXPCConnectionClassCache * _dCache;
    _Atomic id  _delegate;
    _NSXPCConnectionClassCache * _eCache;
    NSXPCListenerEndpoint * _endpoint;
    _NSXPCConnectionExportedObjectTable * _exportInfo;
    _NSXPCConnectionImportInfo * _importInfo;
    id /* block */  _interruptionHandler;
    id /* block */  _invalidationHandler;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <NSObject> * _otherInfo;
    NSXPCInterface * _remoteObjectInterface;
    _NSXPCConnectionExpectedReplies * _repliesExpected;
    _NSXPCConnectionRequestedReplies * _repliesRequested;
    NSString * _serviceName;
    unsigned int  _state;
    _Atomic unsigned int  _state2;
    <_NSXPCTransport> * _transport;
    NSObject<OS_dispatch_queue> * _userQueue;
}

@property (setter=_EX_setExtensionProcess:, retain) _EXExtensionProcessHandle *_EX_extensionProcess;
@property (nonatomic, readonly, copy) NSString *aaf_bundleID;
@property (nonatomic, readonly, copy) NSString *aaf_processName;
@property (nonatomic) bool activated;
@property (readonly) bool an_isRemotePlaybackSession;
@property (readonly) int auditSessionIdentifier;
@property (nonatomic, readonly, copy) NSString *bundleID;
@property (readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) bool ccs_hasEntitlementForForciblyEnablingModules;
@property (nonatomic, readonly) bool ccs_hasEntitlementForListingModuleIdentifiers;
@property (readonly) NSString *clientID;
@property (nonatomic, readonly) bool cls_isAppExtension;
@property (nonatomic, readonly, copy) NSString *cls_signingIdentifier;
@property (setter=co_SetClientBundleIdentifier:, nonatomic, copy) NSString *co_ClientBundleIdentifier;
@property (setter=co_setOriginalInterruptionHandler:, nonatomic, copy) id /* block */ co_originalInterruptionHandler;
@property (setter=co_setOriginalInvalidationHandler:, nonatomic, copy) id /* block */ co_originalInvalidationHandler;
@property (nonatomic, readonly, copy) NSString *cx_applicationIdentifier;
@property (nonatomic, readonly, copy) NSString *cx_bundleIdentifier;
@property (nonatomic, readonly, copy) NSSet *cx_capabilities;
@property (nonatomic, readonly, copy) NSString *cx_developerTeamIdentifier;
@property (nonatomic, readonly, copy) NSString *cx_processName;
@property (getter=cx_isProcessOnDemandInstallCapable, nonatomic, readonly) bool cx_processOnDemandInstallCapable;
@property (readonly) unsigned int effectiveGroupIdentifier;
@property (readonly) unsigned int effectiveUserIdentifier;
@property (readonly, retain) NSXPCListenerEndpoint *endpoint;
@property (retain) NSXPCInterface *exportedInterface;
@property (retain) id exportedObject;
@property (nonatomic, readonly) FPXPCSanitizer *fp_sanitizer;
@property (readonly) bool hasAnnounceEntitlement;
@property (nonatomic, readonly) bool hk_isAppExtension;
@property (copy) id /* block */ interruptionHandler;
@property (copy) id /* block */ invalidationHandler;
@property (nonatomic, readonly, copy) NSString *processBundleIdentifier;
@property (readonly) int processIdentifier;
@property (nonatomic, readonly, copy) NSString *processName;
@property (retain) NSXPCInterface *remoteObjectInterface;
@property (readonly, retain) id remoteObjectProxy;
@property (nonatomic, readonly) LSApplicationRecord *safari_applicationRecordForConnectedProcess;
@property (readonly, copy) NSString *serviceName;
@property (nonatomic) bool shouldHandleInvalidation;
@property (nonatomic, readonly) NSString *wd_bundleIdentifier;
@property (nonatomic, readonly) NSString *wd_codesigningIdentifier;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (void)_handoffCurrentReplyToQueue:(id)arg1 block:(id /* block */)arg2;
+ (void)beginTransaction;
+ (id)currentConnection;
+ (void)endTransaction;

- (id /* block */)_additionalInvalidationHandler;
- (void)_cancelProgress:(unsigned long long)arg1;
- (void)_decodeAndInvokeMessageWithEvent:(id)arg1 reply:(id)arg2 flags:(unsigned long long)arg3;
- (void)_decodeAndInvokeReplyBlockWithEvent:(id)arg1 sequence:(unsigned long long)arg2 replyInfo:(id)arg3;
- (void)_decodeProgressMessageWithData:(id)arg1 flags:(unsigned long long)arg2;
- (id)_errorDescription;
- (id)_initWithCustomTransport:(id)arg1;
- (id)_initWithRemoteConnection:(id)arg1 name:(id)arg2;
- (id)_initWithRemoteService:(id)arg1 name:(id)arg2 options:(unsigned long long)arg3;
- (id)_initWithRemoteService:(id)arg1 name:(id)arg2 options:(unsigned long long)arg3 mode:(unsigned long long)arg4;
- (void)_killConnection:(int)arg1;
- (void)_pauseProgress:(unsigned long long)arg1;
- (id)_queue;
- (Class)_remoteObjectInterfaceClass;
- (void)_resumeProgress:(unsigned long long)arg1;
- (void)_sendDesistForProxy:(id)arg1;
- (void)_sendInvocation:(id)arg1 orArguments:(id*)arg2 count:(unsigned long long)arg3 methodSignature:(id)arg4 selector:(SEL)arg5 withProxy:(id)arg6;
- (void)_sendSelector:(SEL)arg1 withProxy:(id)arg2;
- (void)_sendSelector:(SEL)arg1 withProxy:(id)arg2 arg1:(id)arg3;
- (void)_sendSelector:(SEL)arg1 withProxy:(id)arg2 arg1:(id)arg3 arg2:(id)arg4;
- (void)_sendSelector:(SEL)arg1 withProxy:(id)arg2 arg1:(id)arg3 arg2:(id)arg4 arg3:(id)arg5;
- (void)_sendSelector:(SEL)arg1 withProxy:(id)arg2 arg1:(id)arg3 arg2:(id)arg4 arg3:(id)arg5 arg4:(id)arg6;
- (void)_setBootstrapObject:(id)arg1 forKey:(id)arg2;
- (void)_setLanguages:(id)arg1;
- (void)_setQueue:(id)arg1;
- (void)_setTargetUserIdentifier:(unsigned int)arg1;
- (void)_setUUID:(id)arg1;
- (id)_unboostingRemoteObjectProxy;
- (id)_xpcConnection;
- (void)activate;
- (void)addBarrierBlock:(id /* block */)arg1;
- (int)auditSessionIdentifier;
- (struct { unsigned int x1[8]; })auditToken;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (unsigned int)effectiveGroupIdentifier;
- (unsigned int)effectiveUserIdentifier;
- (id)endpoint;
- (id)exportedInterface;
- (id)exportedObject;
- (id)init;
- (id)initWithEndpoint:(id)arg1;
- (id)initWithListenerEndpoint:(id)arg1;
- (id)initWithMachServiceName:(id)arg1;
- (id)initWithMachServiceName:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithServiceName:(id)arg1;
- (id)initWithServiceName:(id)arg1 options:(unsigned long long)arg2;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (int)processIdentifier;
- (id)remoteObjectInterface;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)remoteObjectProxyWithTimeout:(double)arg1 errorHandler:(id /* block */)arg2;
- (id)remoteObjectProxyWithUserInfo:(id)arg1 errorHandler:(id /* block */)arg2;
- (id)replacementObjectForEncoder:(id)arg1 object:(id)arg2;
- (void)resume;
- (void)scheduleSendBarrierBlock:(id /* block */)arg1;
- (id)serviceName;
- (void)setDelegate:(id)arg1;
- (void)setExportedInterface:(id)arg1;
- (void)setExportedObject:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setRemoteObjectInterface:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)set_additionalInvalidationHandler:(id /* block */)arg1;
- (void)start;
- (void)stop;
- (void)suspend;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)userInfo;
- (id)valueForEntitlement:(id)arg1;

// Image: /System/Library/Frameworks/CallKit.framework/CallKit

- (id)cx_applicationIdentifier;
- (id)cx_bundleIdentifier;
- (id)cx_capabilities;
- (bool)cx_clientSandboxCanAccessFileURL:(id)arg1;
- (id)cx_developerTeamIdentifier;
- (bool)cx_isProcessOnDemandInstallCapable;
- (id)cx_processName;

// Image: /System/Library/Frameworks/ClassKit.framework/ClassKit

- (bool)cls_isAppExtension;
- (id)cls_signingIdentifier;

// Image: /System/Library/Frameworks/CoreAudio.framework/CoreAudio

- (void)uniquify;

// Image: /System/Library/Frameworks/ExtensionFoundation.framework/ExtensionFoundation

- (void)_EX_addAssertion:(id)arg1 forAuditToken:(id)arg2;
- (id)_EX_assertions;
- (id)_EX_extensionProcess;
- (void)_EX_invalidateAllAssertions;
- (void)_EX_invalidateAssertionForAuditToken:(id)arg1;
- (void)_EX_setExtensionProcess:(id)arg1;
- (void)_EX_setTransaction:(id)arg1;
- (id)_EX_transaction;

// Image: /System/Library/Frameworks/FileProvider.framework/FileProvider

- (id)fp_applicationGroups;
- (id)fp_bundleIdentifier;
- (id)fp_bundleURL;
- (bool)fp_hasOneOfEntitlements:(id)arg1;
- (bool)fp_hasOneOfEntitlements:(id)arg1 logLevel:(unsigned long long)arg2;
- (bool)fp_hasOneOfEntitlements:(id)arg1 nonSandboxedAccess:(bool)arg2 logLevel:(unsigned long long)arg3;
- (bool)fp_hasSandboxAccessToFile:(id)arg1;
- (bool)fp_hasSandboxAccessToFile:(id)arg1 accessType:(const char *)arg2 logLevel:(unsigned long long)arg3;
- (bool)fp_hasSandboxAccessToFile:(id)arg1 logLevel:(unsigned long long)arg2;
- (bool)fp_isNonSandboxedConnection;
- (id)fp_sanitizer;
- (id)fp_valueForEntitlement:(id)arg1;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (bool)hk_isAppExtension;

// Image: /System/Library/Frameworks/Social.framework/Social

- (id)_clientBundleID;
- (bool)sl_clientHasEntitlement:(id)arg1;
- (id)sl_localizedClientName;

// Image: /System/Library/PrivateFrameworks/AAAFoundation.framework/AAAFoundation

- (id)aaf_bundleID;
- (id)aaf_processName;

// Image: /System/Library/PrivateFrameworks/ARKitDaemon.framework/ARKitDaemon

- (bool)ar_booleanValueForEntitlement:(id)arg1;
- (id)ar_entitlementsArray;
- (bool)ar_hasPrivateAREntitlement:(id)arg1;
- (id)ar_processBundleIdentifier;
- (id)ar_processName;

// Image: /System/Library/PrivateFrameworks/AnnounceDaemon.framework/AnnounceDaemon

- (bool)an_isRemotePlaybackSession;
- (id)clientID;
- (bool)hasAnnounceEntitlement;

// Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit

- (void)setShouldHandleInvalidation:(bool)arg1;
- (bool)shouldHandleInvalidation;

// Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport

- (id)cp_bundleIdentifier;

// Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit

+ (id)crk_applicationInfoServiceConnection;
+ (id)crk_booksServiceConnection;
+ (id)crk_internetDateServiceConnection;
+ (id)crk_screenshotServiceConnection;
+ (id)crk_screenshotServiceConnectionWithInterface:(id)arg1;
+ (id)crk_studentDaemonConnection;
+ (unsigned long long)crk_studentDaemonConnectionOptions;
+ (id)crk_studentDaemonNonCatalystConnection;

// Image: /System/Library/PrivateFrameworks/ControlCenterServices.framework/ControlCenterServices

- (bool)ccs_hasEntitlementForForciblyEnablingModules;
- (bool)ccs_hasEntitlementForListingModuleIdentifiers;
- (bool)ccs_hasEntitlementForModuleIdentifier:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Coordination.framework/Coordination

- (bool)activated;
- (id /* block */)co_originalInterruptionHandler;
- (id /* block */)co_originalInvalidationHandler;
- (void)co_setOriginalInterruptionHandler:(id /* block */)arg1;
- (void)co_setOriginalInvalidationHandler:(id /* block */)arg1;
- (void)setActivated:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/CoordinationCore.framework/CoordinationCore

- (id)co_ClientBundleIdentifier;
- (id)co_PeerInstance;
- (void)co_SetClientBundleIdentifier:(id)arg1;
- (void)co_SetPeerInstance:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CopresenceCore.framework/CopresenceCore

- (id)cp_clientProcessBundleIdentifier;
- (id)cp_clientProcessName;
- (bool)cp_clientSandboxCanAccessFileURL:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal

- (id)bundleID;
- (id)processName;

// Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals

- (id)sgd_clientName;

// Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils

- (id)cuValueForEntitlementNoCache:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager

- (bool)doc_hasSandboxAccessToFile:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DropInCore.framework/DropInCore

- (id)bundleIdentifier;
- (id)valueForEntitlementName:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (id)geo_createGEODaemonToMapsPushDaemonConnection;
+ (id)geo_createGEODaemonToNanoMapsGateDaemonConnection;
+ (void)geo_withMapsPushDaemon:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
+ (void)geo_withNanoMapsGateDaemon:(id /* block */)arg1 errorHandler:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/LinkServices.framework/LinkServices

- (void)ln_configureWithBundleIdentifier:(id)arg1 interface:(id)arg2;

// Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus

- (id)PG_appProxyWithDebugMethodAndPointerProem:(id)arg1;
- (id)PG_appProxyWithDebugMethodAndPointerProem:(id)arg1 errorHandler:(id /* block */)arg2;
- (bool)PG_hasMenuItemProviderEntitlement;
- (bool)PG_hasScreenSharingEntitlement;
- (id)PG_remoteObjectProxyWithDebugMethodAndPointerProem:(id)arg1;
- (id)PG_remoteObjectProxyWithDebugMethodAndPointerProem:(id)arg1 errorHandler:(id /* block */)arg2;
- (id)PG_remoteObjectWithDebugMethodAndPointerProem:(id)arg1;
- (id)PG_remoteObjectWithDebugMethodAndPointerProem:(id)arg1 errorHandler:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

+ (id)safari_applicationRecordForConnectedProcessWithAuditToken:(struct { unsigned int x1[8]; })arg1;

- (id)safari_applicationRecordForConnectedProcess;
- (id)safari_arrayForEntitlement:(id)arg1;
- (id)safari_arrayForEntitlement:(id)arg1 containingObjectsOfClass:(Class)arg2;

// Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing

- (void)sf_setQueue:(id)arg1;

// Image: /System/Library/PrivateFrameworks/StatusKitAgentCore.framework/StatusKitAgentCore

- (bool)sk_booleanValueForEntitlement:(id)arg1;
- (id)sk_stringArrayValueForEntitlement:(id)arg1;
- (id)sk_stringValueForEntitlement:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities

+ (id)callServicesClientXPCInterface;
+ (id)callServicesServerXPCInterface;

- (void)performBlockOnQueue:(id /* block */)arg1;
- (id)processBundleIdentifier;
- (id)processName;
- (bool)tu_clientSandboxCanAccessFileURL:(id)arg1;

// Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer

- (bool)_uns_connection:(id)arg1 isAuthorizedToSendNotificationsForBundleIdentifier:(id)arg2;
- (bool)_uns_connection:(id)arg1 isAuthorizedToSendNotificationsForManagementDomainOfBundleIdentifier:(id)arg2;
- (bool)_uns_connection:(id)arg1 valueForEntitlementKey:(id)arg2 matchesValue:(id)arg3;
- (id)uns_clientAuditToken;
- (id)uns_clientBundleProxy;
- (id)uns_getClientConnectionDetails;
- (bool)uns_hasEntitlement:(id)arg1 capability:(id)arg2;
- (bool)uns_isAllowedFromDaemon;
- (bool)uns_isAllowedToReadSettings;
- (bool)uns_isAllowedToRequestUserNotificationsForBundleIdentifier:(id)arg1;
- (bool)uns_isAllowedToWriteSettings;
- (bool)uns_isInternalUserNotificationsTool;
- (void)uns_setConnectionDetails:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WeatherDaemon.framework/WeatherDaemon

- (id)wd_bundleIdentifier;
- (id)wd_codesigningIdentifier;
- (id)wd_valueForEntitlement:(id)arg1;

// Image: /usr/lib/libnfshared.dylib

- (id)NF_userInfo;
- (id)NF_whitelistChecker;

@end
