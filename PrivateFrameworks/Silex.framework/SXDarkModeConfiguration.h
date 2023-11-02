
@interface SXDarkModeConfiguration : NSObject <SXDarkModeConfiguration> {
    bool  _autoDarkModeEnabled;
    NSDictionary * _colors;
    unsigned long long  _inversionBehavior;
    double  _saturationThreshold;
}

@property (getter=isAutoDarkModeEnabled, nonatomic, readonly) bool autoDarkModeEnabled;
@property (nonatomic, readonly, copy) NSDictionary *colors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long inversionBehavior;
@property (nonatomic, readonly) double saturationThreshold;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)colors;
- (id)initWithAutoDarkModeEnabled:(bool)arg1 inversionBehavior:(unsigned long long)arg2 saturationThreshold:(double)arg3 colors:(id)arg4;
- (unsigned long long)inversionBehavior;
- (bool)isAutoDarkModeEnabled;
- (double)saturationThreshold;

@end
