
@interface VUIPurchaseRequest : NSObject {
    AMSBuyParams * _amsBuyParams;
    NSString * _buyParamsString;
    id /* block */  _completionHandler;
    NSString * _enhancedBuyParamsString;
    AMSPurchase * _purchase;
    long long  _purchaseType;
    long long  _type;
}

@property (nonatomic, retain) AMSBuyParams *amsBuyParams;
@property (nonatomic, retain) NSString *buyParamsString;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) NSString *enhancedBuyParamsString;
@property (nonatomic, retain) AMSPurchase *purchase;
@property (nonatomic) long long purchaseType;
@property (nonatomic) long long type;

+ (long long)getPurchaseTypeFromActionRef:(id)arg1;
+ (bool)shouldPlayWhenDoneForActionRef:(id)arg1;

- (void).cxx_destruct;
- (void)_recordErrorLog:(id)arg1;
- (id)amsBuyParams;
- (id)buyParamsString;
- (id /* block */)completionHandler;
- (id)enhancedBuyParamsString;
- (void)enqueueWithCompletion:(id /* block */)arg1;
- (void)handleRequestCompletionWithResult:(id)arg1 andError:(id)arg2;
- (id)initWithBuyParams:(id)arg1 ofPurchaseType:(long long)arg2;
- (id)purchase;
- (long long)purchaseType;
- (void)setAmsBuyParams:(id)arg1;
- (void)setBuyParamsString:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setEnhancedBuyParamsString:(id)arg1;
- (void)setPurchase:(id)arg1;
- (void)setPurchaseType:(long long)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
