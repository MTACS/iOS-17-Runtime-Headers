
@interface MapsSyncManagedAnonymousCredential : NSManagedObject

@property (nonatomic, copy) NSData *anonymousId;
@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSData *mapsToken;
@property (nonatomic, copy) NSDate *mapsTokenCreatedAt;
@property (nonatomic) long long mapsTokenTTL;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic) long long positionIndex;
@property (nonatomic, retain) NSSet *reviewedPlaces;

+ (Class)wrapperClass;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
