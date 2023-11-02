
@interface MusicKit_SoftLinking_MPMusicPlayerPlayParametersQueueDescriptor : NSObject {
    MusicKit_SoftLinking_MPMusicPlayerPlayParameters * _containerPlayParameters;
    NSString * _playActivityFeatureName;
    MusicKit_SoftLinking_MPMusicPlayerPlayParameters * _startItemPlayParameters;
    MPMusicPlayerPlayParametersQueueDescriptor * _underlyingQueueDescriptor;
}

@property (nonatomic, readonly) MPMusicPlayerPlayParametersQueueDescriptor *_underlyingQueueDescriptor;
@property (nonatomic, retain) MusicKit_SoftLinking_MPMusicPlayerPlayParameters *containerPlayParameters;
@property (nonatomic, copy) NSString *playActivityFeatureName;
@property (nonatomic, retain) MusicKit_SoftLinking_MPMusicPlayerPlayParameters *startItemPlayParameters;

- (void).cxx_destruct;
- (id)_underlyingQueueDescriptor;
- (id)containerPlayParameters;
- (id)initWithPlayParametersQueue:(id)arg1;
- (id)playActivityFeatureName;
- (void)setContainerPlayParameters:(id)arg1;
- (void)setEndTime:(double)arg1 forItemWithPlayParameters:(id)arg2;
- (void)setPlayActivityFeatureName:(id)arg1;
- (void)setStartItemPlayParameters:(id)arg1;
- (void)setStartTime:(double)arg1 forItemWithPlayParameters:(id)arg2;
- (id)startItemPlayParameters;

@end
