
@interface MPLocalMediaQueryRemotePlaybackQueue : MPRemotePlaybackQueue {
    MPMediaItem * _firstItem;
    MPMediaQuery * _mediaQuery;
    long long  _repeatType;
    long long  _shuffleType;
}

@property (nonatomic, readonly) MPMediaItem *firstItem;
@property (nonatomic, readonly) MPMediaQuery *mediaQuery;
@property (nonatomic, readonly) long long repeatType;
@property (nonatomic, readonly) long long shuffleType;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)firstItem;
- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue { }*)arg1 options:(id)arg2;
- (id)mediaQuery;
- (long long)repeatType;
- (long long)shuffleType;
- (bool)verifyWithError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (id)asMusicPlaybackContextWithOptions:(unsigned long long)arg1 error:(id*)arg2;

@end
