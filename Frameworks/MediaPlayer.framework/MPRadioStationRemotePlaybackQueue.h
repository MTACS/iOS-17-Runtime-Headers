
@interface MPRadioStationRemotePlaybackQueue : MPRemotePlaybackQueue {
    long long  _stationID;
    NSString * _stationStringID;
}

@property (nonatomic, readonly) long long stationID;
@property (nonatomic, readonly) NSString *stationStringID;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue { }*)arg1 options:(id)arg2;
- (long long)stationID;
- (id)stationStringID;
- (bool)verifyWithError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (id)asMusicPlaybackContextWithOptions:(unsigned long long)arg1 error:(id*)arg2;

@end
