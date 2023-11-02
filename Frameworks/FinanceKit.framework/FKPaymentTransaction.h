
@interface FKPaymentTransaction : NSObject <NSCopying> {
    FKAmount * _amount;
    FKApplePayTransactionInsight * _applePayInsight;
    FKAmount * _foreignAmount;
    NSDecimalNumber * _foreignCurrencyExchangeRate;
    bool  _hasNotificationServiceData;
    FKMapsTransactionInsight * _mapsInsight;
    long long  _merchantCategoryCode;
    NSString * _paymentHash;
    long long  _status;
    NSDate * _transactionDate;
    NSString * _transactionDescription;
    NSString * _transactionId;
    NSDate * _transactionStatusChangedDate;
    unsigned long long  _type;
}

@property (nonatomic, readonly, copy) FKAmount *amount;
@property (nonatomic, readonly, copy) FKApplePayTransactionInsight *applePayInsight;
@property (nonatomic, readonly, copy) FKAmount *foreignAmount;
@property (nonatomic, readonly, copy) NSDecimalNumber *foreignCurrencyExchangeRate;
@property (nonatomic, readonly) bool hasNotificationServiceData;
@property (nonatomic, readonly, copy) FKMapsTransactionInsight *mapsInsight;
@property (nonatomic, readonly) long long merchantCategoryCode;
@property (nonatomic, readonly, copy) NSString *paymentHash;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly, copy) NSDate *transactionDate;
@property (nonatomic, readonly, copy) NSString *transactionDescription;
@property (nonatomic, readonly, copy) NSString *transactionId;
@property (nonatomic, readonly, copy) NSDate *transactionStatusChangedDate;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)amount;
- (id)applePayInsight;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)foreignAmount;
- (id)foreignCurrencyExchangeRate;
- (bool)hasNotificationServiceData;
- (unsigned long long)hash;
- (id)initWithTransactionIdentifier:(id)arg1 paymentHash:(id)arg2 amount:(id)arg3 foreignAmount:(id)arg4 foreignCurrencyExchangeRate:(id)arg5 transactionDate:(id)arg6 transactionStatusChangedDate:(id)arg7 type:(unsigned long long)arg8 status:(long long)arg9 transactionDescription:(id)arg10 merchantCategoryCode:(long long)arg11 mapsInsight:(id)arg12 hasNotificationServiceData:(bool)arg13;
- (id)initWithTransactionIdentifier:(id)arg1 paymentHash:(id)arg2 amount:(id)arg3 foreignAmount:(id)arg4 foreignCurrencyExchangeRate:(id)arg5 transactionDate:(id)arg6 transactionStatusChangedDate:(id)arg7 type:(unsigned long long)arg8 status:(long long)arg9 transactionDescription:(id)arg10 merchantCategoryCode:(long long)arg11 mapsInsight:(id)arg12 hasNotificationServiceData:(bool)arg13 applePayInsight:(id)arg14;
- (bool)isEqual:(id)arg1;
- (id)mapsInsight;
- (long long)merchantCategoryCode;
- (id)paymentHash;
- (long long)status;
- (id)transactionDate;
- (id)transactionDescription;
- (id)transactionId;
- (id)transactionStatusChangedDate;
- (unsigned long long)type;

@end
