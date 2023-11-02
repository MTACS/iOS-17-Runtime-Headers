
@interface AXKonaParameters : NSObject {
    long long  _breathiness;
    long long  _headSize;
    long long  _pitchBase;
    long long  _pitchFluctuation;
    long long  _roughness;
    long long  _speed;
    long long  _vocalTract;
    long long  _volume;
}

@property (nonatomic) long long breathiness;
@property (nonatomic) long long headSize;
@property (nonatomic) long long pitchBase;
@property (nonatomic) long long pitchFluctuation;
@property (nonatomic) long long roughness;
@property (nonatomic) long long speed;
@property (nonatomic) long long vocalTract;
@property (nonatomic) long long volume;

- (long long)breathiness;
- (id)copy;
- (long long)headSize;
- (long long)pitchBase;
- (long long)pitchFluctuation;
- (long long)roughness;
- (void)setBreathiness:(long long)arg1;
- (void)setHeadSize:(long long)arg1;
- (void)setPitchBase:(long long)arg1;
- (void)setPitchFluctuation:(long long)arg1;
- (void)setRoughness:(long long)arg1;
- (void)setSpeed:(long long)arg1;
- (void)setVocalTract:(long long)arg1;
- (void)setVolume:(long long)arg1;
- (long long)speed;
- (long long)vocalTract;
- (long long)volume;

@end
