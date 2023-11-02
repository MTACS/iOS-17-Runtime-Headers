
@interface __HMFWiFiAssertion : HMFAssertion {
    HMFWiFiManager * _manager;
    unsigned long long  _options;
}

@property (readonly) HMFWiFiManager *manager;
@property (readonly) unsigned long long options;

- (void).cxx_destruct;
- (bool)acquire:(id*)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithOptions:(unsigned long long)arg1 manager:(id)arg2 reason:(id)arg3;
- (void)invalidate;
- (id)manager;
- (unsigned long long)options;

@end
