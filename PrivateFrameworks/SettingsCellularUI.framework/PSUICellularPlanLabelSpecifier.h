
@interface PSUICellularPlanLabelSpecifier : PSSpecifier {
    PSUICellularPlanManagerCache * _planManagerCache;
    PSUICellularPlanUniversalReference * _planReference;
}

@property (nonatomic, retain) PSUICellularPlanManagerCache *planManagerCache;
@property (nonatomic, retain) PSUICellularPlanUniversalReference *planReference;

- (void).cxx_destruct;
- (id)cellularPlanLabel:(id)arg1;
- (id)getLogger;
- (id)initWithPlanUniversalReference:(id)arg1 planManagerCache:(id)arg2;
- (id)planManagerCache;
- (id)planReference;
- (void)setPlanManagerCache:(id)arg1;
- (void)setPlanReference:(id)arg1;
- (void)updateValuesAndTitles;

@end
