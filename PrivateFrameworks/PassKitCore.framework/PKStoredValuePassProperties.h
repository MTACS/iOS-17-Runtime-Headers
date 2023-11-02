
@interface PKStoredValuePassProperties : NSObject <NSCopying, NSSecureCoding> {
    NSString * _appletFormat;
    PKCurrencyAmount * _balanceAmount;
    NSArray * _balances;
    bool  _blocked;
    NSDecimalNumber * _decimalTransitBalance;
    NSArray * _enrouteTransitTypes;
    NSDate * _expirationDate;
    bool  _inStation;
}

@property (nonatomic, copy) NSString *appletFormat;
@property (nonatomic, readonly, copy) NSDecimalNumber *balance;
@property (nonatomic, copy) PKCurrencyAmount *balanceAmount;
@property (nonatomic, copy) NSArray *balances;
@property (getter=isBlacklisted, nonatomic, readonly) bool blacklisted;
@property (getter=isBlocked, nonatomic) bool blocked;
@property (nonatomic, readonly) NSString *currencyCode;
@property (nonatomic, readonly) NSDecimalNumber *decimalTransitBalance;
@property (nonatomic, readonly) NSString *displayableBalance;
@property (nonatomic, readonly) NSString *displayableTransitBalance;
@property (nonatomic, copy) NSArray *enrouteTransitTypes;
@property (nonatomic, copy) NSDate *expirationDate;
@property (getter=isInStation, nonatomic) bool inStation;
@property (nonatomic, readonly) bool isBlocked;
@property (nonatomic, readonly) bool isEnRoute;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (Class)equalityClass;
+ (id)passPropertiesForPass:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appletFormat;
- (id)balance;
- (id)balanceAmount;
- (id)balanceWithIdentifier:(id)arg1;
- (id)balances;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyCode;
- (id)decimalBalance;
- (id)decimalTransitBalance;
- (id)displayableBalance;
- (id)displayableTransitBalance;
- (void)encodeWithCoder:(id)arg1;
- (id)enrouteTransitTypes;
- (id)expirationDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransitAppletState:(id)arg1 paymentApplication:(id)arg2 fieldCollection:(id)arg3;
- (bool)isBlacklisted;
- (bool)isBlocked;
- (bool)isEnRoute;
- (bool)isEqual:(id)arg1;
- (bool)isInStation;
- (id)primaryCashBalance;
- (void)setAppletFormat:(id)arg1;
- (void)setBalanceAmount:(id)arg1;
- (void)setBalances:(id)arg1;
- (void)setBlocked:(bool)arg1;
- (void)setEnrouteTransitTypes:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setInStation:(bool)arg1;

// Image: /usr/lib/swift/libswiftPassKit.dylib

- (bool)isBlocked;

@end
