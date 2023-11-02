
@interface BLSHAggregatedSystemActivityAssertionFactory : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    BLSHAggregateSystemActivityAssertion * _lock_aggregateAssertion;
}

- (void).cxx_destruct;
- (id)createAggregatedSystemActivityAssertionWithIdentifier:(id)arg1 usingOSInterfaceProvider:(id)arg2;
- (id)init;

@end
