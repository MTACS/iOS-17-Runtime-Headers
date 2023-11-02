
@interface NSXPCInterface : NSObject {
    struct __CFDictionary { } * _knownSelectors;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _knownSelectorsLock;
    struct __CFDictionary { } * _methodInfo;
    Protocol * _protocol;
    unsigned long long  _remoteVersion;
    bool  _specialCaseObject;
    Class  _xpcDOSubclass;
}

@property Protocol *protocol;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)interfaceWithProtocol:(id)arg1;
+ (id)signatureForBlock:(id)arg1;

- (struct _xpc_type_s { }*)XPCTypeForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(bool)arg3;
- (Class)_customSubclass;
- (id)_generateAndCacheMethodSignatureForRemoteSelector:(SEL)arg1;
- (bool)_hasProxiesInArgumentsOfSelector:(SEL)arg1;
- (bool)_hasProxiesInReplyBlockArgumentsOfSelector:(SEL)arg1;
- (id)_interfaceForArgument:(unsigned long long)arg1 ofSelector:(SEL)arg2 reply:(bool)arg3;
- (id)_methodSignatureForRemoteSelector:(SEL)arg1;
- (id)_methodSignatureForReplyBlockOfSelector:(SEL)arg1;
- (unsigned long long)_remoteVersion;
- (unsigned long long)_respondsToRemoteSelector:(SEL)arg1;
- (Class)_returnClassForSelector:(SEL)arg1;
- (bool)_selectorIsAllowed:(SEL)arg1 isReply:(bool)arg2 methodSignature:(id*)arg3 allowedClasses:(id*)arg4;
- (bool)_specialCaseObject;
- (Class)classForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(bool)arg3;
- (id)classesForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(bool)arg3;
- (void)dealloc;
- (id)debugDescription;
- (id)init;
- (id)interfaceForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(bool)arg3;
- (id)protocol;
- (id)replyBlockSignatureForSelector:(SEL)arg1;
- (void)setClass:(Class)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(bool)arg4;
- (void)setClasses:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(bool)arg4;
- (void)setInterface:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(bool)arg4;
- (void)setProtocol:(id)arg1;
- (void)setReplyBlockSignature:(id)arg1 forSelector:(SEL)arg2;
- (void)setVersion:(unsigned long long)arg1 forSelector:(SEL)arg2;
- (void)setXPCType:(struct _xpc_type_s { }*)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(bool)arg4;
- (void)set_remoteVersion:(unsigned long long)arg1;
- (unsigned long long)version;
- (unsigned long long)versionForSelector:(SEL)arg1;

// Image: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices

+ (id)_as_accountModificationExtensionInterface;
+ (id)_as_accountModificationHostInterface;
+ (id)_as_credentialProviderExtensionInterface;
+ (id)_as_credentialProviderHostInterface;

// Image: /System/Library/Frameworks/CallKit.framework/CallKit

+ (id)cx_callControllerHostInterface;
+ (id)cx_callControllerVendorInterface;
+ (id)cx_callDirectoryManagerDefaultHostInterface;
+ (id)cx_callDirectoryManagerMaintenanceHostInterface;
+ (id)cx_callDirectoryProviderHostInterface;
+ (id)cx_callDirectoryProviderVendorInterface;
+ (id)cx_networkExtensionMessageControllerHostInterface;
+ (id)cx_notificationServiceExtensionInterface;
+ (id)cx_providerHostInterface;
+ (id)cx_providerVendorInterface;
+ (id)cx_voicemailControllerHostInterface;
+ (id)cx_voicemailControllerVendorInterface;
+ (id)cx_voicemailProviderHostInterface;
+ (id)cx_voicemailProviderVendorInterface;

