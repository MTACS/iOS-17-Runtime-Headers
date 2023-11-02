
@interface AVScrubbingGesturePlatformConfiguration : NSObject {
    float  _magnitude;
    float  _nonLinearity;
}

@property (nonatomic, readonly) float magnitude;
@property (nonatomic, readonly) float nonLinearity;

+ (id)configurationWithMagnitude:(float)arg1 nonLinearity:(float)arg2;
+ (id)defaultConfiguration;

- (float)magnitude;
- (float)nonLinearity;

@end
