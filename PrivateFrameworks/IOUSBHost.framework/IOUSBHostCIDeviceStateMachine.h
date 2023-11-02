
@interface IOUSBHostCIDeviceStateMachine : NSObject {
    unsigned long long  _completeRoute;
    IOUSBHostControllerInterface * _controllerInterface;
    unsigned long long  _deviceAddress;
    int  _deviceState;
}

@property (nonatomic) unsigned long long completeRoute;
@property (nonatomic, retain) IOUSBHostControllerInterface *controllerInterface;
@property (nonatomic) unsigned long long deviceAddress;
@property (nonatomic) int deviceState;

- (void).cxx_destruct;
- (unsigned long long)completeRoute;
- (id)controllerInterface;
- (id)description;
- (unsigned long long)deviceAddress;
- (int)deviceState;
- (id)initWithInterface:(id)arg1 command:(const struct IOUSBHostCIMessage { unsigned int x1; unsigned int x2; unsigned long long x3; }*)arg2 error:(id*)arg3;
- (bool)inspectCommand:(const struct IOUSBHostCIMessage { unsigned int x1; unsigned int x2; unsigned long long x3; }*)arg1 error:(id*)arg2;
- (bool)processCommand:(const struct IOUSBHostCIMessage { unsigned int x1; unsigned int x2; unsigned long long x3; }*)arg1 readonly:(bool)arg2 error:(id*)arg3;
- (bool)respondToCommand:(const struct IOUSBHostCIMessage { unsigned int x1; unsigned int x2; unsigned long long x3; }*)arg1 status:(int)arg2 deviceAddress:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToCommand:(const struct IOUSBHostCIMessage { unsigned int x1; unsigned int x2; unsigned long long x3; }*)arg1 status:(int)arg2 error:(id*)arg3;
- (void)setCompleteRoute:(unsigned long long)arg1;
- (void)setControllerInterface:(id)arg1;
- (void)setDeviceAddress:(unsigned long long)arg1;
- (void)setDeviceState:(int)arg1;

@end
