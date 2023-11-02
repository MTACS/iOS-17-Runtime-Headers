
@interface RBProcessStateChange : NSObject {
    RBSProcessIdentity * _identity;
    RBProcessState * _originalState;
    RBProcessState * _updatedState;
}

@property (nonatomic, readonly) RBSProcessIdentity *identity;
@property (nonatomic, readonly) RBProcessState *originalState;
@property (nonatomic, readonly) RBProcessState *updatedState;

- (void).cxx_destruct;
- (id)changeByApplyingChange:(id)arg1;
- (id)identity;
- (id)initWithIdentity:(id)arg1 originalState:(id)arg2 updatedState:(id)arg3;
- (id)originalState;
- (id)updatedState;

@end
