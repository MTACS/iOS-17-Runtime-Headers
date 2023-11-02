
@interface AXMOutputManagerConfiguration : NSObject {
    unsigned long long  _components;
    double  _hapticEngineAutoShutdownTimeout;
    bool  _hapticEngineUsesAutoShutdown;
    bool  _hapticEngineUsesHapticsOnly;
    bool  _usesPrivateAudioSession;
}

@property (nonatomic) unsigned long long components;
@property (nonatomic) double hapticEngineAutoShutdownTimeout;
@property (nonatomic) bool hapticEngineUsesAutoShutdown;
@property (nonatomic) bool hapticEngineUsesHapticsOnly;
@property (nonatomic) bool usesPrivateAudioSession;

- (unsigned long long)components;
- (id)description;
- (double)hapticEngineAutoShutdownTimeout;
- (bool)hapticEngineUsesAutoShutdown;
- (bool)hapticEngineUsesHapticsOnly;
- (void)setComponents:(unsigned long long)arg1;
- (void)setHapticEngineAutoShutdownTimeout:(double)arg1;
- (void)setHapticEngineUsesAutoShutdown:(bool)arg1;
- (void)setHapticEngineUsesHapticsOnly:(bool)arg1;
- (void)setUsesPrivateAudioSession:(bool)arg1;
- (bool)usesPrivateAudioSession;

@end
