
@protocol PXMutableAppleMusicAsset <NSObject>

@required

- (NSString *)albumTitle;
- (NSString *)artistName;
- (NSString *)artworkURLFormat;
- (NSString *)colorGradeCategory;
- (void)configureCuesWithVideoEventTimestampsInSeconds:(NSArray *)arg1 videoEventScores:(NSArray *)arg2;
- (NSString *)contentProvider;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (NSNumber *)energy;
- (NSArray *)entryPoints;
- (unsigned long long)flags;
- (NSURL *)introPreviewURL;
- (NSNumber *)loudnessMainPeak;
- (NSNumber *)loudnessMainValue;
- (void)setAlbumTitle:(NSString *)arg1;
- (void)setArtistName:(NSString *)arg1;
- (void)setArtworkURLFormat:(NSString *)arg1;
- (void)setColorGradeCategory:(NSString *)arg1;
- (void)setContentProvider:(NSString *)arg1;
- (void)setDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setEnergy:(NSNumber *)arg1;
- (void)setEntryPoints:(NSArray *)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setIntroPreviewURL:(NSURL *)arg1;
- (void)setLoudnessMainPeak:(NSNumber *)arg1;
- (void)setLoudnessMainValue:(NSNumber *)arg1;
- (void)setSongURL:(NSURL *)arg1;
- (void)setStoreID:(NSString *)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setValence:(NSNumber *)arg1;
- (void)setVisualTempo:(NSNumber *)arg1;
- (NSURL *)songURL;
- (NSString *)storeID;
- (NSString *)title;
- (NSNumber *)valence;
- (NSNumber *)visualTempo;

@end
