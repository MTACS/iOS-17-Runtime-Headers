
@interface AXAssertionCoordinator : NSObject {
    NSObject<OS_dispatch_queue> * _assertionQueue;
    NSHashTable * _assertions;
    <AXAssertionCoordinatorDelegate> * _delegate;
    NSString * _identifier;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *assertionQueue;
@property (nonatomic, retain) NSHashTable *assertions;
@property (nonatomic) <AXAssertionCoordinatorDelegate> *delegate;
@property (nonatomic, retain) NSString *identifier;

- (void).cxx_destruct;
- (void)_startTrackingPoorMansAssertion:(id)arg1;
- (void)_stopTrackingPoorMansAssertion:(id)arg1;
- (id)acquireAssertionWithReason:(id)arg1;
- (id)assertionQueue;
- (id)assertions;
- (void)dealloc;
- (id)delegate;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 delegate:(id)arg2;
- (void)setAssertionQueue:(id)arg1;
- (void)setAssertions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end
