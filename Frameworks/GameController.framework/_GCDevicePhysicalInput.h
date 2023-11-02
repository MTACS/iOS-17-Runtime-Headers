
@interface _GCDevicePhysicalInput : _GCDevicePhysicalInputBase {
    NSMutableArray * _allTransactions;
    NSMutableArray * _bufferedTransactions;
    unsigned long long  _bufferedTransactionsQueueDepth;
    _GCDevicePhysicalInputTransaction * _currentTransaction;
    id /* block */  _elementValueDidChangeHandler;
    id /* block */  _inputStateAvailableHandler;
    _Atomic bool  _isHandlingEvent;
    _GCDevicePhysicalInputTransaction * _pendingTransaction;
}

- (void)dealloc;
- (id)initWithFacade:(id)arg1 elements:(id)arg2;
- (id)initWithFacade:(id)arg1 elements:(id)arg2 attributes:(id)arg3;
- (bool)isSnapshot;
- (double)lastEventTimestamp;
- (id)physicalInput;
- (id)popTransaction;
- (void)setDataSource:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)updateViewStateIfNeeded;

@end
