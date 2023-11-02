
@interface PGSongEntry : NSManagedObject

@property (nonatomic, copy) NSString *adamID;
@property (nonatomic, copy) NSString *album;
@property (nonatomic, retain) NSNumber *arousal;
@property (nonatomic, copy) NSString *artist;
@property (nonatomic, copy) NSString *audioLocaleIdentifier;
@property (nonatomic, retain) NSNumber *clearedForPhotosMemoriesExport;
@property (nonatomic, retain) NSNumber *duration;
@property (nonatomic, copy) NSData *genreNamesAsData;
@property (nonatomic, retain) NSNumber *isExplicit;
@property (nonatomic, copy) NSDate *lastRefreshAttemptDate;
@property (nonatomic, copy) NSSet *playbackInfo;
@property (nonatomic, retain) NSNumber *preferenceScore;
@property (nonatomic, copy) NSSet *sources;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) NSNumber *unitagMemoryAppropriateScore;
@property (nonatomic, retain) NSNumber *unitagMemoryNotAppropriateScore;
@property (nonatomic, retain) NSNumber *valence;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
