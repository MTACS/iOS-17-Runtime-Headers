
@interface HFAbstractAlarmStatusItem : HFStatusItem <HFServiceLikeStatusItem>

+ (id)serviceTypes;

- (id)_subclass_updateWithOptions:(id)arg1;
- (id)iconDescription;
- (id)statusDescriptionAllNormal;
- (id)statusDescriptionMultipleTriggered:(unsigned long long)arg1;
- (id)statusDescriptionOneTriggered;

@end
