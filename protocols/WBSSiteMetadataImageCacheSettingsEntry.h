
@protocol WBSSiteMetadataImageCacheSettingsEntry <NSObject>

@required

- (long long)databaseID;
- (id)entryWithDatabaseID:(long long)arg1;
- (id)initWithSQLiteRow:(WBSSQLiteRow *)arg1;

@end
