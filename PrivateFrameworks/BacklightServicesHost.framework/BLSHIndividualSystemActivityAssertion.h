
@interface BLSHIndividualSystemActivityAssertion : NSObject <BLSHSystemActivityAsserting> {
    NSString * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <BLSHIndividualSystemActivityAssertionAggregator> * _lock_aggregator;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)acquireWithTimeout:(double)arg1 handler:(id /* block */)arg2;
- (void)dealloc;
- (id)identifier;
- (id)initWithWithIdentifier:(id)arg1 aggregator:(id)arg2;
- (void)invalidate;
- (bool)isActive;

@end
