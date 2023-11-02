
@interface MapsSyncManagedCollection : NSManagedObject

@property (nonatomic, copy) NSString *collectionDescription;
@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSData *image;
@property (nonatomic, copy) NSString *imageUrl;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic, retain) NSSet *places;
@property (nonatomic) int placesCount;
@property (nonatomic) long long positionIndex;
@property (nonatomic, copy) NSString *title;

+ (Class)wrapperClass;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
