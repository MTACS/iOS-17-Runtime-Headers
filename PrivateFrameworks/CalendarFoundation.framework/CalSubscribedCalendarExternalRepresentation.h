
@interface CalSubscribedCalendarExternalRepresentation : NSObject

+ (id)dictionaryWithExternalRepresentationData:(id)arg1;
+ (id)externalRepresentationDataWithDictionary:(id)arg1;
+ (id)lastHolidayLanguageFromDictionary:(id)arg1;
+ (id)lastHolidayRegionFromDictionary:(id)arg1;
+ (id)logHandle;
+ (int)migrationVersionFromDictionary:(id)arg1;
+ (void)setLastHolidayLanguage:(id)arg1 inDictionary:(id)arg2;
+ (void)setLastHolidayRegion:(id)arg1 inDictionary:(id)arg2;
+ (void)setMigrationVersion:(int)arg1 inDictionary:(id)arg2;
+ (void)setSubscribedCalendarRefreshFlags:(unsigned long long)arg1 inDictionary:(id)arg2;
+ (unsigned long long)subscribedCalendarRefreshFlagsFromDictionary:(id)arg1;

@end
