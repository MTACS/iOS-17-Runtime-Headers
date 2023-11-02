
@protocol PXMutableMockAudioAsset <PXAudioAsset>

@required

- (NSString *)albumTitle;
- (NSString *)artistName;
- (NSString *)artworkURLFormat;
- (Class)audioSessionClass;
- (NSString *)colorGradeCategory;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (NSArray *)entryPoints;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })exportableDuration;
- (unsigned long long)flags;
- (NSString *)identifier;
- (long long)pace;
- (void)setAlbumTitle:(NSString *)arg1;
- (void)setArtistName:(NSString *)arg1;
- (void)setArtworkURLFormat:(NSString *)arg1;
- (void)setAudioSessionClass:(Class)arg1;
- (void)setColorGradeCategory:(NSString *)arg1;
- (void)setDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setEntryPoints:(NSArray *)arg1;
- (void)setExportableDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setPace:(long long)arg1;
- (void)setSubtitle:(NSString *)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSString *)subtitle;
- (NSString *)title;

@end
