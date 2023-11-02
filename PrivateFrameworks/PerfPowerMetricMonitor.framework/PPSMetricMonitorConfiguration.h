
@interface PPSMetricMonitorConfiguration : NSObject <NSSecureCoding> {
    bool  _emitSignposts;
    long long  _mode;
    bool  _updateDelegate;
    double  _updateInterval;
}

@property (nonatomic) bool emitSignposts;
@property (nonatomic) long long mode;
@property (nonatomic) bool updateDelegate;
@property (nonatomic) double updateInterval;

+ (id)defaultConfiguration;
+ (bool)supportsSecureCoding;

- (id)description;
- (bool)emitSignposts;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMode:(long long)arg1 updateInterval:(double)arg2 updateDelegate:(bool)arg3;
- (long long)mode;
- (void)setEmitSignposts:(bool)arg1;
- (void)setMode:(long long)arg1;
- (void)setUpdateDelegate:(bool)arg1;
- (void)setUpdateInterval:(double)arg1;
- (bool)updateDelegate;
- (double)updateInterval;

@end
