
@interface HFEnergyCategoryStatusItem : HFAccessoryCategoryStatusItem {
    NSString * _energyAdviceDisplayDescription;
}

@property (nonatomic, retain) NSString *energyAdviceDisplayDescription;

+ (id)statusItemClasses;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)accessoryTypeGroup;
- (id)energyAdviceDisplayDescription;
- (bool)hidesWithNoAccessories;
- (void)setEnergyAdviceDisplayDescription:(id)arg1;
- (void)updateEnergyAdviceDisplayDescription:(id)arg1;

@end
