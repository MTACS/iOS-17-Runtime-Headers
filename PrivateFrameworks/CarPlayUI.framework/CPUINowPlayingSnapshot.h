
@interface CPUINowPlayingSnapshot : NSObject {
    NSString * _album;
    NSString * _artist;
    MPArtworkCatalog * _artworkCatalog;
    NSString * _bundleIdentifier;
    struct { 
        double snapshotTime; 
        double startTime; 
        double endTime; 
        double duration; 
        double elapsedDuration; 
        float rate; 
        float defaultRate; 
        bool isLiveContent; 
        bool isLoading; 
    }  _durationSnapshot;
    bool  _isRadioPlayback;
    MPCPlayerResponse * _response;
    MPCPlayerResponseItem * _responseItem;
    MPModelSong * _song;
    long long  _state;
    NSString * _title;
    MPCPlayerResponseTracklist * _tracklist;
}

@property (nonatomic, readonly) NSString *album;
@property (nonatomic, readonly) NSString *artist;
@property (nonatomic, readonly) MPArtworkCatalog *artworkCatalog;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; bool x8; bool x9; } durationSnapshot;
@property (nonatomic, readonly) bool isRadioPlayback;
@property (nonatomic, readonly) NSNumber *jumpBackInterval;
@property (nonatomic, readonly) NSNumber *jumpForwardInterval;
@property (nonatomic, readonly) MPModelSong *nextSong;
@property (nonatomic, readonly) MPModelSong *previousSong;
@property (nonatomic, readonly) MPCPlayerResponse *response;
@property (nonatomic, readonly) MPCPlayerResponseItem *responseItem;
@property (nonatomic, readonly) bool shouldEnableBackButton;
@property (nonatomic, readonly) bool shouldEnableNextButton;
@property (nonatomic, readonly) bool showsStopButton;
@property (nonatomic, readonly) MPModelSong *song;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) MPCPlayerResponseTracklist *tracklist;

+ (id)knownJumpIntervals;

- (void).cxx_destruct;
- (id)_getSongIsNext:(bool)arg1;
- (id)album;
- (id)artist;
- (id)artworkCatalog;
- (id)bundleIdentifier;
- (id)commandWithType:(unsigned long long)arg1;
- (struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; bool x8; bool x9; })durationSnapshot;
- (id)initWithResponse:(id)arg1;
- (bool)isRadioPlayback;
- (id)jumpBackInterval;
- (id)jumpForwardInterval;
- (id)nextSong;
- (id)previousSong;
- (id)response;
- (id)responseItem;
- (bool)shouldEnableBackButton;
- (bool)shouldEnableNextButton;
- (bool)showsStopButton;
- (id)song;
- (long long)state;
- (id)title;
- (id)tracklist;

@end
