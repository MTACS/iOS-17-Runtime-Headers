
@interface MapsSyncManagedCachedCuratedCollection : NSManagedObject

@property (nonatomic, copy) NSString *collectionDescription;
@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic) long long curatedCollectionIdentifier;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSData *image;
@property (nonatomic, copy) NSString *imageUrl;
@property (nonatomic) bool isTombstone;
@property (nonatomic, copy) NSDate *lastFetchedDate;
@property (nonatomic, copy) NSDate *lastSignificantChangeDate;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic) int placesCount;
@property (nonatomic) long long positionIndex;
@property (nonatomic, copy) NSString *publisherAttribution;
@property (nonatomic) int resultProviderIdentifier;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *titleLocale;

+ (Class)wrapperClass;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
