
@interface AXMActiveSoundOutputActionHandleImpl : NSObject <AXMActiveSoundOutputActionHandleProvider> {
    AXMActiveSound * _activeSound;
    float  _pitch;
    float  _rate;
    AXMSoundComponent * _soundComponent;
}

@property (nonatomic) AXMActiveSound *activeSound;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) float pitch;
@property (nonatomic) float rate;
@property (nonatomic) AXMSoundComponent *soundComponent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activeSound;
- (id)init;
- (float)pitch;
- (float)rate;
- (void)setActiveSound:(id)arg1;
- (void)setPitch:(float)arg1;
- (void)setQuantizedRate:(long long)arg1;
- (void)setRate:(float)arg1;
- (void)setSoundComponent:(id)arg1;
- (id)soundComponent;
- (void)stop;

@end
