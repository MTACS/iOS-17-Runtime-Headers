
@interface PKTransitBalanceModel : NSObject {
    NSMutableArray * _balanceFields;
    NSDictionary * _balancesByID;
    NSArray * _displayableBalances;
    NSArray * _displayableCommutePlanActions;
    NSArray * _displayableCommutePlanBalances;
    NSArray * _displayableCommutePlans;
    NSArray * _displayableCurrencyBalances;
    NSArray * _displayablePointsBalances;
    NSArray * _dynamicPlans;
    NSMutableDictionary * _dynamicPlansById;
    PKPaymentPass * _pass;
    NSArray * _transitCommutePlans;
    PKTransitPassProperties * _transitProperties;
}

@property (nonatomic, retain) NSMutableArray *balanceFields;
@property (nonatomic, readonly) NSDictionary *balancesAndCountPlansByID;
@property (nonatomic, readonly) NSArray *displayableBalances;
@property (nonatomic, readonly) NSArray *displayableCommutePlanActions;
@property (nonatomic, readonly) NSArray *displayableCommutePlanBalances;
@property (nonatomic, readonly) NSArray *displayableCommutePlans;
@property (nonatomic, readonly) NSArray *displayableCurrencyBalances;
@property (nonatomic, readonly) NSString *displayableListOfBalances;
@property (nonatomic, readonly) NSArray *displayablePointsBalances;
@property (nonatomic, readonly) bool hasBalanceContent;
@property (nonatomic, readonly) bool hasCommutePlanContent;
@property (nonatomic, readonly) bool hasCurrencyBalance;
@property (nonatomic, readonly) bool hasPointsBalance;
@property (nonatomic, readonly) bool hasPositiveBalance;
@property (nonatomic, readonly) PKPaymentPass *pass;
@property (nonatomic, readonly) NSString *primaryDisplayableBalance;
@property (nonatomic, readonly) NSArray *transitCommutePlans;

- (void).cxx_destruct;
- (void)_updateBalancesAndPlans;
- (void)applyStoredValueBalancesFromProperties:(id)arg1;
- (id)balanceFields;
- (id)balanceForIdentifiers:(id)arg1;
- (id)balancesAndCountPlansByID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayableBalances;
- (id)displayableCommutePlanActions;
- (id)displayableCommutePlanBalances;
- (id)displayableCommutePlans;
- (id)displayableCurrencyBalances;
- (id)displayableListOfBalances;
- (id)displayablePointsBalances;
- (id)filteredActionsForDisplayableEntities;
- (bool)hasBalanceContent;
- (bool)hasCommutePlanContent;
- (bool)hasCurrencyBalance;
- (bool)hasPointsBalance;
- (bool)hasPositiveBalance;
- (id)initWithPass:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)pass;
- (id)primaryDisplayableBalance;
- (void)setBalanceFields:(id)arg1;
- (void)setDynamicBalances:(id)arg1;
- (void)setDynamicBalancesByID:(id)arg1;
- (void)setTransitProperties:(id)arg1;
- (void)setTransitProperties:(id)arg1 andApplyStoredValueBalances:(bool)arg2;
- (id)transitCommutePlans;
- (void)updateWithDynamicBalances:(id)arg1;
- (void)updateWithDynamicCommutePlans:(id)arg1;

@end
