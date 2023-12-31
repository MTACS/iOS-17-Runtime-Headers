
@interface BMMediaNowPlaying : BMEventBase <BMStoreData> {
    NSString * _album;
    NSString * _artist;
    NSString * _bundleID;
    unsigned int  _duration;
    unsigned int  _elapsed;
    NSString * _genre;
    NSString * _groupIdentifier;
    bool  _hasDuration;
    bool  _hasElapsed;
    bool  _hasIsAirPlayVideo;
    bool  _hasIsRemoteControl;
    bool  _hasRaw_absoluteTimestamp;
    NSString * _iTunesAlbumIdentifier;
    NSString * _iTunesArtistIdentifier;
    NSString * _iTunesStoreIdentifier;
    NSString * _iTunesSubscriptionIdentifier;
    bool  _isAirPlayVideo;
    bool  _isRemoteControl;
    int  _itemMediaSubtype;
    int  _itemMediaType;
    NSString * _mediaType;
    NSArray * _outputDevices;
    int  _playbackState;
    double  _raw_absoluteTimestamp;
    NSString * _title;
    NSString * _uniqueID;
}

@property (nonatomic, readonly) NSDate *absoluteTimestamp;
@property (nonatomic, readonly) NSString *album;
@property (nonatomic, readonly) NSString *artist;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned int duration;
@property (nonatomic, readonly) unsigned int elapsed;
@property (nonatomic, readonly) NSString *genre;
@property (nonatomic, readonly) NSString *groupIdentifier;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasElapsed;
@property (nonatomic) bool hasIsAirPlayVideo;
@property (nonatomic) bool hasIsRemoteControl;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *iTunesAlbumIdentifier;
@property (nonatomic, readonly) NSString *iTunesArtistIdentifier;
@property (nonatomic, readonly) NSString *iTunesStoreIdentifier;
@property (nonatomic, readonly) NSString *iTunesSubscriptionIdentifier;
@property (nonatomic, readonly) bool isAirPlayVideo;
@property (nonatomic, readonly) bool isRemoteControl;
@property (nonatomic, readonly) int itemMediaSubtype;
@property (nonatomic, readonly) int itemMediaType;
@property (nonatomic, readonly) NSString *mediaType;
@property (nonatomic, readonly) NSArray *outputDevices;
@property (nonatomic, readonly) int playbackState;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *uniqueID;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_outputDevicesJSONArray;
- (id)absoluteTimestamp;
- (id)album;
- (id)artist;
- (id)bundleID;
- (unsigned int)dataVersion;
- (id)description;
- (unsigned int)duration;
- (unsigned int)elapsed;
- (id)genre;
- (id)groupIdentifier;
- (bool)hasDuration;
- (bool)hasElapsed;
- (bool)hasIsAirPlayVideo;
- (bool)hasIsRemoteControl;
- (id)iTunesAlbumIdentifier;
- (id)iTunesArtistIdentifier;
- (id)iTunesStoreIdentifier;
- (id)iTunesSubscriptionIdentifier;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithUniqueID:(id)arg1 absoluteTimestamp:(id)arg2 playbackState:(int)arg3 album:(id)arg4 artist:(id)arg5 duration:(id)arg6 genre:(id)arg7 title:(id)arg8 elapsed:(id)arg9 mediaType:(id)arg10 iTunesStoreIdentifier:(id)arg11 iTunesSubscriptionIdentifier:(id)arg12 isAirPlayVideo:(id)arg13 outputDevices:(id)arg14 bundleID:(id)arg15 iTunesArtistIdentifier:(id)arg16 iTunesAlbumIdentifier:(id)arg17 groupIdentifier:(id)arg18 isRemoteControl:(id)arg19 itemMediaType:(int)arg20 itemMediaSubtype:(int)arg21;
- (bool)isAirPlayVideo;
- (bool)isEqual:(id)arg1;
- (bool)isRemoteControl;
- (int)itemMediaSubtype;
- (int)itemMediaType;
- (id)jsonDictionary;
- (id)mediaType;
- (id)outputDevices;
- (int)playbackState;
- (id)serialize;
- (void)setHasDuration:(bool)arg1;
- (void)setHasElapsed:(bool)arg1;
- (void)setHasIsAirPlayVideo:(bool)arg1;
- (void)setHasIsRemoteControl:(bool)arg1;
- (id)title;
- (id)uniqueID;
- (void)writeTo:(id)arg1;

@end
