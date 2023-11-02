
@interface HMDMPCSessionData : HMFObject {
    NSString * _clientName;
    NSSet * _mediaProfiles;
    MPPlaybackArchive * _playbackArchive;
    NSNumber * _playbackStateNumber;
    NSNumber * _playbackVolumeNumber;
    NSNumber * _source;
}

@property (nonatomic, readonly, copy) NSString *clientName;
@property (nonatomic, readonly, copy) NSSet *mediaProfiles;
@property (nonatomic, readonly) MPPlaybackArchive *playbackArchive;
@property (nonatomic, readonly) bool playbackArchiveTargetsSystemMediaApplication;
@property (nonatomic, readonly, copy) NSNumber *playbackStateNumber;
@property (nonatomic, readonly, copy) NSNumber *playbackVolumeNumber;
@property (nonatomic, readonly, copy) NSNumber *source;

- (void).cxx_destruct;
- (id)clientName;
- (id)dictionaryRepresentation:(bool)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1 profileSource:(id)arg2;
- (id)initWithMediaAction:(id)arg1 source:(id)arg2 clientName:(id)arg3;
- (id)initWithMediaProfiles:(id)arg1 playbackState:(id)arg2 playbackVolume:(id)arg3 playbackArchive:(id)arg4 source:(id)arg5 clientName:(id)arg6;
- (id)mediaProfiles;
- (id)playbackArchive;
- (bool)playbackArchiveTargetsSystemMediaApplication;
- (id)playbackStateNumber;
- (id)playbackVolumeNumber;
- (id)source;

@end