- (id)_cx_callControllerAllowedClasses;
- (id)_cx_callDirectoryManagerAllowedClasses;
- (id)_cx_callDirectoryProviderAllowedClasses;
- (id)_cx_providerAllowedClasses;
- (void)_cx_setAllowedClassesForCallControllerHostProtocol;
- (void)_cx_setAllowedClassesForCallControllerVendorProtocol;
- (void)_cx_setAllowedClassesForCallDirectoryManagerDefaultHostProtocol;
- (void)_cx_setAllowedClassesForCallDirectoryProviderHostProtocol;
- (void)_cx_setAllowedClassesForVoicemailControllerHostProtocol;
- (void)_cx_setAllowedClassesForVoicemailControllerVendorProtocol;
- (id)_cx_voicemailControllerAllowedClasses;
- (id)_cx_voicemailProviderAllowedClasses;
- (id)cx_allowedClasses;
- (void)cx_setAllowedClassesForProviderHostProtocol;
- (void)cx_setAllowedClassesForProviderVendorProtocol;
- (void)cx_setAllowedClassesForVoicemailProviderHostProtocol;
- (void)cx_setAllowedClassesForVoicemailProviderVendorProtocol;

// Image: /System/Library/Frameworks/ExtensionFoundation.framework/ExtensionFoundation

+ (id)_EX_combinedServiceInterface;
+ (id)_EX_discoveryServiceInterface;
+ (id)_EX_launchServiceInterface;
+ (id)_EX_queryResultsInterface;
+ (id)_EX_tccProxyServiceInterface;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (id)_cachedSetForArrayOfClass:(Class)arg1;
- (id)hk_setArrayOfClass:(Class)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(bool)arg4;
- (id)hk_setSetOfClass:(Class)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(bool)arg4;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)hm_userManagementRemoteHostInterface;
+ (id)hm_userManagementRemoteServiceInterface;

// Image: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup

+ (id)il_classificationUIExtensionHostInterface;
+ (id)il_classificationUIExtensionVendorInterface;
+ (id)il_messageFilterExtensionHostInterface;
+ (id)il_messageFilterExtensionVendorInterface;
+ (id)il_messageFilterHostInterface;

// Image: /System/Library/Frameworks/MatterSupport.framework/MatterSupport

+ (id)mts_clientInterface;
+ (id)mts_deviceSetupExtensionInterface;
+ (id)mts_serverInterface;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

+ (id)mf_mailComposeRemoteHostInterface;
+ (id)mf_mailComposeRemoteServiceInterface;

// Image: /System/Library/Frameworks/Messages.framework/Messages

+ (id)__mf_messageComposerExtensionInterface;
+ (id)__mf_messageComposerHostInterface;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (void)atx_addClass:(Class)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(bool)arg4;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

+ (id)af_siriTaskDeliveringInterface;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (id)_geo_GEOAppleMediaServicesProtocolInterface;
+ (id)geo_MapsPushDaemonFromGeodInterface;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

+ (id)hu_homeControlServiceXPCInterface;
+ (id)hu_homeControlXPCInterface;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

+ (void)__im_prewarmMessagesInterfaces;

// Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices

+ (id)_IS_iconCacheServiceInterface;

// Image: /System/Library/PrivateFrameworks/MailKit.framework/MailKit

+ (id)MEExtensionRemoteHostInterface;
+ (id)MERemoteExtensiontInterface;

// Image: /System/Library/PrivateFrameworks/SystemPaperPresentation.framework/SystemPaperPresentation

+ (id)ic_extensionInterface;
+ (id)ic_hostInterface;

// Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities

+ (id)clientInterface;
+ (id)hostConnectionInterface;
+ (id)hostInterface;
+ (id)remoteObjectInterface;

- (void)setAllowedClassesForClientInterface;
- (void)setAllowedClassesForClientProtocol;
- (void)setAllowedClassesForHostProtocol;
- (void)setAllowedClassesForHostProtocol;

// Image: /System/Library/PrivateFrameworks/TranslationUIServices.framework/TranslationUIServices

+ (id)__LTUI_viewServiceExtensionHostInterface;
+ (id)__LTUI_viewServiceExtensionInterface;

@end
