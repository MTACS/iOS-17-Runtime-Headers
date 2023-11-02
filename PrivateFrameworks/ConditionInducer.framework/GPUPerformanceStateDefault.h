
@interface GPUPerformanceStateDefault : COCondition {
    unsigned int  _acceleratorService;
    ApplePMPPerfStateControl * _applePMPPerfStateControl;
    unsigned int  _connection;
    <AGXConsistentStateDevice> * _consistentDevice;
    unsigned int  _desiredGPUPerformanceState;
    unsigned int  _performanceLevel;
}

@property (nonatomic) unsigned int desiredGPUPerformanceState;

+ (id)consistentStateDevice;
+ (id)description;
+ (unsigned int)ioAccelerator;
+ (id)perfLevelEnumToGPUStateStringKey:(unsigned int)arg1;
+ (id)profileFriendlyName;
+ (bool)supportsConsistentStateDevice:(id)arg1;

- (void).cxx_destruct;
- (bool)_acquireLock;
- (void)_cleanup;
- (void)_dumpCurrentState:(id)arg1;
- (bool)_setConsistentPerformanceLevel;
- (bool)active;
- (unsigned int)desiredGPUPerformanceState;
- (id)identifierName;
- (id)initWithGPUPerformanceState:(unsigned int)arg1;
- (bool)isDestructive;
- (bool)isInternalOnly;
- (void)setDesiredGPUPerformanceState:(unsigned int)arg1;
- (bool)setUp;
- (void)tearDown;
- (id)userFriendlyName;

@end
