
@interface RBAssertionBatchContext : NSObject {
    unsigned long long  _acquisitionPolicy;
    bool  _allowAbstractTarget;
    <RBDaemonContextProviding> * _daemonContext;
    NSArray * _descriptorsToAcquire;
    id  _holdToken;
    NSArray * _identifiersToInvalidate;
    RBProcess * _process;
    bool  _unitTesting;
}

@property (nonatomic) unsigned long long acquisitionPolicy;
@property (nonatomic) bool allowAbstractTarget;
@property (nonatomic, readonly) <RBDaemonContextProviding> *daemonContext;
@property (nonatomic, readonly, copy) NSArray *descriptorsToAcquire;
@property (nonatomic, retain) id holdToken;
@property (nonatomic, readonly, copy) NSArray *identifiersToInvalidate;
@property (nonatomic, readonly) RBProcess *process;
@property (nonatomic) bool unitTesting;

+ (id)contextForProcess:(id)arg1 acquisitionCompletionPolicy:(unsigned long long)arg2 withDescriptorsToAcquire:(id)arg3 identifiersToInvalidate:(id)arg4 daemonContext:(id)arg5;
+ (id)contextForProcess:(id)arg1 withDescriptorsToAcquire:(id)arg2 identifiersToInvalidate:(id)arg3 daemonContext:(id)arg4;

- (void).cxx_destruct;
- (id)_init;
- (id)acquisitionContextForDescriptor:(id)arg1;
- (unsigned long long)acquisitionPolicy;
- (bool)allowAbstractTarget;
- (id)daemonContext;
- (id)descriptorsToAcquire;
- (id)holdToken;
- (id)identifiersToInvalidate;
- (id)process;
- (void)setAcquisitionPolicy:(unsigned long long)arg1;
- (void)setAllowAbstractTarget:(bool)arg1;
- (void)setHoldToken:(id)arg1;
- (void)setUnitTesting:(bool)arg1;
- (bool)unitTesting;

@end
