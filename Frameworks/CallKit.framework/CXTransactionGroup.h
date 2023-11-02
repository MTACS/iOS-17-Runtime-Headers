
@interface CXTransactionGroup : NSObject {
    NSMutableDictionary * _callSourceIdentifierToTransaction;
    NSMutableArray * _mutableCallSources;
    NSMutableArray * _mutableProviderSources;
    NSMutableArray * _mutableServiceClients;
    NSMutableDictionary * _providerSourceIdentifierToTransaction;
    NSMutableDictionary * _serviceClientIdentifierToTransaction;
}

@property (nonatomic, readonly, copy) NSArray *allActions;
@property (nonatomic, readonly) NSMutableDictionary *callSourceIdentifierToTransaction;
@property (nonatomic, readonly, copy) NSArray *callSources;
@property (getter=isComplete, nonatomic, readonly) bool complete;
@property (nonatomic, readonly) NSMutableArray *mutableCallSources;
@property (nonatomic, readonly) NSMutableArray *mutableProviderSources;
@property (nonatomic, readonly) NSMutableArray *mutableServiceClients;
@property (nonatomic, readonly) NSMutableDictionary *providerSourceIdentifierToTransaction;
@property (nonatomic, readonly, copy) NSArray *providerSources;
@property (nonatomic, readonly, copy) NSArray *serviceClientActions;
@property (getter=isServiceClientGroupComplete, nonatomic, readonly) bool serviceClientGroupComplete;
@property (nonatomic, readonly) NSMutableDictionary *serviceClientIdentifierToTransaction;
@property (nonatomic, readonly, copy) NSArray *serviceClientTransactions;
@property (nonatomic, readonly, copy) NSArray *serviceClients;
@property (nonatomic, readonly, copy) NSArray *transactions;

- (void).cxx_destruct;
- (void)addAction:(id)arg1 forCallSource:(id)arg2;
- (void)addAction:(id)arg1 forProviderSource:(id)arg2;
- (void)addAction:(id)arg1 forServiceClient:(id)arg2;
- (id)allActions;
- (id)callSourceIdentifierToTransaction;
- (id)callSources;
- (id)description;
- (id)init;
- (bool)isComplete;
- (bool)isServiceClientGroupComplete;
- (id)mutableCallSources;
- (id)mutableProviderSources;
- (id)mutableServiceClients;
- (id)providerSourceIdentifierToTransaction;
- (id)providerSources;
- (id)serviceClientActions;
- (id)serviceClientIdentifierToTransaction;
- (id)serviceClientTransactions;
- (id)serviceClients;
- (id)transactionForCallSource:(id)arg1;
- (id)transactionForProviderSource:(id)arg1;
- (id)transactionForServiceClient:(id)arg1;
- (id)transactions;

@end
