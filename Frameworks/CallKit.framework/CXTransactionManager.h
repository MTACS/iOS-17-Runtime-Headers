
@interface CXTransactionManager : NSObject {
    <CXTransactionManagerDelegate> * _delegate;
    NSMutableSet * _outstandingTransactionGroups;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) <CXTransactionManagerDelegate> *delegate;
@property (nonatomic, retain) NSMutableSet *outstandingTransactionGroups;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)_setUpTimeoutForActionIfNecessary:(id)arg1 callSource:(id)arg2;
- (void)_timeoutReachedForAction:(id)arg1 callSource:(id)arg2;
- (void)addOutstandingTransactionGroup:(id)arg1;
- (id)delegate;
- (id)description;
- (void)failOutstandingActionsForCallWithUUID:(id)arg1;
- (void)failOutstandingActionsForChannelWithUUID:(id)arg1;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (id)outstandingTransactionGroups;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)setOutstandingTransactionGroups:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)updateWithCompletedAction:(id)arg1;

@end
