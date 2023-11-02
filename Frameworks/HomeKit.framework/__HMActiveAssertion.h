
@interface __HMActiveAssertion : HMFAssertion {
    HMHomeManager * _manager;
}

@property (readonly) HMHomeManager *manager;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithHomeManager:(id)arg1 reason:(id)arg2;
- (id)initWithName:(id)arg1;
- (void)invalidate;
- (id)manager;

@end
