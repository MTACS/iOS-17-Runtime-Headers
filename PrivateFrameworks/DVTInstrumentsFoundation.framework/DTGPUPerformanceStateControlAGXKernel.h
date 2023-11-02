
@interface DTGPUPerformanceStateControlAGXKernel : NSObject <DTGPUPerformanceStateControl> {
    unsigned long long  _acceleratorId;
    unsigned int  _connection;
    bool  _holdingLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)close;
- (id)currentState;
- (void)dealloc;
- (id)disable;
- (bool)enable:(unsigned long long)arg1;
- (unsigned int)getIOAccelerator;
- (id)initWithDevice:(id)arg1;

@end
