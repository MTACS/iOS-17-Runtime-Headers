
@protocol PLSearchableAssetCollection <NSObject>

@required

- (void)addSearchIndexContentsToCollection:(PSICollection *)arg1;
- (unsigned long long)assetsCountPrivate;
- (unsigned long long)assetsCountShared;
- (NSDate *)keyAssetCreationDatePrivate;
- (NSDate *)keyAssetCreationDateShared;
- (NSString *)keyAssetUUIDPrivate;
- (NSString *)keyAssetUUIDShared;
- (NSString *)searchIndexContents;
- (NSDate *)searchableEndDate;
- (NSDate *)searchableStartDate;
- (NSString *)subtitle;
- (NSString *)title;
- (NSString *)uuid;

@end
