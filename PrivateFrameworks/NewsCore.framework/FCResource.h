
@interface FCResource : NSObject <FCContentArchivable> {
    FCAssetHandle * _assetHandle;
    NSDate * _fetchDate;
    FCInterestToken * _interestToken;
    NSString * _resourceID;
    NTPBResourceRecord * _resourceRecord;
}

@property (nonatomic, readonly) FCAssetHandle *assetHandle;
@property (nonatomic, readonly) FCContentArchive *contentArchive;
@property (nonatomic, readonly) NSDate *fetchDate;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, retain) FCInterestToken *interestToken;
@property (getter=isOnDisk, nonatomic, readonly) bool onDisk;
@property (nonatomic, readonly) NSString *resourceID;
@property (nonatomic, retain) NTPBResourceRecord *resourceRecord;

- (void).cxx_destruct;
- (id)assetHandle;
- (id)contentArchive;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fetchDate;
- (id)fileURL;
- (unsigned long long)hash;
- (id)initWithPermanentURLForResourceID:(id)arg1 cacheLifetimeHint:(long long)arg2 contentContext:(id)arg3;
- (id)initWithRecord:(id)arg1 interestToken:(id)arg2 assetManager:(id)arg3;
- (id)initWithResourceID:(id)arg1 assetHandle:(id)arg2 fetchDate:(id)arg3;
- (id)interestToken;
- (bool)isEqual:(id)arg1;
- (bool)isOnDisk;
- (id)resourceID;
- (id)resourceRecord;
- (void)setInterestToken:(id)arg1;
- (void)setResourceRecord:(id)arg1;

@end
