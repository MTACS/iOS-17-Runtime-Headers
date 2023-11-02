
@interface VUILaunchConfig : NSObject {
    double  _extendedCacheExpireDuration;
    bool  _useConfigCacheIgnoreExpiry;
}

@property (nonatomic) double extendedCacheExpireDuration;
@property (nonatomic) bool useConfigCacheIgnoreExpiry;

- (double)extendedCacheExpireDuration;
- (id)init;
- (void)setExtendedCacheExpireDuration:(double)arg1;
- (void)setUseConfigCacheIgnoreExpiry:(bool)arg1;
- (bool)useConfigCacheIgnoreExpiry;

@end
