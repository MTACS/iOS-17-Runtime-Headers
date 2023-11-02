
@interface IOUSBHostCIEndpointStateMachine : NSObject {
    IOUSBHostControllerInterface * _controllerInterface;
    const struct IOUSBHostCIMessage { unsigned int x1; unsigned int x2; unsigned long long x3; } * _currentTransferMessage;
    unsigned long long  _deviceAddress;
    unsigned long long  _endpointAddress;
    int  _endpointState;
    int  _endpointType;
}

@property (nonatomic, retain) IOUSBHostControllerInterface *controllerInterface;
@property (nonatomic) const struct IOUSBHostCIMessage { unsigned int x1; unsigned int x2; unsigned long long x3; }*currentTransferMessage;
@property (nonatomic) unsigned long long deviceAddress;
@property (nonatomic) unsigned long long endpointAddress;
@property (nonatomic) int endpointState;
@property (nonatomic) int endpointType;

- (void).cxx_destruct;
- (id)controllerInterface;
- (const struct IOUSBHostCIMessage { unsigned int x1; unsigned int x2; unsigned long long x3; }*)currentTransferMessage;
- (id)description;
- (unsigned long long)deviceAddress;
- (unsigned long long)endpointAddress;
- (int)endpointState;
- (int)endpointType;
- (bool)enqueueTransferCompletionForMessage:(const struct IOUSBHostCIMessage { unsigned int x1; unsigned int x2; unsigned long long x3; }*)arg1 status:(int)arg2 transferLength:(unsigned long long)arg3 error:(id*)arg4;
- (id)initWithInterface:(id)arg1 command:(const struct IOUSBHostCIMessage { unsigned int x1; unsigned int x2; unsigned long long x3; }*)arg2 error:(id*)arg3;
- (bool)inspectCommand:(const struct IOUSBHostCIMessage { unsigned int x1; unsigned int x2; unsigned long long x3; }*)arg1 error:(id*)arg2;
- (bool)processCommand:(const struct IOUSBHostCIMessage { unsigned int x1; unsigned int x2; unsigned long long x3; }*)arg1 readonly:(bool)arg2 error:(id*)arg3;
- (bool)processDoorbell:(unsigned int)arg1 error:(id*)arg2;
- (bool)respondToCommand:(const struct IOUSBHostCIMessage { unsigned int x1; unsigned int x2; unsigned long long x3; }*)arg1 status:(int)arg2 error:(id*)arg3;
- (void)setControllerInterface:(id)arg1;
- (void)setCurrentTransferMessage:(const struct IOUSBHostCIMessage { unsigned int x1; unsigned int x2; unsigned long long x3; }*)arg1;
- (void)setDeviceAddress:(unsigned long long)arg1;
- (void)setEndpointAddress:(unsigned long long)arg1;
- (void)setEndpointState:(int)arg1;
- (void)setEndpointType:(int)arg1;

@end
