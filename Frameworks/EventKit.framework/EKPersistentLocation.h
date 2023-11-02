
@interface EKPersistentLocation : EKPersistentObject

+ (Class)alternateUniverseClass;
+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;
+ (id)relations;

- (id)address;
- (id)alarmOwner;
- (id)calendarItemOwner;
- (id)contactLabel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)derivedFrom;
- (id)description;
- (int)entityType;
- (id)latitude;
- (id)longitude;
- (id)mapKitHandle;
- (id)radius;
- (id)referenceFrame;
- (id)routing;
- (void)setAddress:(id)arg1;
- (void)setAlarmOwner:(id)arg1;
- (void)setCalendarItemOwner:(id)arg1;
- (void)setContactLabel:(id)arg1;
- (void)setDerivedFrom:(id)arg1;
- (void)setLatitude:(id)arg1;
- (void)setLongitude:(id)arg1;
- (void)setMapKitHandle:(id)arg1;
- (void)setRadius:(id)arg1;
- (void)setReferenceFrame:(id)arg1;
- (void)setRouting:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
