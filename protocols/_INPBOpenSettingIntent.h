
@protocol _INPBOpenSettingIntent <NSObject>

@required

- (bool)hasIntentMetadata;
- (bool)hasSearchQuery;
- (bool)hasSettingMetadata;
- (_INPBIntentMetadata *)intentMetadata;
- (_INPBDataString *)searchQuery;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setSearchQuery:(_INPBDataString *)arg1;
- (void)setSettingMetadata:(_INPBSettingMetadata *)arg1;
- (_INPBSettingMetadata *)settingMetadata;

@end
