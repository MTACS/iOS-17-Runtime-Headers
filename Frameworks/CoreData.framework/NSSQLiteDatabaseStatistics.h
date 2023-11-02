
@interface NSSQLiteDatabaseStatistics : NSObject <NSCopying> {
    long long  _cacheHitPages;
    long long  _cacheMissPages;
    long long  _cacheSpillPages;
    long long  _pageSize;
}

@property (nonatomic, readonly) long long cacheHitPages;
@property (nonatomic, readonly) long long cacheMissPages;
@property (nonatomic, readonly) long long cacheSpillPages;
@property (nonatomic, readonly) long long pageSize;
@property (nonatomic, readonly) long long totalCachePages;

- (long long)cacheHitPages;
- (long long)cacheMissPages;
- (long long)cacheSpillPages;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)databaseStatisticsBySubtracting:(id)arg1;
- (id)description;
- (id)initWithPageSize:(long long)arg1;
- (long long)pageSize;
- (long long)totalCachePages;

@end
