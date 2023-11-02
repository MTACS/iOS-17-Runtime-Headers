
@interface EKPersistentResourceChange : EKPersistentObject

+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;
+ (id)relations;

- (bool)alerted;
- (id)calendar;
- (id)calendarItem;
- (unsigned int)changeType;
- (id)changedByAddress;
- (id)changedByDisplayName;
- (id)changedByFirstName;
- (id)changedByLastName;
- (unsigned int)changedProperties;
- (id)createCount;
- (id)deleteCount;
- (id)deletedTitle;
- (int)entityType;
- (id)notification;
- (unsigned int)publicStatus;
- (id)timestamp;
- (id)updateCount;

@end
