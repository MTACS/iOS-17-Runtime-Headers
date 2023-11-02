
@interface DAOfficeHoursContext : NSObject {
    NSString * _accountID;
    id /* block */  _fetchCompletionBlock;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _setCompletionBlock;
}

@property (nonatomic, copy) NSString *accountID;
@property (nonatomic, copy) id /* block */ fetchCompletionBlock;
@property (nonatomic, readonly) bool isFetch;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, copy) id /* block */ setCompletionBlock;

- (void).cxx_destruct;
- (void)abortWithError:(id)arg1;
- (id)accountID;
- (id /* block */)fetchCompletionBlock;
- (void)finishFetchWithOfficeHours:(id)arg1 error:(id)arg2;
- (void)finishSetWithError:(id)arg1;
- (bool)isFetch;
- (id)queue;
- (void)setAccountID:(id)arg1;
- (id /* block */)setCompletionBlock;
- (void)setFetchCompletionBlock:(id /* block */)arg1;
- (void)setQueue:(id)arg1;
- (void)setSetCompletionBlock:(id /* block */)arg1;

@end
