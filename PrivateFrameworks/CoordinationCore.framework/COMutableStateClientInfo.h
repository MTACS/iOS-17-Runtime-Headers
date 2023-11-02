
@interface COMutableStateClientInfo : COStateClientInfo

@property (nonatomic, copy) NSDictionary *observers;
@property (nonatomic, copy) NSDictionary *state;

- (void)addObserverWithPredicate:(id)arg1;
- (id)initWithSuite:(id)arg1 clusters:(id)arg2 state:(id)arg3 observers:(id)arg4;
- (id)observers;
- (void)removeKeyPath:(id)arg1 cluster:(id)arg2;
- (void)removeObserverWithPredicate:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setState:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2 cluster:(id)arg3;
- (id)state;

@end
