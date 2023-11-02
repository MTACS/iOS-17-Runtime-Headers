
@interface HFMotionAlarmStatusItem : HFAbstractPresenceStatusItem

+ (id)serviceTypes;

- (id)descriptionStringForTriggeredServices:(id)arg1;
- (id)iconDescriptorForRepresentedHomeKitObjects:(id)arg1;
- (id)multipleReadyFormatString;
- (id)multipleTriggeredFormatString;
- (id)multipleTriggeredWithRoomsFormatString;
- (id)oneReadyFormatString;
- (id)oneTriggeredFormatString;
- (id)oneTriggeredWithRoomFormatString;
- (id)titleStringForTriggeredServices:(id)arg1;

@end
