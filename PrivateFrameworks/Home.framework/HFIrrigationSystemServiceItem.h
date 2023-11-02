
@interface HFIrrigationSystemServiceItem : HFServiceItem

+ (id)supportedServiceTypes;

- (id)_childValveServiceFilter;
- (id)_subclass_updateWithOptions:(id)arg1;
- (bool)containsActions;
- (id)createControlItemsWithOptions:(id)arg1;
- (id)currentStateActionBuildersForHome:(id)arg1;
- (id)servicesToReadForCharacteristicType:(id)arg1;

@end
