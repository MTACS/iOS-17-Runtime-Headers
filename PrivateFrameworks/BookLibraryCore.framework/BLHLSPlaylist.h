
@interface BLHLSPlaylist : NSObject <BLM3U8ParserDelegate> {
    NSArray * _groups;
    bool  _ignoreSegments;
    bool  _independentSegments;
    NSUUID * _racGUID;
    NSArray * _requestedBitrates;
    NSArray * _segments;
    BLHLSPlaylistState * _state;
    NSArray * _streamInfs;
    NSMutableSet * _uniqueKeys;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *groups;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoreSegments;
@property (nonatomic) bool independentSegments;
@property (nonatomic, readonly) NSSet *keys;
@property (nonatomic, retain) NSUUID *racGUID;
@property (nonatomic, retain) NSArray *requestedBitrates;
@property (nonatomic, retain) NSArray *segments;
@property (nonatomic, retain) BLHLSPlaylistState *state;
@property (nonatomic, retain) NSArray *streamInfs;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableSet *uniqueKeys;

+ (id)_playlistUsingParser:(id)arg1 ignoreSegments:(bool)arg2 error:(id*)arg3;
+ (bool)_rewritePlaylistWithParser:(id)arg1 toURL:(id)arg2 requestedBitrates:(id)arg3 error:(id*)arg4;
+ (id)playlistParsingData:(id)arg1 error:(id*)arg2;
+ (id)playlistParsingURL:(id)arg1 error:(id*)arg2;
+ (id)playlistParsingURL:(id)arg1 ignoreSegments:(bool)arg2 error:(id*)arg3;
+ (bool)rewritePlaylistData:(id)arg1 toURL:(id)arg2 requestedBitrates:(id)arg3 error:(id*)arg4;
+ (bool)rewritePlaylistURL:(id)arg1 toURL:(id)arg2 requestedBitrates:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (bool)_parseUsingParser:(id)arg1 error:(id*)arg2;
- (id)description;
- (id)groups;
- (bool)ignoreSegments;
- (bool)independentSegments;
- (id)initWithRequestedBitrates:(id)arg1;
- (id)keys;
- (void)parser:(id)arg1 lineIsComment:(id)arg2;
- (void)parser:(id)arg1 lineIsTag:(id)arg2 value:(id)arg3 attributeList:(id)arg4;
- (void)parser:(id)arg1 lineIsURL:(id)arg2;
- (bool)parserShouldCollectLine:(id)arg1;
- (id)racGUID;
- (id)requestedBitrates;
- (id)segments;
- (void)setGroups:(id)arg1;
- (void)setIgnoreSegments:(bool)arg1;
- (void)setIndependentSegments:(bool)arg1;
- (void)setRacGUID:(id)arg1;
- (void)setRequestedBitrates:(id)arg1;
- (void)setSegments:(id)arg1;
- (void)setState:(id)arg1;
- (void)setStreamInfs:(id)arg1;
- (void)setUniqueKeys:(id)arg1;
- (id)state;
- (id)streamInfs;
- (id)uniqueKeys;

@end
