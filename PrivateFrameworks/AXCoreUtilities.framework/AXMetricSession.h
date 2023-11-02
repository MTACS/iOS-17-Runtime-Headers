
@interface AXMetricSession : NSObject <AXMetricContainer, NSSecureCoding> {
    NSMutableArray * _childMetrics;
    NSArray * _enabledByEnvironmentVariables;
    bool  _measurementsEnabled;
    NSString * _name;
}

@property (nonatomic, retain) NSMutableArray *childMetrics;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *enabledByEnvironmentVariables;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool measurementsEnabled;
@property (nonatomic, retain) NSString *name;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)childMetrics;
- (id)enabledByEnvironmentVariables;
- (void)encodeWithCoder:(id)arg1;
- (id)generateReport;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 measurementsEnabled:(bool)arg2;
- (id)initWithName:(id)arg1 measurementsEnabled:(bool)arg2 orEnabledByEnvironmentVariables:(id)arg3;
- (void)measure:(id)arg1 execute:(id /* block */)arg2;
- (id)measure:(id)arg1 tryExecute:(id /* block */)arg2;
- (bool)measurementsEnabled;
- (id)name;
- (void)setChildMetrics:(id)arg1;
- (void)setEnabledByEnvironmentVariables:(id)arg1;
- (void)setMeasurementsEnabled:(bool)arg1;
- (void)setName:(id)arg1;
- (id)startMeasure:(id)arg1;

@end
