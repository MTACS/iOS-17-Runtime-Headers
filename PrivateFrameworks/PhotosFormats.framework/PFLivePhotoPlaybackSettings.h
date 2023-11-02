
@interface PFLivePhotoPlaybackSettings : NSObject {
    float  _audioVolume;
    AVVideoComposition * _videoComposition;
}

@property (nonatomic) float audioVolume;
@property (nonatomic, retain) AVVideoComposition *videoComposition;

- (void).cxx_destruct;
- (float)audioVolume;
- (id)init;
- (void)setAudioVolume:(float)arg1;
- (void)setVideoComposition:(id)arg1;
- (id)videoComposition;

@end
