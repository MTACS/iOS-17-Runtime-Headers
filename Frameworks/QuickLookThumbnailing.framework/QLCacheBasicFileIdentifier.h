
@interface QLCacheBasicFileIdentifier : QLCacheFileIdentifier <NSSecureCoding> {
    unsigned long long  _fileId;
    struct fsid { 
        int val[2]; 
    }  _fsid;
}

@property (readonly) unsigned long long fileId;
@property (readonly) struct fsid { int x1[2]; } fsid;

// Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing

+ (bool)supportsSecureCoding;
+ (Class)versionedFileIdentifierClass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)fileId;
- (struct fsid { int x1[2]; })fsid;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileId:(unsigned long long)arg1 fsid:(struct fsid { int x1[2]; })arg2;
- (id)initWithFileURL:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;

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
