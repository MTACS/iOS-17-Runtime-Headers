
@interface FHPaymentRingSuggestionResponse : NSObject {
    NSDecimalNumber * _amount;
    unsigned long long  _category;
    long long  _merchantCategory;
    long long  _priority;
}

@property (nonatomic, copy) NSDecimalNumber *amount;
@property (nonatomic) unsigned long long category;
@property (nonatomic) long long merchantCategory;
@property (nonatomic) long long priority;

+ (id)roundingAmount:(id)arg1;

- (void).cxx_destruct;
- (id)amount;
- (unsigned long long)category;
- (long long)compare:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAmount:(id)arg1 category:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (long long)merchantCategory;
- (long long)priority;
- (void)setAmount:(id)arg1;
- (void)setCategory:(unsigned long long)arg1;
- (void)setMerchantCategory:(long long)arg1;
- (void)setPriority:(long long)arg1;

@end
