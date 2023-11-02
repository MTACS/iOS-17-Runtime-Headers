
@interface _UIForcedOrientationTransactionToken : NSObject <BSDebugDescriptionProviding, _UIOrientationDebugDescriptionProviding> {
    id /* block */  _commitCompletionBlock;
    long long  _originalInterfaceOrientation;
    unsigned long long  _state;
    <_UIForcedOrientationTransactionHandler> * _transactionHandler;
    NSString * _transactionReason;
}

@property (nonatomic, copy) id /* block */ commitCompletionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long originalInterfaceOrientation;
@property (nonatomic, readonly) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic) <_UIForcedOrientationTransactionHandler> *transactionHandler;
@property (nonatomic, readonly) NSString *transactionReason;

- (void).cxx_destruct;
- (id)_orientationDebugDescription;
- (id)_orientationDebugDescriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)_orientationDebugDescriptionWithMultilinePrefix:(id)arg1;
- (void)cancel;
- (void)commitAnimated:(bool)arg1 completionBlock:(id /* block */)arg2;
- (id /* block */)commitCompletionBlock;
- (void)dealloc;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)didCommitOrientation;
- (id)initWithOriginalOrientation:(long long)arg1 handler:(id)arg2 reason:(id)arg3;
- (long long)originalInterfaceOrientation;
- (void)setCommitCompletionBlock:(id /* block */)arg1;
- (void)setTransactionHandler:(id)arg1;
- (unsigned long long)state;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)transactionHandler;
- (id)transactionReason;

@end
