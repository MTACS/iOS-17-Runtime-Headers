
@interface SHTrackMO : NSManagedObject

@property (nonatomic, copy) NSString *albumName;
@property (nonatomic, copy) NSString *appleMusicID;
@property (nonatomic, copy) NSURL *appleMusicURL;
@property (nonatomic, copy) NSURL *artworkURL;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic) bool explicit;
@property (nonatomic, retain) NSArray *genres;
@property (nonatomic, retain) SHGroupMO *group;
@property (nonatomic, copy) NSString *isrc;
@property (nonatomic, retain) NSArray *labels;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic, retain) SHMetadataMO *metadata;
@property (nonatomic, copy) NSDate *modifiedDate;
@property (nonatomic, copy) NSString *providerID;
@property (nonatomic, copy) NSString *providerName;
@property (nonatomic, retain) NSDictionary *rawSongResponse;
@property (nonatomic, copy) NSString *recognitionID;
@property (nonatomic, copy) NSDate *releaseDate;
@property (nonatomic) long long shazamCount;
@property (nonatomic, copy) NSString *shazamKey;
@property (nonatomic, copy) NSURL *shazamURL;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *syncID;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSURL *videoURL;

+ (id)fetchRequest;

@end
