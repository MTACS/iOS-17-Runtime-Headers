
@interface SKPaymentQueueInternal : NSObject {
    bool  _checkedIn;
    SKPaymentQueueClient * _client;
    <SKPaymentQueueDelegate> * _delegate;
    NSMutableDictionary * _downloads;
    NSString * _identifier;
    bool  _isRedemptionSheetShowing;
    bool  _isRefreshing;
    NSMutableArray * _localTransactions;
    NSObject<OS_dispatch_queue> * _observerQueue;
    SKXPCConnection * _requestConnection;
    SKXPCConnection * _responseConnection;
    bool  _restoreFinishedDuringRefresh;
    bool  _restoringCompletedTransactions;
    NSMutableArray * _transactions;
    NSMutableArray * _weakObservers;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
