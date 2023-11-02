
@interface PGSongPlaybackInfoEntry : NSManagedObject

@property (nonatomic, copy) NSString *dateUTC;
@property (nonatomic, copy) NSString *devices;
@property (nonatomic, copy) NSString *hoursUTC;
@property (nonatomic) bool ignoreForRecommendations;
@property (nonatomic, copy) NSString *lastEndReason;
@property (nonatomic) long long playCount;
@property (nonatomic) long long playDurationInMilliseconds;
@property (nonatomic) long long skipCount;
@property (nonatomic, retain) PGSongEntry *song;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
