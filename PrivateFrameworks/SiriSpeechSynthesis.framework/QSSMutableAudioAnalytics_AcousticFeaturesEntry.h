
@interface QSSMutableAudioAnalytics_AcousticFeaturesEntry : QSSAudioAnalytics_AcousticFeaturesEntry

@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) QSSAcousticFeature *value;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)key;
- (void)setKey:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
