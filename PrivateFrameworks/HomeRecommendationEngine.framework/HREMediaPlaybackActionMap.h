
@interface HREMediaPlaybackActionMap : HREActionMap {
    HFPlaybackArchive * _playbackArchive;
    long long  _targetPlaybackState;
    NSNumber * _targetVolume;
}

@property (nonatomic, retain) HFPlaybackArchive *playbackArchive;
@property (nonatomic) long long targetPlaybackState;
@property (nonatomic, retain) NSNumber *targetVolume;

+ (id)actionMapWithState:(long long)arg1 volume:(id)arg2 playbackArchive:(id)arg3;
+ (id)emptyMap;
+ (id)statelessActionMapWithVolume:(id)arg1 playbackArchive:(id)arg2;

- (void).cxx_destruct;
- (id)addingCondition:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flattenedMapEvaluatedForObject:(id)arg1;
- (id)initWithState:(long long)arg1 volume:(id)arg2 playbackArchive:(id)arg3;
- (void)mergeMap:(id)arg1 intoMap:(id)arg2;
- (id)mergeWithActionMaps:(id)arg1;
- (id)playbackArchive;
- (void)setPlaybackArchive:(id)arg1;
- (void)setTargetPlaybackState:(long long)arg1;
- (void)setTargetVolume:(id)arg1;
- (long long)targetPlaybackState;
- (id)targetVolume;

@end
