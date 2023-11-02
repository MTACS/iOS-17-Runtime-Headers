
@interface PKTransitAppletState : NSObject <NSCopying, NSSecureCoding> {
    bool  _appletStateDirty;
    NSDecimalNumber * _balance;
    NSArray * _balances;
    bool  _blacklisted;
    NSArray * _commutePlans;
    NSString * _currency;
    NSArray * _enrouteTransitTypes;
    NSDate * _expirationDate;
    NSNumber * _historySequenceNumber;
    NSNumber * _loyaltyBalance;
    bool  _needsStationProcessing;
    NSNumber * _serverRefreshIdentifier;
}

@property (nonatomic) bool appletStateDirty;
@property (nonatomic, copy) NSDecimalNumber *balance;
@property (nonatomic, copy) NSArray *balances;
@property (getter=isBlacklisted, nonatomic) bool blacklisted;
@property (nonatomic, copy) NSArray *commutePlans;
@property (nonatomic, copy) NSString *currency;
@property (nonatomic, copy) NSArray *enrouteTransitTypes;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, readonly) PKFelicaTransitAppletState *felicaState;
@property (nonatomic, copy) NSNumber *historySequenceNumber;
@property (getter=isInStation, nonatomic, readonly) bool inStation;
@property (nonatomic, copy) NSNumber *loyaltyBalance;
@property (nonatomic) bool needsStationProcessing;
@property (nonatomic, copy) NSNumber *serverRefreshIdentifier;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_resolveTransactionsFromState:(id)arg1 toState:(id)arg2 withHistoryRecords:(id)arg3 concreteTransactions:(id*)arg4 ephemeralTransaction:(id*)arg5 balanceLabels:(id)arg6 unitDictionary:(id)arg7 planLabels:(id)arg8;
- (void)addEnrouteTransitType:(id)arg1;
- (bool)appletStateDirty;
- (id)balance;
- (id)balances;
- (id)commutePlans;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currency;
- (void)encodeWithCoder:(id)arg1;
- (id)enrouteTransitTypes;
- (id)expirationDate;
- (id)felicaState;
- (unsigned long long)hash;
- (id)historySequenceNumber;
- (id)initWithCoder:(id)arg1;
- (bool)isBlacklisted;
- (bool)isEqual:(id)arg1;
- (bool)isInStation;
- (id)loyaltyBalance;
- (bool)needsStationProcessing;
- (id)processUpdateWithAppletHistory:(id)arg1 concreteTransactions:(id*)arg2 ephemeralTransaction:(id*)arg3;
- (id)processUpdateWithAppletHistory:(id)arg1 concreteTransactions:(id*)arg2 ephemeralTransaction:(id*)arg3 mutatedBalances:(id*)arg4;
- (id)processUpdateWithAppletHistory:(id)arg1 concreteTransactions:(id*)arg2 ephemeralTransaction:(id*)arg3 mutatedBalances:(id*)arg4 balanceLabelDictionary:(id)arg5;
- (id)processUpdateWithAppletHistory:(id)arg1 concreteTransactions:(id*)arg2 ephemeralTransaction:(id*)arg3 mutatedBalances:(id*)arg4 balanceLabelDictionary:(id)arg5 unitDictionary:(id)arg6;
- (id)processUpdateWithAppletHistory:(id)arg1 concreteTransactions:(id*)arg2 ephemeralTransaction:(id*)arg3 mutatedBalances:(id*)arg4 balanceLabelDictionary:(id)arg5 unitDictionary:(id)arg6 planLabelDictionary:(id)arg7;
- (id)serverRefreshIdentifier;
- (void)setAppletStateDirty:(bool)arg1;
- (void)setBalance:(id)arg1;
- (void)setBalances:(id)arg1;
- (void)setBlacklisted:(bool)arg1;
- (void)setCommutePlans:(id)arg1;
- (void)setCurrency:(id)arg1;
- (void)setEnrouteTransitTypes:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setHistorySequenceNumber:(id)arg1;
- (void)setLoyaltyBalance:(id)arg1;
- (void)setNeedsStationProcessing:(bool)arg1;
- (void)setServerRefreshIdentifier:(id)arg1;
- (id)transitPassPropertiesWithPaymentApplication:(id)arg1;
- (id)transitPassPropertiesWithPaymentApplication:(id)arg1 fieldCollection:(id)arg2;
- (id)transitPassPropertiesWithPaymentApplication:(id)arg1 pass:(id)arg2;
- (id)updatedEnrouteTransitTypesFromExistingTypes:(id)arg1 newTypes:(id)arg2;

// Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit

- (id)npk_processUpdateWithAppletHistory:(id)arg1 concreteTransactions:(id*)arg2 ephemeralTransaction:(id*)arg3 mutatedBalances:(id*)arg4 pass:(id)arg5;

@end
