
@interface EXExtensionContextImplementation : NSObject <NSCopying, NSSecureCoding, NSXPCListenerDelegate, _NSExtensionAuxHostingBase, _NSExtensionContextInternalImplementation> {
    NSUUID * __UUID;
    NSXPCConnection * __auxiliaryConnection;
    NSXPCListener * __auxiliaryListener;
    bool  __dummyExtension;
    struct { 
        unsigned int val[8]; 
    }  __extensionHostAuditToken;
    <EXExtensionContextHosting> * __extensionHostProxy;
    <EXExtensionContextVending> * __extensionVendorProxy;
    id  __principalObject;
    id /* block */  __requestCleanUpBlock;
    NSObject<OS_os_transaction> * __transaction;
    NSExtensionContext * _extensionContext;
    EXExtensionRequest * _extensionRequest;
    NSArray * _inputItems;
}

@property (nonatomic, copy) NSUUID *_UUID;
@property (setter=_setAuxiliaryConnection:, nonatomic, retain) NSXPCConnection *_auxiliaryConnection;
@property (setter=_setAuxiliaryListener:, retain) NSXPCListener *_auxiliaryListener;
@property (getter=_isDummyExtension, setter=_setDummyExtension:) bool _dummyExtension;
@property (setter=_setExtensionHostAuditToken:) struct { unsigned int x1[8]; } _extensionHostAuditToken;
@property (setter=_setExtensionHostProxy:, retain) <EXExtensionContextHosting> *_extensionHostProxy;
@property (setter=_setExtensionVendorProxy:, retain) <EXExtensionContextVending> *_extensionVendorProxy;
@property (copy) NSUUID *_pkUUID;
@property (setter=_setPrincipalObject:) id _principalObject;
@property (setter=_setProcessAssertion:, retain) id _processAssertion;
@property (setter=_setRequestCleanUpBlock:, copy) id /* block */ _requestCleanUpBlock;
@property (getter=_transaction, setter=_setTransaction:, retain) NSObject<OS_os_transaction> *_transaction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSExtensionContext *extensionContext;
@property (retain) EXExtensionRequest *extensionRequest;
@property (readonly) unsigned long long hash;
@property (setter=_setInputItems:, nonatomic, copy) NSArray *inputItems;
@property (readonly) Class superclass;

+ (id)_defaultExtensionContextVendorProtocol;
+ (id)_derivedExtensionAuxiliaryHostProtocolWithContextClass:(Class)arg1;
+ (id)_extensionContextForIdentifier:(id)arg1;
+ (id)_extensionContextHostProtocolAllowedClassesForItems;
+ (id)_extensionContextHostProtocolWithAllowedErrorClasses:(id)arg1;
+ (id)_extensionContextVendorProtocolWithAllowedErrorClasses:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_UUID;
- (void)___nsx_pingHost:(id /* block */)arg1;
- (id)_auxiliaryConnection;
- (id)_auxiliaryListener;
- (void)_completeRequestReturningItemsSecondHalf:(id /* block */)arg1;
- (struct { unsigned int x1[8]; })_extensionHostAuditToken;
- (id)_extensionHostProxy;
- (id)_extensionVendorProxy;
- (void)_initializeAuxillaryConnectionWithListenerEndpoint:(id)arg1;
- (bool)_isDummyExtension;
- (bool)_isHost;
- (void)_loadItemForPayload:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_loadPreviewImageForPayload:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_openURL:(id)arg1 completion:(id /* block */)arg2;
- (id)_pkUUID;
- (id)_principalObject;
- (id)_processAssertion;
- (id /* block */)_requestCleanUpBlock;
- (void)_setAuxiliaryConnection:(id)arg1;
- (void)_setAuxiliaryListener:(id)arg1;
- (void)_setDummyExtension:(bool)arg1;
- (void)_setExtensionHostAuditToken:(struct { unsigned int x1[8]; })arg1;
- (void)_setExtensionHostProxy:(id)arg1;
- (void)_setExtensionVendorProxy:(id)arg1;
- (void)_setInputItems:(id)arg1;
- (void)_setPrincipalObject:(id)arg1;
- (void)_setProcessAssertion:(id)arg1;
- (void)_setRequestCleanUpBlock:(id /* block */)arg1;
- (void)_setTransaction:(id)arg1;
- (id)_transaction;
- (void)_willPerformHostCallback:(id /* block */)arg1;
- (void)cancelRequestWithError:(id)arg1;
- (void)completeRequestReturningItems:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionContext;
- (id)extensionRequest;
- (id)initWithCoder:(id)arg1;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 extensionContext:(id)arg4;
- (id)inputItems;
- (void)invalidate;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)openURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setExtensionRequest:(id)arg1;
- (void)set_UUID:(id)arg1;
- (void)set_pkUUID:(id)arg1;

@end
