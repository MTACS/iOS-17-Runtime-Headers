
@interface FTMutableAcousticFeature : FTAcousticFeature

@property (nonatomic, copy) NSArray *acoustic_feature_per_frame;
@property (nonatomic) float frame_duration;

- (id)acoustic_feature_per_frame;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)frame_duration;
- (id)init;
- (void)setAcoustic_feature_per_frame:(id)arg1;
- (void)setFrame_duration:(float)arg1;

@end
