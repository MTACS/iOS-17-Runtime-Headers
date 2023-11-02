
@interface MapsSyncManagedCuratedCollection : NSManagedObject

@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic) long long curatedCollectionIdentifier;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic) long long positionIndex;
@property (nonatomic) int resultProviderIdentifier;

+ (Class)wrapperClass;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
