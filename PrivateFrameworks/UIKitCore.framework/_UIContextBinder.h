
@interface _UIContextBinder : NSObject {
    NSPointerArray * _attachedBindables;
    <_UIContextBinderContextCreationPolicyHolding> * _contextCreationPolicyHolder;
    long long  _contextManagementPolicy;
    NSMutableOrderedSet * _contexts;
    NSPointerArray * _enrolledBindables;
    <_UIContextBinding> * _substrate;
}

@property (nonatomic, readonly) NSArray *attachedBindables;
@property (nonatomic) <_UIContextBinderContextCreationPolicyHolding> *contextCreationPolicyHolder;
@property (nonatomic) long long contextManagementPolicy;
@property (nonatomic, readonly) NSArray *enrolledBindables;
@property (nonatomic, readonly) <_UIContextBinding> *substrate;

+ (id)createContextForBindable:(id)arg1 withSubstrate:(id)arg2;

- (void).cxx_destruct;
- (id)_attachedBindablePointersAsCopy:(bool)arg1;
- (id)_contextForBindable:(id)arg1;
- (id)_enrolledBindablePointersAsCopy:(bool)arg1;
- (void)attachBindable:(id)arg1;
- (id)attachedBindables;
- (bool)bindableEnrolled:(id)arg1;
- (bool)bindableIsTopmostAttached:(id)arg1;
- (id)contextCreationPolicyHolder;
- (long long)contextManagementPolicy;
- (void)createContextsWithTest:(id /* block */)arg1 creationAction:(id /* block */)arg2;
- (void)detachBindable:(id)arg1;
- (void)enrollBindable:(id)arg1;
- (id)enrolledBindables;
- (void)expellBindable:(id)arg1;
- (id)initWithSubstrate:(id)arg1;
- (bool)permitContextCreationForBindable:(id)arg1;
- (void)purgeContextsWithPurgeAction:(id /* block */)arg1;
- (void)purgeContextsWithPurgeAction:(id /* block */)arg1 afterPurgeAction:(id /* block */)arg2;
- (void)recreateContextForBindable:(id)arg1;
- (void)setContextCreationPolicyHolder:(id)arg1;
- (void)setContextManagementPolicy:(long long)arg1;
- (id)substrate;
- (void)updateBindable:(id)arg1;
- (void)updateBindableOrderWithTest:(id /* block */)arg1;
- (void)updateBindableOrderWithTest:(id /* block */)arg1 force:(bool)arg2;

@end
