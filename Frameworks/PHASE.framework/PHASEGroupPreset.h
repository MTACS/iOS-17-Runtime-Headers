
@interface PHASEGroupPreset : NSObject {
    PHASEEngine * _engine;
    NSDictionary * _settings;
    double  _timeToReset;
    double  _timeToTarget;
}

@property (nonatomic, readonly) NSDictionary *settings;
@property (nonatomic, readonly) double timeToReset;
@property (nonatomic, readonly) double timeToTarget;

+ (id)new;

- (void).cxx_destruct;
- (void)activate;
- (void)activateWithTimeToTargetOverride:(double)arg1;
- (void)deactivate;
- (void)deactivateWithTimeToResetOverride:(double)arg1;
- (id)init;
- (id)initWithEngine:(id)arg1 settings:(id)arg2 timeToTarget:(double)arg3 timeToReset:(double)arg4;
- (id)settings;
- (double)timeToReset;
- (double)timeToTarget;

@end
