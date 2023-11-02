
@interface IOUSBHostCIPortStateMachine : NSObject {
    bool  _connected;
    IOUSBHostControllerInterface * _controllerInterface;
    int  _linkState;
    bool  _overcurrent;
    unsigned long long  _portNumber;
    int  _portState;
    unsigned int  _portStatus;
    bool  _powered;
    int  _speed;
}

@property (nonatomic) bool connected;
@property (nonatomic, retain) IOUSBHostControllerInterface *controllerInterface;
@property (nonatomic, readonly) int linkState;
@property (nonatomic) bool overcurrent;
@property (nonatomic) unsigned long long portNumber;
@property (nonatomic) int portState;
@property (nonatomic) unsigned int portStatus;
@property (nonatomic) bool powered;
@property (nonatomic, readonly) int speed;

- (void).cxx_destruct;
- (bool)connected;
- (id)controllerInterface;
- (id)description;
- (id)initWithInterface:(id)arg1 portNumber:(unsigned long long)arg2 error:(id*)arg3;
- (bool)inspectCommand:(const struct IOUSBHostCIMessage { unsigned int x1; unsigned int x2; unsigned long long x3; }*)arg1 error:(id*)arg2;
- (int)linkState;
- (bool)overcurrent;
- (unsigned long long)portNumber;
- (int)portState;
- (unsigned int)portStatus;
- (bool)powered;
- (bool)processCommand:(const struct IOUSBHostCIMessage { unsigned int x1; unsigned int x2; unsigned long long x3; }*)arg1 readonly:(bool)arg2 commandResult:(int)arg3 error:(id*)arg4;
- (bool)respondToCommand:(const struct IOUSBHostCIMessage { unsigned int x1; unsigned int x2; unsigned long long x3; }*)arg1 status:(int)arg2 error:(id*)arg3;
- (void)setConnected:(bool)arg1;
- (void)setControllerInterface:(id)arg1;
- (void)setOvercurrent:(bool)arg1;
- (void)setPortNumber:(unsigned long long)arg1;
- (void)setPortState:(int)arg1;
- (void)setPortStatus:(unsigned int)arg1;
- (void)setPowered:(bool)arg1;
- (int)speed;
- (bool)updateLinkState:(int)arg1 speed:(int)arg2 inhibitLinkStateChange:(bool)arg3 error:(id*)arg4;

@end
