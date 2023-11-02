
@interface HFLightbulbServiceItem : HFServiceItem

+ (id)supportedServiceTypes;

- (id)_subclass_updateWithOptions:(id)arg1;
- (bool)containsActions;
- (id)createControlItemsWithOptions:(id)arg1;
- (id)currentStateActionBuildersForHome:(id)arg1;
- (id)lightProfile;

@end
