
@interface MOWebContentSettingsGroup : MOSettingsGroup

@property (nonatomic, retain) MOWebContentFilterPolicy *blockedByFilter;

+ (id)blockedByFilterMetadata;
+ (id)groupName;

- (id)blockedByFilter;
- (void)setBlockedByFilter:(id)arg1;

@end
