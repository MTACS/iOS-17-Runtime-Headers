
@interface PSUICarrierSpaceUsageSection : NSObject {
    CTCarrierSpaceUsageAccountMetrics * _accountMetrics;
    NSMutableArray * _barCategories;
    NSMutableArray * _otherMetrics;
    CTCarrierSpaceUsagePlanMetrics * _primaryMetrics;
    NSString * _sharedPlanIdentifier;
}

@property (retain) CTCarrierSpaceUsageAccountMetrics *accountMetrics;
@property (retain) NSMutableArray *barCategories;
@property (retain) NSMutableArray *otherMetrics;
@property (retain) CTCarrierSpaceUsagePlanMetrics *primaryMetrics;
@property (retain) NSString *sharedPlanIdentifier;

- (void).cxx_destruct;
- (id)accountMetrics;
- (id)barCategories;
- (id)description;
- (bool)isSharedPlan;
- (id)otherMetrics;
- (id)primaryMetrics;
- (void)setAccountMetrics:(id)arg1;
- (void)setBarCategories:(id)arg1;
- (void)setOtherMetrics:(id)arg1;
- (void)setPrimaryMetrics:(id)arg1;
- (void)setSharedPlanIdentifier:(id)arg1;
- (id)sharedPlanIdentifier;

@end
