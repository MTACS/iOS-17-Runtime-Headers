
@interface MapsSyncManagedCachedUserReview : NSManagedObject

@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic) long long muid;
@property (nonatomic) int numberPhotosUploaded;
@property (nonatomic) long long positionIndex;
@property (nonatomic) short rating;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
