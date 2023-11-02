
@interface PHASEGroup : NSObject {
    PHASEEngine * _engine;
    double  _gain;
    double  _gainHighFrequency;
    double  _gainLowFrequency;
    unsigned long long  _hashId;
    NSString * _identifier;
    bool  _isMuted;
    bool  _isSoloed;
    bool  _muted;
    double  _rate;
    bool  _soloed;
}

@property (nonatomic) PHASEEngine *engine;
@property (nonatomic) double gain;
@property (nonatomic) double gainHighFrequency;
@property (nonatomic) double gainLowFrequency;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) bool isMuted;
@property (readonly) bool isSoloed;
@property (getter=isMuted, readonly) bool muted;
@property (nonatomic) double rate;
@property (getter=isSoloed, readonly) bool soloed;
@property (nonatomic, readonly) NSString *uid;

+ (id)new;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)engine;
- (void)fadeGain:(double)arg1 duration:(double)arg2 curveType:(long long)arg3;
- (void)fadeGainHighFrequency:(double)arg1 duration:(double)arg2 curveType:(long long)arg3;
- (void)fadeGainLowFrequency:(double)arg1 duration:(double)arg2 curveType:(long long)arg3;
- (void)fadeRate:(double)arg1 duration:(double)arg2 curveType:(long long)arg3;
- (double)gain;
- (double)gainHF;
- (double)gainHighFrequency;
- (double)gainLF;
- (double)gainLowFrequency;
- (id)identifier;
- (id)init;
- (id)initWithEngine:(id)arg1 identifier:(id)arg2;
- (id)initWithEngine:(id)arg1 uid:(id)arg2;
- (id)initWithIdentifier:(id)arg1;
- (bool)isMuted;
- (bool)isMuted;
- (bool)isSoloed;
- (bool)isSoloed;
- (void)mute;
- (double)rate;
- (void)registerWithEngine:(id)arg1;
- (void)setEngine:(id)arg1;
- (void)setGain:(double)arg1;
- (void)setGainHighFrequency:(double)arg1;
- (void)setGainLowFrequency:(double)arg1;
- (void)setRate:(double)arg1;
- (void)solo;
- (id)uid;
- (void)unmute;
- (void)unregisterFromEngine;
- (void)unsolo;

@end
