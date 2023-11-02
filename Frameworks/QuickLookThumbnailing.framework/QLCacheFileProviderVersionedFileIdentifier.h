
@interface QLCacheFileProviderVersionedFileIdentifier : QLCacheVersionedFileIdentifier <NSSecureCoding>

@property (readonly) QLCacheFileProviderFileIdentifier *fileIdentifier;

// Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing

- (id)initWithFileIdentifier:(id)arg1 version:(id)arg2;
- (id)initWithThumbnailRequest:(id)arg1;

// Image: /System/Library/PrivateFrameworks/QuickLookThumbnailingDaemon.framework/QuickLookThumbnailingDaemon

- (id)initWithSteppedStatement:(struct sqlite3_stmt { }*)arg1 database:(id)arg2;
- (struct sqlite3_stmt { }*)statementToInsertIntoDatabase:(id)arg1;
- (struct sqlite3_stmt { }*)statementToUpdateRecordWithCacheIdentifier:(unsigned long long)arg1 inDatabase:(id)arg2;

@end
