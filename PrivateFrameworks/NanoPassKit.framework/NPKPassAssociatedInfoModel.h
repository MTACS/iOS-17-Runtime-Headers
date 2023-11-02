
@interface NPKPassAssociatedInfoModel : NSObject {
    NSArray * _balanceFields;
    NSSet * _balances;
    NSArray * _commutePlanFields;
    bool  _commutePlanValueRequired;
    NSSet * _dynamicPlans;
    PKPaymentPass * _pass;
    unsigned long long  _rangingSuspensionReason;
    NSArray * _tiles;
    PKTransitAppletState * _transitAppletState;
    PKTransitPassProperties * _transitPassProperties;
}

@property (nonatomic, readonly) NSArray *allPassItemsFields;
@property (nonatomic, readonly) NSArray *balanceFields;
@property (nonatomic, copy) NSSet *balances;
@property (nonatomic, readonly) NSArray *commutePlanFields;
@property (getter=isCommutePlanValueRequired, nonatomic) bool commutePlanValueRequired;
@property (nonatomic, retain) NSSet *dynamicPlans;
@property (nonatomic, readonly) PKPaymentPass *pass;
@property (nonatomic) unsigned long long rangingSuspensionReason;
@property (nonatomic, retain) NSArray *tiles;
@property (nonatomic, retain) PKTransitAppletState *transitAppletState;
@property (nonatomic, retain) PKTransitPassProperties *transitPassProperties;

+ (id)accountBalanceForAccount:(id)arg1;

- (void).cxx_destruct;
- (id)_actionWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (id)_actionWithIdentifiers:(id)arg1 type:(unsigned long long)arg2;
- (id)_allPassBalanceFieldsWithBalancesByID:(id)arg1;
- (id)_balanceByIDWithBalances:(id)arg1;
- (id)_balanceFieldBalance:(id)arg1 fieldIdentifier:(id)arg2;
- (id)_balanceFieldWithPassField:(id)arg1 balance:(id)arg2 isPrimaryBalance:(bool)arg3;
- (id)_balanceFieldsWithBalancesByID:(id)arg1 passFields:(id)arg2 maximumCount:(unsigned long long)arg3;
- (id)_balancePassFieldsFromPass:(id)arg1;
- (id)_commutePlanFieldsWithBalancesByID:(id)arg1 commutePlansByID:(id)arg2;
- (id)_commutePlanWithFelicaPassProperties:(id)arg1;
- (id)_commutePlansByIDWithPlans:(id)arg1;
- (id)_formattedValueWithCommutePlan:(id)arg1 balancesByID:(id)arg2;
- (id)_identifierFromAction:(id)arg1 type:(unsigned long long)arg2;
- (id)_primaryDisplayableBalanceFieldWithBalancesByID:(id)arg1;
- (bool)_shouldAddCommutePlan:(id)arg1 action:(id)arg2 withBalancesByID:(id)arg3;
- (id)allPassItemsFields;
- (id)balanceFields;
- (id)balances;
- (id)commutePlanFields;
- (id)description;
- (id)dynamicPlans;
- (id)initWithPass:(id)arg1;
- (id)initWithPass:(id)arg1 transitProperties:(id)arg2 balances:(id)arg3 commutePlanValueRequired:(bool)arg4;
- (bool)isCommutePlanValueRequired;
- (bool)isEqual:(id)arg1;
- (id)pass;
- (unsigned long long)rangingSuspensionReason;
- (void)setBalances:(id)arg1;
- (void)setCommutePlanValueRequired:(bool)arg1;
- (void)setDynamicPlans:(id)arg1;
- (void)setRangingSuspensionReason:(unsigned long long)arg1;
- (void)setTiles:(id)arg1;
- (void)setTransitAppletState:(id)arg1;
- (void)setTransitPassProperties:(id)arg1;
- (id)tiles;
- (id)transitAppletState;
- (id)transitPassProperties;
- (void)updateItemFields;

@end
