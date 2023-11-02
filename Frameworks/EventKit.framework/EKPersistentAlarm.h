
@interface EKPersistentAlarm : EKPersistentObject

@property (nonatomic, readonly) NSString *oldSemanticIdentifier;

+ (Class)alternateUniverseClass;
+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;
+ (id)propertyKeyForUniqueIdentifier;
+ (id)relations;

- (id)UUID;
- (id)absoluteDate;
- (id)acknowledgedDate;
- (id)calendarItemOwner;
- (id)calendarOwner;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)emailAddress;
- (int)entityType;
- (id)externalData;
- (bool)isDefaultAlarm;
- (id)oldSemanticIdentifier;
- (id)originalAlarm;
- (long long)proximity;
- (id)relativeOffset;
- (void)setAbsoluteDate:(id)arg1;
- (void)setAcknowledgedDate:(id)arg1;
- (void)setCalendarItemOwner:(id)arg1;
- (void)setCalendarOwner:(id)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setExternalData:(id)arg1;
- (void)setIsDefaultAlarm:(bool)arg1;
- (void)setOriginalAlarm:(id)arg1;
- (void)setProximity:(long long)arg1;
- (void)setRelativeOffset:(id)arg1;
- (void)setSnoozedAlarmsSet:(id)arg1;
- (void)setStructuredLocation:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setUUID:(id)arg1;
- (void)setUrlWrapper:(id)arg1;
- (id)snoozedAlarmsSet;
- (id)structuredLocation;
- (long long)type;
- (id)urlWrapper;

@end
