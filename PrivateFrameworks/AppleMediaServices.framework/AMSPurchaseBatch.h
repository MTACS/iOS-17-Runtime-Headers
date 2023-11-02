
@interface AMSPurchaseBatch : NSObject {
    bool  _isComplete;
    NSLock * _lock;
    AMSLazyPromise * _promise;
    NSMutableDictionary * _purchaseMap;
    NSMutableArray * _purchases;
    NSMutableArray * _results;
    NSMutableArray * _returnedPurchaseIDs;
}

@property (nonatomic) bool isComplete;
@property (nonatomic, retain) NSLock *lock;
@property (nonatomic, readonly) AMSLazyPromise *promise;
@property (nonatomic, readonly) NSMutableDictionary *purchaseMap;
@property (nonatomic, readonly) NSMutableArray *purchases;
@property (nonatomic, readonly) NSMutableArray *results;
@property (nonatomic, readonly) NSMutableArray *returnedPurchaseIDs;

- (void).cxx_destruct;
- (bool)finishPurchase:(id)arg1 withError:(id)arg2;
- (bool)finishPurchase:(id)arg1 withResult:(id)arg2;
- (id)initWithPurchases:(id)arg1 weakPromise:(id)arg2;
- (bool)isComplete;
- (id)lock;
- (id)nextPurchase;
- (id)promise;
- (id)purchaseForPurchaseId:(id)arg1;
- (id)purchaseMap;
- (id)purchases;
- (id)results;
- (id)returnedPurchaseIDs;
- (void)setIsComplete:(bool)arg1;
- (void)setLock:(id)arg1;

@end
