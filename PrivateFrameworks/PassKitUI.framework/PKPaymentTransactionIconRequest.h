
@interface PKPaymentTransactionIconRequest : NSObject {
    NSString * _cacheKey;
    NSArray * _completionHandlers;
    bool  _ignoreLogoURL;
    PKMerchant * _merchant;
    PKPayLaterMerchant * _payLaterMerchant;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    PKPaymentTransaction * _transaction;
}

@property (nonatomic, retain) NSString *cacheKey;
@property (nonatomic, retain) NSArray *completionHandlers;
@property (nonatomic) bool ignoreLogoURL;
@property (nonatomic, retain) PKMerchant *merchant;
@property (nonatomic, retain) PKPayLaterMerchant *payLaterMerchant;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic, retain) PKPaymentTransaction *transaction;

- (void).cxx_destruct;
- (id)cacheKey;
- (id)completionHandlers;
- (unsigned long long)hash;
- (bool)ignoreLogoURL;
- (bool)isEqual:(id)arg1;
- (id)logoURL;
- (id)merchant;
- (id)payLaterMerchant;
- (void)setCacheKey:(id)arg1;
- (void)setCompletionHandlers:(id)arg1;
- (void)setIgnoreLogoURL:(bool)arg1;
- (void)setMerchant:(id)arg1;
- (void)setPayLaterMerchant:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTransaction:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)transaction;

@end
