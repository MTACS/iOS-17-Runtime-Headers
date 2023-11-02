
@interface BMNowPlayingEvent : BMEventBase <BMProtoBufWrapper, BMStoreData> {
    double  _absoluteTimestamp;
    NSString * _album;
    NSString * _artist;
    NSString * _bundleID;
    unsigned int  _duration;
    unsigned int  _elapsed;
    NSString * _genre;
    NSString * _groupIdentifier;
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
    unsigned long long  _playbackState;
    NSString * _title;
    NSString * _uniqueID;
}

@property (nonatomic, readonly) double absoluteTimestamp;
@property (nonatomic, readonly) NSString *album;
@property (nonatomic, readonly) NSString *artist;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned int duration;
@property (nonatomic, readonly) unsigned int elapsed;
@property (nonatomic, readonly) NSString *genre;
@property (nonatomic, readonly) NSString *groupIdentifier;
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
@property (nonatomic, readonly) unsigned long long playbackState;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *uniqueID;

// Image: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)new;

- (void).cxx_destruct;
- (double)absoluteTimestamp;
- (id)album;
- (id)artist;
- (id)bundleID;
- (unsigned int)dataVersion;
- (id)description;
- (unsigned int)duration;
- (unsigned int)elapsed;
- (id)encodeAsProto;
- (id)genre;
- (id)groupIdentifier;
- (unsigned long long)hash;
- (id)iTunesAlbumIdentifier;
- (id)iTunesArtistIdentifier;
- (id)iTunesStoreIdentifier;
- (id)iTunesSubscriptionIdentifier;
- (id)init;
- (id)initWithDKEvent:(id)arg1 outputDevices:(id)arg2;
- (id)initWithDKEvent:(id)arg1 outputDevices:(id)arg2 iTunesArtistIdentifier:(id)arg3 iTunesAlbumIdentifier:(id)arg4;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithUniqueID:(id)arg1 bundleID:(id)arg2 absoluteTimestamp:(double)arg3 playbackState:(unsigned long long)arg4 album:(id)arg5 artist:(id)arg6 duration:(unsigned int)arg7 genre:(id)arg8 title:(id)arg9 elapsed:(unsigned int)arg10 mediaType:(id)arg11 iTunesStoreIdentifier:(id)arg12 iTunesSubscriptionIdentifier:(id)arg13 iTunesArtistIdentifier:(id)arg14 iTunesAlbumIdentifier:(id)arg15 isAirPlayVideo:(bool)arg16 outputDevices:(id)arg17;
- (id)initWithUniqueID:(id)arg1 bundleID:(id)arg2 absoluteTimestamp:(double)arg3 playbackState:(unsigned long long)arg4 album:(id)arg5 artist:(id)arg6 duration:(unsigned int)arg7 genre:(id)arg8 title:(id)arg9 elapsed:(unsigned int)arg10 mediaType:(id)arg11 iTunesStoreIdentifier:(id)arg12 iTunesSubscriptionIdentifier:(id)arg13 isAirPlayVideo:(bool)arg14 outputDevices:(id)arg15;
- (id)initWithUniqueID:(id)arg1 bundleID:(id)arg2 absoluteTimestamp:(double)arg3 playbackState:(unsigned long long)arg4 album:(id)arg5 artist:(id)arg6 duration:(unsigned int)arg7 genre:(id)arg8 title:(id)arg9 elapsed:(unsigned int)arg10 mediaType:(id)arg11 itemMediaType:(int)arg12 itemMediaSubtype:(int)arg13 iTunesStoreIdentifier:(id)arg14 iTunesSubscriptionIdentifier:(id)arg15 iTunesArtistIdentifier:(id)arg16 iTunesAlbumIdentifier:(id)arg17 groupIdentifier:(id)arg18 isAirPlayVideo:(bool)arg19 isRemoteControl:(bool)arg20 outputDevices:(id)arg21;
- (bool)isAirPlayVideo;
- (bool)isEqual:(id)arg1;
- (bool)isRemoteControl;
- (int)itemMediaSubtype;
- (int)itemMediaType;
- (id)mediaType;
- (id)outputDevices;
- (unsigned long long)playbackState;
- (id)proto;
- (id)serialize;
- (id)title;
- (id)uniqueID;

// Image: /System/Library/PrivateFrameworks/SiriSignals.framework/SiriSignals

- (id)description;

@end
