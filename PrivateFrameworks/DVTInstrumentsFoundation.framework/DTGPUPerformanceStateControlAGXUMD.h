
@interface DTGPUPerformanceStateControlAGXUMD : NSObject <DTGPUPerformanceStateControl> {
    unsigned long long  _acceleratorId;
    <AGXConsistentStateDevice> * _agxDevice;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)currentState;
- (id)disable;
- (bool)enable:(unsigned long long)arg1;
- (id)initWithDevice:(id)arg1;

@end
