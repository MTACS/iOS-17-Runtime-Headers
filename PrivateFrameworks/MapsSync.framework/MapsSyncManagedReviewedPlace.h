
@interface MapsSyncManagedReviewedPlace : NSManagedObject

@property (nonatomic, retain) MapsSyncManagedAnonymousCredential *anonymousCredential;
@property (nonatomic, retain) MapsSyncManagedCommunityID *communityID;
@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic) bool hasUserReviewed;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDate *lastSuggestedReviewDate;
@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, copy) NSData *mapItemIdComparableRepresentation;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic) long long muid;
@property (nonatomic) long long positionIndex;
@property (nonatomic, retain) NSNumber *rating;
@property (nonatomic, retain) NSNumber *resultProviderIdentifier;
@property (nonatomic) int uploadedPhotosCount;
@property (nonatomic) short version;

+ (Class)wrapperClass;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
