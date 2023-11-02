
@interface ANXPCTransactionManager : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _transactions;
}

@property (nonatomic, readonly) NSArray *activeTransactions;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) unsigned long long status;
@property (nonatomic, readonly) NSMutableDictionary *transactions;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_cancelTimer:(id)arg1;
- (id)_createTransaction:(id)arg1;
- (void)_createTransaction:(id)arg1 expiration:(double)arg2;
- (unsigned long long)_currentStatus;
- (id)_overview;
- (void)_removeTransaction:(id)arg1;
- (void)_resetTimer:(id)arg1 expiration:(double)arg2;
- (void)_startTimer:(id)arg1 expiration:(double)arg2;
- (void)_transaction:(id)arg1 setActive:(bool)arg2;
- (void)_transaction:(id)arg1 setActiveForTimeInterval:(double)arg2;
- (id)activeTransactions;
- (id)description;
- (id)init;
- (id)queue;
- (unsigned long long)status;
- (id)transaction:(id)arg1 forEndpointUUID:(id)arg2;
- (void)transaction:(id)arg1 setActive:(bool)arg2;
- (void)transaction:(id)arg1 setActiveForTimeInterval:(double)arg2;
- (id)transactions;

@end
