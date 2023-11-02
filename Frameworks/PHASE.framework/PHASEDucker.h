
@interface PHASEDucker : NSObject {
    bool  _active;
    long long  _attackCurve;
    double  _attackTime;
    PHASEEngine * _engine;
    double  _gain;
    double  _gainHighFrequency;
    double  _gainLowFrequency;
    NSString * _identifier;
    long long  _releaseCurve;
    double  _releaseTime;
    NSSet * _sourceGroups;
    NSSet * _targetGroups;
    NSString * _uid;
}

@property (getter=isActive, readonly) bool active;
@property (nonatomic, readonly) long long attackCurve;
@property (nonatomic, readonly) double attackTime;
@property (nonatomic, readonly) double gain;
@property (nonatomic, readonly) double gainHighFrequency;
@property (nonatomic, readonly) double gainLowFrequency;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long releaseCurve;
@property (nonatomic, readonly) double releaseTime;
@property (nonatomic, readonly, copy) NSSet *sourceGroups;
@property (nonatomic, readonly, copy) NSSet *targetGroups;
@property (nonatomic, readonly) NSString *uid;

+ (id)new;

- (void).cxx_destruct;
- (void)activate;
- (long long)attackCurve;
- (double)attackTime;
- (void)deactivate;
- (double)gain;
- (double)gainHighFrequency;
- (double)gainLowFrequency;
- (id)identifier;
- (id)init;
- (id)initWithEngine:(id)arg1 sourceGroups:(id)arg2 targetGroups:(id)arg3 gain:(double)arg4 attackTime:(double)arg5 releaseTime:(double)arg6 attackCurve:(long long)arg7 releaseCurve:(long long)arg8;
- (id)initWithEngine:(id)arg1 sourceGroups:(id)arg2 targetGroups:(id)arg3 gain:(double)arg4 gainHighFrequency:(double)arg5 gainLowFrequency:(double)arg6 attackTime:(double)arg7 releaseTime:(double)arg8 attackCurve:(long long)arg9 releaseCurve:(long long)arg10;
- (id)initWithEngine:(id)arg1 sourceGroups:(id)arg2 targetGroups:(id)arg3 gain:(double)arg4 lowFrequencyGain:(double)arg5 highFrequencyGain:(double)arg6 attackTime:(double)arg7 releaseTime:(double)arg8 attackCurve:(long long)arg9 releaseCurve:(long long)arg10;
- (bool)isActive;
- (long long)releaseCurve;
- (double)releaseTime;
- (id)sourceGroups;
- (id)targetGroups;
- (id)uid;

@end
