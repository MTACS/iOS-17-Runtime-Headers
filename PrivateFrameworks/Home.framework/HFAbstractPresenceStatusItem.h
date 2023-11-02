
@interface HFAbstractPresenceStatusItem : HFStatusItem <HFServiceLikeStatusItem>

+ (id)serviceTypes;

- (id)_subclass_updateWithOptions:(id)arg1;
- (id)defaultTitleForRepresentedHomeKitObjects:(id)arg1;
- (id)descriptionStringForTriggeredServices:(id)arg1;
- (id)multipleReadyFormatString;
- (id)multipleTriggeredFormatString;
- (id)multipleTriggeredWithRoomsFormatString;
- (id)oneReadyFormatString;
- (id)oneTriggeredFormatString;
- (id)oneTriggeredWithRoomFormatString;
- (id)titleStringForTriggeredServices:(id)arg1;

@end
