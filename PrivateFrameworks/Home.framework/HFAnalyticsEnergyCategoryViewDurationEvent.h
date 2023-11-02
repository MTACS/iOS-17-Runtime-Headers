
@interface HFAnalyticsEnergyCategoryViewDurationEvent : HFAnalyticsEvent {
    NSNumber * _energyViewDuration;
    bool  _userHasAccessories;
}

@property (nonatomic, retain) NSNumber *energyViewDuration;
@property (nonatomic) bool userHasAccessories;

- (void).cxx_destruct;
- (id)energyViewDuration;
- (id)initWithData:(id)arg1;
- (id)payload;
- (void)setEnergyViewDuration:(id)arg1;
- (void)setUserHasAccessories:(bool)arg1;
- (bool)userHasAccessories;

@end
