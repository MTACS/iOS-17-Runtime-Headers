
@interface EDAMPricingModel : FATObject {
    NSNumber * _gnomeActive;
    NSNumber * _gnomeWarmingPeriod;
    NSNumber * _pricingModelStart;
}

@property (nonatomic, retain) NSNumber *gnomeActive;
@property (nonatomic, retain) NSNumber *gnomeWarmingPeriod;
@property (nonatomic, retain) NSNumber *pricingModelStart;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)gnomeActive;
- (id)gnomeWarmingPeriod;
- (id)pricingModelStart;
- (void)setGnomeActive:(id)arg1;
- (void)setGnomeWarmingPeriod:(id)arg1;
- (void)setPricingModelStart:(id)arg1;

@end
