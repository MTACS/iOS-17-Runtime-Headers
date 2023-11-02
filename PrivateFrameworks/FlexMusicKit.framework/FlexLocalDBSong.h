
@interface FlexLocalDBSong : NSManagedObject

@property (nonatomic) double arousal;
@property (nonatomic) long long artVersion;
@property (nonatomic, retain) NSString *artistName;
@property (nonatomic, retain) NSURL *artworkURL;
@property (nonatomic, retain) NSString *audioEncoderPresetName;
@property (nonatomic, readonly) bool canPlay;
@property (nonatomic) long long compatibilityVersion;
@property (nonatomic, retain) NSString *format;
@property (nonatomic, retain) NSSet *genreStrings;
@property (nonatomic, retain) NSSet *genres;
@property (nonatomic) bool hidden;
@property (nonatomic, retain) NSString *mood;
@property (nonatomic, retain) NSString *moodAlt;
@property (nonatomic, retain) NSString *pace;
@property (nonatomic) bool recalled;
@property (nonatomic, retain) NSData *recordData;
@property (nonatomic, retain) CKRecordID *recordID;
@property (nonatomic, retain) NSSet *regionStrings;
@property (nonatomic, retain) NSSet *regions;
@property (nonatomic, retain) NSURL *songBundleURL;
@property (nonatomic, retain) NSString *songName;
@property (nonatomic) long long songVersion;
@property (nonatomic) long long style;
@property (nonatomic, readonly) NSSet *tagIDs;
@property (nonatomic, retain) NSUUID *uuid;
@property (nonatomic) double valence;
@property (nonatomic) double visualTempo;

- (bool)canPlay;
- (id)genreStrings;
- (id)recordID;
- (id)regionStrings;
- (void)setGenreStrings:(id)arg1;
- (void)setRecordID:(id)arg1;
- (void)setRegionStrings:(id)arg1;
- (id)tagIDs;

@end
