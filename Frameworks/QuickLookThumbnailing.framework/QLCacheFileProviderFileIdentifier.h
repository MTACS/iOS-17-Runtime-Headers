
@interface QLCacheFileProviderFileIdentifier : QLCacheFileIdentifier <NSSecureCoding> {
    FPItemID * _itemID;
}

@property (readonly, copy) FPItemID *itemID;

// Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing

+ (id)knownFileProviderIdentifiersSoFar;
+ (bool)supportsSecureCoding;
+ (Class)versionedFileIdentifierClass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)itemID;

// Image: /System/Library/PrivateFrameworks/QuickLookThumbnailingDaemon.framework/QuickLookThumbnailingDaemon

+ (unsigned long long)cacheIdFromRowId:(unsigned long long)arg1;
+ (id)queryStringToFindCacheIds;
+ (bool)removeFromDatabase:(id)arg1 fileWithCacheId:(unsigned long long)arg2;
+ (unsigned long long)rowIdFromCacheId:(unsigned long long)arg1;
+ (id)tableName;
+ (id)whereClauseToFindCacheId;

- (void)bindInFindCacheIdStatement:(struct sqlite3_stmt { }*)arg1 database:(id)arg2 startingAtIndex:(unsigned int)arg3 gettingNextIndex:(unsigned int*)arg4;
- (struct sqlite3_stmt { }*)statementToFindCacheIdInDatabase:(id)arg1;

@end
