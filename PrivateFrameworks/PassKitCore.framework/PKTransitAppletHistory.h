
@interface PKTransitAppletHistory : NSObject <NSSecureCoding> {
    NSDecimalNumber * _balance;
    NSArray * _balances;
    bool  _blacklisted;
    NSArray * _commutePlans;
    NSString * _currency;
    NSSet * _enrouteTransitTypes;
    NSDate * _expirationDate;
    NSArray * _historyRecords;
    NSArray * _inStationDetails;
    NSNumber * _loyaltyBalance;
    NSNumber * _serverRefreshIdentifier;
    NSString * _serviceProvider;
    long long  _source;
}

@property (nonatomic, copy) NSDecimalNumber *balance;
@property (nonatomic, copy) NSArray *balances;
@property (getter=isBlacklisted, nonatomic) bool blacklisted;
@property (nonatomic, readonly, copy) NSArray *commutePlans;
@property (nonatomic, copy) NSString *currency;
@property (nonatomic, copy) NSSet *enrouteTransitTypes;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic, copy) NSArray *historyRecords;
@property (getter=isInStation, nonatomic, readonly) bool inStation;
@property (nonatomic, copy) NSArray *inStationDetails;
@property (nonatomic, copy) NSNumber *loyaltyBalance;
@property (nonatomic, copy) NSNumber *serverRefreshIdentifier;
@property (nonatomic, copy) NSString *serviceProvider;
@property (nonatomic) long long source;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)balance;
- (id)balances;
- (id)commutePlans;
- (id)currency;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)enrouteTransitTypes;
- (id)expirationDate;
- (id)felicaHistory;
- (id)historyRecords;
- (id)inStationDetails;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 source:(long long)arg2;
- (bool)isBlacklisted;
- (bool)isInStation;
- (id)loyaltyBalance;
- (void)sanitizeValuesWithState:(id)arg1;
- (id)serverRefreshIdentifier;
- (id)serviceProvider;
- (void)setBalance:(id)arg1;
- (void)setBalances:(id)arg1;
- (void)setBlacklisted:(bool)arg1;
- (void)setCurrency:(id)arg1;
- (void)setEnrouteTransitTypes:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setHistoryRecords:(id)arg1;
- (void)setInStationDetails:(id)arg1;
- (void)setLoyaltyBalance:(id)arg1;
- (void)setServerRefreshIdentifier:(id)arg1;
- (void)setServiceProvider:(id)arg1;
- (void)setSource:(long long)arg1;
- (long long)source;

@end
