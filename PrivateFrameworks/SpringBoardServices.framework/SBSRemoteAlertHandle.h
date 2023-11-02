
@interface SBSRemoteAlertHandle : NSObject <HMDSBSRemoteAlertHandle> {
    NSObject<OS_dispatch_queue> * _calloutSerialQueue;
    <SBSRemoteAlertHandleClient> * _handleClient;
    NSString * _handleID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_active;
    NSHashTable * _lock_observers;
    bool  _lock_valid;
}

@property (getter=isActive, readonly) bool active;
@property (getter=isActive, nonatomic, readonly) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *handleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=isValid, readonly) bool valid;
@property (getter=isValid, nonatomic, readonly) bool valid;

// Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices

+ (id)defaultHandleClient;
+ (id)handleWithConfiguration:(id)arg1;
+ (id)lookupHandlesForConfiguration:(id)arg1 creatingIfNone:(bool)arg2;
+ (id)lookupHandlesForDefinition:(id)arg1;
+ (id)lookupHandlesForDefinition:(id)arg1 creatingIfNone:(bool)arg2;
+ (id)lookupHandlesForDefinition:(id)arg1 creatingIfNone:(bool)arg2 configurationContext:(id)arg3;
+ (id)newHandleWithDefinition:(id)arg1 configurationContext:(id)arg2;
+ (void)setDefaultHandleClient:(id)arg1;

- (void).cxx_destruct;
- (void)_didActivate;
- (void)_didDeactivate;
- (id)_initWithHandleID:(id)arg1 handleClient:(id)arg2;
- (void)_invalidateWithError:(id)arg1 shouldInvalidateHandleClient:(bool)arg2;
- (void)_receivedInvalidationWithError:(id)arg1;
- (void)activateWithContext:(id)arg1;
- (void)activateWithOptions:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)handleID;
- (void)invalidate;
- (bool)isActive;
- (bool)isValid;
- (void)registerObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (void)activate;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

- (void)activate;

@end
