
@interface EKPersistentRecurrenceRule : EKPersistentObject

+ (Class)alternateUniverseClass;
+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;
+ (id)propertyKeyForUniqueIdentifier;
+ (id)relations;

- (id)UUID;
- (id)cachedEndDate;
- (id)cachedEndDateTimeZone;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (id)endDate;
- (int)entityType;
- (long long)firstDayOfTheWeekRaw;
- (int)frequencyRaw;
- (long long)interval;
- (id)owner;
- (void)setCachedEndDate:(id)arg1;
- (void)setCachedEndDateTimeZone:(id)arg1;
- (void)setCount:(unsigned long long)arg1;
- (void)setEndDate:(id)arg1;
- (void)setFirstDayOfTheWeekRaw:(long long)arg1;
- (void)setFrequencyRaw:(int)arg1;
- (void)setInterval:(long long)arg1;
- (void)setOwner:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (void)setUUID:(id)arg1;
- (id)specifier;

@end
