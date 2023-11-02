
@interface SharedDefaults : NSObject {
    long long  _cachedMeasureUnits;
}

@property long long cachedMeasureUnits;

+ (long long)currentMeasureUnits;
+ (id)defaults;
+ (id)getDefaultValues;
+ (id)measureUnits;
+ (void)setupSpecifier:(id)arg1;

- (long long)cachedMeasureUnits;
- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setCachedMeasureUnits:(long long)arg1;

@end
