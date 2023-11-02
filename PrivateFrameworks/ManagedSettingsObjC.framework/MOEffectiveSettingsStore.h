
@interface MOEffectiveSettingsStore : MOSettingsStore <MOSettingsReader>

+ (id)new;
+ (id)publisherForGroups:(id)arg1;
+ (id)setOfActiveRestrictionUUIDs;

- (void)dealloc;
- (id)init;
- (id)reader;
- (id)valueForSetting:(id)arg1 inGroup:(id)arg2;

@end
