
@interface GCGenericDeviceRumbleModelBuilder : NSObject {
    NSArray * _actuators;
    float  _dispatchFrequency;
    NSArray * _nodes;
    NSArray * _outputs;
}

@property (nonatomic, copy) NSArray *actuators;
@property (nonatomic) float dispatchFrequency;
@property (nonatomic, copy) NSArray *nodes;
@property (nonatomic, copy) NSArray *outputs;

+ (Class)modelClass;

- (void).cxx_destruct;
- (id)actuators;
- (id)build;
- (float)dispatchFrequency;
- (unsigned long long)hash;
- (id)init;
- (void)initializeWithModel:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)nodes;
- (id)outputs;
- (void)reset;
- (void)setActuators:(id)arg1;
- (void)setDispatchFrequency:(float)arg1;
- (void)setNodes:(id)arg1;
- (void)setOutputs:(id)arg1;

@end
