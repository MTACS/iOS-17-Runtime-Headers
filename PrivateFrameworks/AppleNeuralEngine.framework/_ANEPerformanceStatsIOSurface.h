
@interface _ANEPerformanceStatsIOSurface : NSObject {
    long long  _statType;
    _ANEIOSurfaceObject * _stats;
}

@property (nonatomic, readonly) long long statType;
@property (nonatomic, readonly) _ANEIOSurfaceObject *stats;

+ (id)new;
+ (id)objectWithIOSurface:(id)arg1 statType:(long long)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithIOSurface:(id)arg1 statType:(long long)arg2;
- (long long)statType;
- (id)stats;

@end
