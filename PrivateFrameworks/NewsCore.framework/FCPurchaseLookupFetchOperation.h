
@interface FCPurchaseLookupFetchOperation : FCFetchOperation {
    <FCContentContext> * _contentContext;
    NSArray * _purchaseIDs;
}

@property (nonatomic, retain) <FCContentContext> *contentContext;
@property (nonatomic, retain) NSArray *purchaseIDs;

- (void).cxx_destruct;
- (id)_prefixedPurchasedIDs:(id)arg1;
- (id)contentContext;
- (id)init;
- (id)initWithPurchaseIDs:(id)arg1 contentContext:(id)arg2;
- (void)performOperation;
- (id)processFetchedResults:(id)arg1 error:(id)arg2;
- (id)purchaseIDs;
- (void)setContentContext:(id)arg1;
- (void)setPurchaseIDs:(id)arg1;

@end
