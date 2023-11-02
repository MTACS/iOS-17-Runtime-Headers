
@interface KGMutableGraph : KGGraph {
    NSObject<OS_dispatch_queue> * _transactionQueue;
}

@property (nonatomic, readonly) <KGMutableGraphImplementation> *mutableImplementation;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *transactionQueue;

- (void).cxx_destruct;
- (bool)_applyEdgeChangeRequests:(id)arg1 error:(id*)arg2;
- (bool)_applyNodeChangeRequests:(id)arg1 error:(id*)arg2;
- (bool)_performChangesAndWait:(id)arg1 error:(id*)arg2;
- (id)initWithMutableImplementation:(id)arg1 entityFactory:(id)arg2;
- (id)mutableImplementation;
- (bool)performChangesAndWait:(id)arg1 error:(id*)arg2;
- (void)setTransactionQueue:(id)arg1;
- (id)transactionQueue;

@end
