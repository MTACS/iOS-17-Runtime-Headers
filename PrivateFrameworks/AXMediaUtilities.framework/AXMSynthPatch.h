
@interface AXMSynthPatch : NSObject {
    double * _amplitudes;
    double  _baseAmplitude;
    double  _baseFrequency;
    NSArray * _harmonicInfos;
    double * _harmonics;
    long long  _n;
}

@property (nonatomic, copy) NSArray *harmonicInfos;

+ (id)defaultPatch;
+ (id)sawPatch;
+ (id)sinePatch;
+ (id)squarePatch;
+ (id)trapeziumPatch;
+ (id)trianglePatch;
+ (id)violinPatch;

- (void).cxx_destruct;
- (void)dealloc;
- (id)harmonicInfos;
- (id)initWithHarmonics:(id)arg1;
- (void)setHarmonicInfos:(id)arg1;
- (double)waveformValueForPhase:(double)arg1 frequency:(double)arg2 amplitude:(double)arg3;

@end
