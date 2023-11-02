
@interface MapsSyncManagedRAPRecord : NSManagedObject

@property (nonatomic) short clientRevision;
@property (nonatomic, retain) MapsSyncManagedCommunityID *communityID;
@property (nonatomic, copy) NSData *contentData;
@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic) long long positionIndex;
@property (nonatomic, copy) NSData *rapResponse;
@property (nonatomic, copy) NSString *reportId;
@property (nonatomic) short status;
@property (nonatomic, copy) NSDate *statusLastUpdatedDate;
@property (nonatomic, copy) NSString *summary;
@property (nonatomic) short type;

+ (Class)wrapperClass;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
