
@interface AVAudioEnvironmentDistanceAttenuationParameters : NSObject {
    void * _impl;
}

@property (nonatomic) long long distanceAttenuationModel;
@property (nonatomic) float maximumDistance;
@property (nonatomic) float referenceDistance;
@property (nonatomic) float rolloffFactor;

- (void)dealloc;
- (long long)distanceAttenuationModel;
- (id)init;
- (id)initWithEnvironment:(void*)arg1;
- (float)maximumDistance;
- (float)referenceDistance;
- (float)rolloffFactor;
- (void)setDistanceAttenuationModel:(long long)arg1;
- (void)setMaximumDistance:(float)arg1;
- (void)setReferenceDistance:(float)arg1;
- (void)setRolloffFactor:(float)arg1;

@end
