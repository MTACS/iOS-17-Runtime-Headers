
@interface PHASEGroupPresetSetting : NSObject {
    double  _gain;
    long long  _gainCurveType;
    double  _gainHighFrequency;
    double  _gainLowFrequency;
    double  _rate;
    long long  _rateCurveType;
}

@property (nonatomic, readonly) double gain;
@property (nonatomic, readonly) long long gainCurveType;
@property (nonatomic, readonly) double gainHighFrequency;
@property (nonatomic, readonly) double gainLowFrequency;
@property (nonatomic, readonly) double rate;
@property (nonatomic, readonly) long long rateCurveType;

+ (id)new;

- (double)gain;
- (long long)gainCurveType;
- (double)gainHighFrequency;
- (double)gainLowFrequency;
- (id)init;
- (id)initWithGain:(double)arg1 rate:(double)arg2 gainCurveType:(long long)arg3 rateCurveType:(long long)arg4;
- (id)initWithGain:(double)arg1 rate:(double)arg2 gainHighFrequency:(double)arg3 gainLowFrequency:(double)arg4 gainCurveType:(long long)arg5 rateCurveType:(long long)arg6;
- (double)rate;
- (long long)rateCurveType;

@end
