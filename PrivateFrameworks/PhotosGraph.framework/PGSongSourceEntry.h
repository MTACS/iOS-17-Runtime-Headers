
@interface PGSongSourceEntry : NSManagedObject

@property (nonatomic, copy) NSString *category;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSDate *dateLastUpdated;
@property (nonatomic, copy) NSString *geohash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSSet *songs;
@property (nonatomic, copy) NSString *version;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
