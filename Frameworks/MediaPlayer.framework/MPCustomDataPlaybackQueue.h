
@interface MPCustomDataPlaybackQueue : MPRemotePlaybackQueue

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSString *identifier;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (bool)supportsSecureCoding;

- (id)data;
- (id)description;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 data:(id)arg2;
- (id)initWithIdentifier:(id)arg1 data:(id)arg2 options:(id)arg3;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (id)asMusicPlaybackContextWithOptions:(unsigned long long)arg1 error:(id*)arg2;

@end
