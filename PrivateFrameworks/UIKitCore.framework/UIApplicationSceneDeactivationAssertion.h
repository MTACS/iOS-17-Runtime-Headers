
@interface UIApplicationSceneDeactivationAssertion : NSObject <BSDescriptionProviding> {
    bool  _acquired;
    UIApplicationSceneDeactivationManager * _manager;
    id /* block */  _predicate;
    long long  _reason;
}

@property (getter=isAcquired, nonatomic, readonly) bool acquired;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIApplicationSceneDeactivationManager *manager;
@property (nonatomic, readonly, copy) id /* block */ predicate;
@property (nonatomic, readonly) long long reason;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (void)acquire;
- (void)acquireWithPredicate:(id /* block */)arg1 transitionContext:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithReason:(long long)arg1 manager:(id)arg2;
- (bool)isAcquired;
- (id)manager;
- (id /* block */)predicate;
- (long long)reason;
- (void)relinquish;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

- (void)sb_acquireForDisplayIdentity:(id)arg1;
- (void)sb_acquireWithPredicate:(id /* block */)arg1 transitionContext:(id)arg2 displayIdentity:(id)arg3;

@end
