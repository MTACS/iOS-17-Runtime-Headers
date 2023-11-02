
@interface BSServiceConnection : NSObject <BSInvalidatable, BSServiceConnectionClient, BSServiceConnectionContext, BSServiceConnectionHost, BSXPCServiceConnectionMessaging> {
    BSXPCServiceConnection * _connection;
    NSString * _instance;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    BSAtomicSignal * _lock_activatedSignal;
    _BSServiceConnectionConfiguration * _lock_config;
    bool  _lock_invalidated;
    bool  _lock_noAssertInvalidatedOnDealloc;
    NSString * _name;
    bool  _requiresMessagingAfterHandshake;
    NSString * _service;
    <NSCopying> * _userInfo;
}

@property (nonatomic, readonly) id bn_remoteTargetEnforceLaunching;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *instance;
@property (nonatomic, readonly) RBSTarget *remoteAssertionTarget;
@property (nonatomic, readonly) BSProcessHandle *remoteProcess;
@property (nonatomic, readonly) id remoteTarget;
@property (nonatomic, readonly) BSAuditToken *remoteToken;
@property (nonatomic, readonly, copy) NSString *service;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) <NSCopying> *userInfo;

// Image: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices

+ (id)NSXPCConnectionWithEndpoint:(id)arg1 clientContextBuilder:(id /* block */)arg2 configurator:(id /* block */)arg3;
+ (id)NSXPCConnectionWithEndpoint:(id)arg1 configurator:(id /* block */)arg2;
+ (id)connectionWithEndpoint:(id)arg1;
+ (id)connectionWithEndpoint:(id)arg1 clientContextBuilder:(id /* block */)arg2;
+ (id)currentContext;

- (void).cxx_destruct;
- (void)_configureConnection:(id /* block */)arg1;
- (void)activate;
- (void)configureConnection:(id /* block */)arg1;
- (id)createMessage;
- (id)createMessageWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)description;
- (id)extractNSXPCConnectionWithConfigurator:(id /* block */)arg1;
- (id)init;
- (id)instance;
- (void)invalidate;
- (id)remoteAssertionTarget;
- (id)remoteProcess;
- (id)remoteTarget;
- (id)remoteTargetWithAssertionAttributes:(id)arg1;
- (id)remoteTargetWithLaunchingAssertionAttributes:(id)arg1;
- (id)remoteToken;
- (id)service;
- (id)userInfo;

// Image: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit

- (id)bn_remoteTargetEnforceLaunching;

// Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer

- (id)_dnds_safeStringArrayEntitlementForKey:(id)arg1;
- (bool)dnds_hasActiveModeUpdatesEntitlementForClientIdentifier:(id)arg1;
- (bool)dnds_hasAnyValidEntitlement;
- (bool)dnds_hasAuxiliaryStateModificationEntitlementForClientIdentifier:(id)arg1;
- (bool)dnds_hasBehaviorResolutionEntitlementForClientIdentifier:(id)arg1;
- (bool)dnds_hasEntitlementsToRequestAssertionWithDetails:(id)arg1 clientIdentifier:(id)arg2;
- (bool)dnds_hasMeDeviceStateEntitlementForClientIdentifier:(id)arg1;
- (bool)dnds_hasModeAssertionEntitlementForClientIdentifier:(id)arg1;
- (bool)dnds_hasModeConfigurationAvailabilityEntitlementForClientIdentifier:(id)arg1;
- (bool)dnds_hasModeConfigurationModificationEntitlementForClientIdentifier:(id)arg1;
- (bool)dnds_hasModeConfigurationRequestEntitlementForClientIdentifier:(id)arg1;
- (bool)dnds_hasModeConfigurationUpdatesEntitlementForClientIdentifier:(id)arg1;
- (bool)dnds_hasSettingsModificationEntitlementForClientIdentifier:(id)arg1;
- (bool)dnds_hasSettingsRequestEntitlementForClientIdentifier:(id)arg1;
- (bool)dnds_hasSettingsUpdatesEntitlementForClientIdentifier:(id)arg1;
- (bool)dnds_hasStateRequestEntitlementForClientIdentifier:(id)arg1;
- (bool)dnds_hasStateUpdatesEntitlementForClientIdentifier:(id)arg1;
- (bool)dnds_hasUserNotificationsCommunicationEntitlement;
- (bool)dnds_hasUserRequestedModeAssertionEntitlementForClientIdentifier:(id)arg1;

@end
