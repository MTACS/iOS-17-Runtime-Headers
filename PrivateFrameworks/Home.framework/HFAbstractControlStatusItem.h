
@interface HFAbstractControlStatusItem : HFStatusItem <HFServiceLikeStatusItem>

+ (bool)_isControlItem:(id)arg1 identicalToControlItem:(id)arg2;
+ (bool)_isControlItem:(id)arg1 similarToControlItem:(id)arg2;
+ (id)serviceTypes;

- (id)_aggregatedValueSourceWithServiceItems:(id)arg1;
- (id)_buildControlItemsForServices:(id)arg1;
- (id)_buildServiceItemsForServices:(id)arg1;
- (id)_primaryServiceDescriptorForServices:(id)arg1;
- (id)standardResultsForBatchReadResponse:(id)arg1 serviceTypes:(id)arg2;
- (bool)supportsInvalidation;

@end
