
@interface RBSAssertion : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _dataLock;
    RBSAssertionDescriptor * _descriptor;
    id /* block */  _invalidationHandler;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSHashTable * _observers;
    <RBSServiceLocalProtocol> * _service;
    unsigned long long  _state;
    id /* block */  _warningHandler;
}

@property (nonatomic, readonly, copy) NSArray *attributes;
@property (nonatomic, readonly, copy) RBSAssertionDescriptor *descriptor;
@property (nonatomic, readonly, copy) NSString *explanation;
@property (nonatomic, readonly, copy) RBSAssertionIdentifier *identifier;
@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly) RBSTarget *target;
@property (getter=isValid, nonatomic, readonly) bool valid;
@property (getter=fb_workspaceAssertionState, setter=fb_setWorkspaceAssertionState:, nonatomic) unsigned char workspaceAssertionState;

// Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices

- (void).cxx_destruct;
- (id)_initWithDescriptor:(id)arg1 service:(id)arg2;
- (id)_initWithServerValidatedDescriptor:(id)arg1;
- (id)_initWithServerValidatedDescriptor:(id)arg1 service:(id)arg2;
- (void)_serverInvalidateWithError:(id)arg1;
- (bool)acquireWithError:(out id*)arg1;
- (oneway void)acquireWithInvalidationHandler:(id /* block */)arg1;
- (void)addObserver:(id)arg1;
- (id)attributes;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)descriptor;
- (id)explanation;
- (id)identifier;
- (id)init;
- (id)initWithExplanation:(id)arg1 target:(id)arg2 attributes:(id)arg3;
- (oneway void)invalidate;
- (bool)invalidateSyncWithError:(out id*)arg1;
- (bool)invalidateWithError:(out id*)arg1;
- (bool)isValid;
- (void)removeObserver:(id)arg1;
- (void)setExpirationWarningHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (unsigned long long)state;
- (id)target;

// Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard

- (void)fb_setWorkspaceAssertionState:(unsigned char)arg1;
- (unsigned char)fb_workspaceAssertionState;

// Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit

+ (id)pr_assertionForTarget:(id)arg1 assertionIdentifier:(id)arg2 explanation:(id)arg3 invalidationHandler:(id /* block */)arg4;
+ (id)pr_migrationRuntimeAssertionWithExplanation:(id)arg1;
+ (id)pr_photosPosterUpdateEntitledMemoryAssertionForTarget:(id)arg1 explanation:(id)arg2;
+ (id)pr_posterEditingRuntimeAssertionForTarget:(id)arg1 explanation:(id)arg2;
+ (id)pr_posterRenderingEntitledRuntimeAssertionForTarget:(id)arg1 explanation:(id)arg2;
+ (id)pr_posterRenderingPhotosMemoryHogRuntimeAssertionForTarget:(id)arg1 explanation:(id)arg2;
+ (id)pr_posterRenderingRuntimeAssertionForTarget:(id)arg1 explanation:(id)arg2;
+ (id)pr_posterRuntimeAssertionForTarget:(id)arg1 explanation:(id)arg2 sceneType:(id)arg3 auditToken:(id)arg4 posterProviderBundleIdentifier:(id)arg5;
+ (id)pr_posterUpdateEntitledMemoryAssertionForTarget:(id)arg1 explanation:(id)arg2;
+ (id)pr_posterUpdateMemoryAssertionForReason:(id)arg1 target:(id)arg2 auditToken:(id)arg3 posterProviderBundleIdentifier:(id)arg4 invalidationHandler:(id /* block */)arg5;
+ (id)pr_posterUpdateRuntimeAssertionForReason:(id)arg1 target:(id)arg2 invalidationHandler:(id /* block */)arg3;
+ (id)pr_posterUpdateRuntimeAssertionForTarget:(id)arg1 explanation:(id)arg2;
+ (id)pr_prewarmRuntimeAssertionForReason:(id)arg1 target:(id)arg2 invalidationHandler:(id /* block */)arg3;
+ (id)pr_prewarmRuntimeAssertionForTarget:(id)arg1 explanation:(id)arg2;

@end
