
@interface MapsSyncManagedAnalyticsIdentifier : NSManagedObject

@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic, copy) NSData *data;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic) long long positionIndex;

+ (Class)wrapperClass;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
