
@interface AVScrubbingGestureConfiguration : NSObject {
    bool  _linearSeeking;
    AVScrubbingGesturePlatformConfiguration * _platformConfiguration;
    float  _syntheticFriction;
    bool  _usesNaturalDirection;
}

@property (nonatomic, readonly) bool linearSeeking;
@property (nonatomic, readonly) AVScrubbingGesturePlatformConfiguration *platformConfiguration;
@property (nonatomic, readonly) float syntheticFriction;
@property (nonatomic, readonly) bool usesNaturalDirection;

+ (id)configurationWithSyntheticFriction:(float)arg1 usesNaturalDirection:(bool)arg2 platformConfiguration:(id)arg3;
+ (id)defaultConfiguration;

- (void).cxx_destruct;
- (bool)linearSeeking;
- (id)platformConfiguration;
- (float)syntheticFriction;
- (bool)usesNaturalDirection;

@end
