
@interface BMRestrictedSource : BMSource {
    BMStoreSource * _storeSource;
}

- (void).cxx_destruct;
- (id)initWithStoreSource:(id)arg1;
- (void)sendEvent:(id)arg1;
- (void)sendEvent:(id)arg1 timestamp:(double)arg2;

@end
