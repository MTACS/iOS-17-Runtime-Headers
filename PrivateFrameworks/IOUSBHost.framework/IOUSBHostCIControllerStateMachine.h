
@interface IOUSBHostCIControllerStateMachine : NSObject {
    IOUSBHostControllerInterface * _controllerInterface;
    int  _controllerState;
    unsigned long long  _lastFrameNumber;
    unsigned long long  _lastFrameTimestamp;
}

@property (nonatomic, retain) IOUSBHostControllerInterface *controllerInterface;
@property (nonatomic) int controllerState;
@property (nonatomic) unsigned long long lastFrameNumber;
@property (nonatomic) unsigned long long lastFrameTimestamp;

- (void).cxx_destruct;
- (id)controllerInterface;
- (int)controllerState;
- (id)description;
- (bool)enqueueUpdatedFrame:(unsigned long long)arg1 timestamp:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithInterface:(id)arg1 error:(id*)arg2;
- (bool)inspectCommand:(const struct IOUSBHostCIMessage { unsigned int x1; unsigned int x2; unsigned long long x3; }*)arg1 error:(id*)arg2;
- (unsigned long long)lastFrameNumber;
- (unsigned long long)lastFrameTimestamp;
- (bool)processCommand:(const struct IOUSBHostCIMessage { unsigned int x1; unsigned int x2; unsigned long long x3; }*)arg1 readonly:(bool)arg2 error:(id*)arg3;
- (bool)respondToCommand:(const struct IOUSBHostCIMessage { unsigned int x1; unsigned int x2; unsigned long long x3; }*)arg1 status:(int)arg2 error:(id*)arg3;
- (bool)respondToCommand:(const struct IOUSBHostCIMessage { unsigned int x1; unsigned int x2; unsigned long long x3; }*)arg1 status:(int)arg2 frame:(unsigned long long)arg3 timestamp:(unsigned long long)arg4 error:(id*)arg5;
- (void)setControllerInterface:(id)arg1;
- (void)setControllerState:(int)arg1;
- (void)setLastFrameNumber:(unsigned long long)arg1;
- (void)setLastFrameTimestamp:(unsigned long long)arg1;

@end
