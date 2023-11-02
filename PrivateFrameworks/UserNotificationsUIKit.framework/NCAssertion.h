
@interface NCAssertion : NSObject <NCInvalidatable> {
    NSString * _instantiationReason;
    NSMutableOrderedSet * _invalidationBlocks;
    NSString * _invalidationReason;
    bool  _valid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *instantiationReason;
@property (nonatomic, readonly, copy) NSString *invalidationReason;
@property (readonly) Class superclass;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (void)addInvalidationBlock:(id /* block */)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithInstantiationReason:(id)arg1;
- (id)instantiationReason;
- (void)invalidateWithReason:(id)arg1;
- (id)invalidationReason;
- (bool)isValid;

@end
