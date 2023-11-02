
@interface HFBlindsServiceItem : HFDoorServiceItem

+ (id)supportedServiceTypes;

- (long long)_doorServicePriority;
- (id)createControlItemsWithOptions:(id)arg1;

@end
