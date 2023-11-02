
@interface RBAssertionAcquisitionContext : NSObject {
    unsigned long long  _acquisitionPolicy;
    bool  _allowAbstractTarget;
    <RBDaemonContextProviding> * _daemonContext;
    RBSAssertionDescriptor * _descriptor;
    id  _holdToken;
    RBProcess * _process;
    bool  _unitTesting;
}

@property (nonatomic) unsigned long long acquisitionPolicy;
@property (nonatomic) bool allowAbstractTarget;
@property (nonatomic, readonly) <RBDaemonContextProviding> *daemonContext;
@property (nonatomic, readonly) RBSAssertionDescriptor *descriptor;
@property (nonatomic, retain) id holdToken;
@property (nonatomic, readonly) RBProcess *process;
@property (nonatomic) bool unitTesting;

+ (id)contextForProcess:(id)arg1 withDescriptor:(id)arg2 daemonContext:(id)arg3;

- (void).cxx_destruct;
- (unsigned long long)acquisitionPolicy;
- (bool)allowAbstractTarget;
- (id)daemonContext;
- (id)descriptor;
- (id)holdToken;
- (id)process;
- (void)setAcquisitionPolicy:(unsigned long long)arg1;
- (void)setAllowAbstractTarget:(bool)arg1;
- (void)setHoldToken:(id)arg1;
- (void)setUnitTesting:(bool)arg1;
- (bool)unitTesting;

@end
