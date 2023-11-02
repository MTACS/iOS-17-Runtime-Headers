
@interface FlexMLSong : FlexSongBackend {
    NSString * _audioFileExtension;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _cachedNaturalDuration;
    NSString * _metadataPath;
    NSString * _rootPath;
}

@property (nonatomic, copy) NSString *audioFileExtension;
@property (nonatomic, readonly) NSURL *audioFileURL;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } cachedNaturalDuration;
@property (nonatomic, readonly) NSString *metadataPath;
@property (nonatomic, readonly) NSString *rootPath;

+ (id)loadSongAtPath:(id)arg1;

- (void).cxx_destruct;
- (void)_setupInitialAssets:(id)arg1;
- (id)_summaryManager;
- (id)audioFileExtension;
- (id)audioFileURL;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })cachedNaturalDuration;
- (bool)canPlay;
- (id)idealDurations;
- (id)initWithFileAtPath:(id)arg1;
- (bool)isLoaded;
- (id)metadataPath;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minimumDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })naturalDuration;
- (id)renditionForDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 withOptions:(id)arg2 testingContext:(id)arg3;
- (id)rootPath;
- (void)setAudioFileExtension:(id)arg1;
- (void)setCachedNaturalDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)timedMetadataItemsWithIdentifier:(id)arg1 forRendition:(id)arg2;
- (bool)verifyRendition:(id)arg1 forDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 failureReason:(id*)arg3;

@end
