
@interface SKPresence : NSObject <SKPresenceConnectionDelegateProtocol, SKPresenceDaemonDelegateProtocol> {
    SKPresenceDaemonConnection * _daemonConnection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _delegateLock;
    NSMapTable * _delegates;
    bool  _hasPresenceAssertion;
    bool  _hasTransientSubscription;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    SKPresenceOptions * _options;
    SKPresencePayload * _payload;
    NSString * _presenceIdentifier;
    NSObject<OS_dispatch_queue> * _privateWorkQueue;
    bool  _registeredForDelegateCallbacks;
}

@property (nonatomic, retain) SKPresenceDaemonConnection *daemonConnection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } delegateLock;
@property (nonatomic, retain) NSMapTable *delegates;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasPresenceAssertion;
@property (nonatomic) bool hasTransientSubscription;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *invitedHandles;
@property (nonatomic, readonly) bool isPersonal;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, retain) SKPresenceOptions *options;
@property (nonatomic, retain) SKPresencePayload *payload;
@property (nonatomic, readonly) NSString *presenceIdentifier;
@property (nonatomic, readonly) NSArray *presentDevices;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *privateWorkQueue;
@property (nonatomic) bool registeredForDelegateCallbacks;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/StatusKit.framework/StatusKit

+ (id)_logger;
+ (id)_oversizeLogger;

- (void).cxx_destruct;
- (void)_attemptReconnectingToDaemon;
- (void)_delegatesPerformOnResponseQueueForGroup:(id)arg1 block:(id /* block */)arg2;
- (void)_fetchHandleInvitability:(id)arg1 fromSenderHandle:(id)arg2 completion:(id /* block */)arg3;
- (void)_inviteHandle:(id)arg1 fromSenderHandle:(id)arg2 completion:(id /* block */)arg3;
- (void)_inviteHandles:(id)arg1 fromSenderHandle:(id)arg2 completion:(id /* block */)arg3;
- (bool)_isHandleInvited:(id)arg1 fromSenderHandle:(id)arg2;
- (void)_isHandleInvited:(id)arg1 fromSenderHandle:(id)arg2 completion:(id /* block */)arg3;
- (void)_reRetainTransientSubscriptionWithCompletion:(id /* block */)arg1;
- (void)_reassertPresenceWithCompletion:(id /* block */)arg1;
- (void)_registerForDelegateCallbacksIfNecessary;
- (void)_simulateCrashIfNecessaryForError:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)assertPresenceWithCompletion:(id /* block */)arg1;
- (void)assertPresenceWithPresencePayload:(id)arg1 completion:(id /* block */)arg2;
- (id)daemonConnection;
- (struct os_unfair_lock_s { unsigned int x1; })delegateLock;
- (id)delegates;
- (void)fetchHandleInvitability:(id)arg1 fromSenderHandle:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchHandleInvitabilityFromPrimaryAccountHandle:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchPresenceCapability:(id /* block */)arg1;
- (bool)hasAssertion;
- (bool)hasPresenceAssertion;
- (bool)hasTransientSubscription;
- (id)initWithPresenceIdentifier:(id)arg1;
- (id)initWithPresenceIdentifier:(id)arg1 isPersonal:(bool)arg2;
- (id)initWithPresenceIdentifier:(id)arg1 options:(id)arg2;
- (void)inviteHandle:(id)arg1 fromSenderHandle:(id)arg2 completion:(id /* block */)arg3;
- (void)inviteHandleFromPrimaryAccountHandle:(id)arg1 completion:(id /* block */)arg2;
- (void)inviteHandles:(id)arg1 fromSenderHandle:(id)arg2 completion:(id /* block */)arg3;
- (void)inviteHandlesFromPrimaryAccountHandle:(id)arg1 completion:(id /* block */)arg2;
- (id)invitedHandles;
- (void)invitedHandlesChangedForPresenceIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (bool)isHandleInvited:(id)arg1 fromSenderHandle:(id)arg2;
- (void)isHandleInvited:(id)arg1 fromSenderHandle:(id)arg2 completion:(id /* block */)arg3;
- (bool)isHandleInvitedFromPrimaryAccountHandle:(id)arg1;
- (void)isHandleInvitedFromPrimaryAccountHandle:(id)arg1 completion:(id /* block */)arg2;
- (bool)isPersonal;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)options;
- (id)payload;
- (void)presenceDaemonConnectionDidDisconnect:(id)arg1;
- (id)presenceIdentifier;
- (id)presentDevices;
- (void)presentHandlesChangedForPresenceIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)privateWorkQueue;
- (bool)registeredForDelegateCallbacks;
- (void)releaseDaemonConnection;
- (void)releasePresenceWithCompletion:(id /* block */)arg1;
- (void)releaseTransientSubscriptionAssertionWithCompletion:(id /* block */)arg1;
- (void)removeDelegate:(id)arg1;
- (void)removeInvitedHandle:(id)arg1 completion:(id /* block */)arg2;
- (void)removeInvitedHandles:(id)arg1 completion:(id /* block */)arg2;
- (void)retainTransientSubscriptionAssertionWithCompletion:(id /* block */)arg1;
- (void)setDaemonConnection:(id)arg1;
- (void)setDelegateLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setDelegates:(id)arg1;
- (void)setHasAssertion:(bool)arg1;
- (void)setHasPresenceAssertion:(bool)arg1;
- (void)setHasTransientSubscription:(bool)arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setOptions:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setPrivateWorkQueue:(id)arg1;
- (void)setRegisteredForDelegateCallbacks:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/CoordinationCore.framework/CoordinationCore

- (id)co_IDSIdentifier;
- (void)co_SetIDSIdentifier:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CopresenceCore.framework/CopresenceCore

- (void)assertPresenceWithPresencePayloadDictionary:(id)arg1 completion:(id /* block */)arg2;

@end
