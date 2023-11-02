
@interface MPMusicPlayerPlaybackArchiveQueueDescriptor : MPMusicPlayerQueueDescriptor {
    MPPlaybackArchive * _playbackArchive;
}

@property (nonatomic, readonly, copy) MPPlaybackArchive *playbackArchive;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlaybackArchive:(id)arg1;
- (bool)isEmpty;
- (id)playbackArchive;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (id)playbackContexts;

@end
