
@interface PXRunNodeOperation : NSOperation {
    NSLock * __stateLock;
    PXRunNode * _runNode;
    unsigned long long  _state;
}

@property (nonatomic, readonly) NSLock *_stateLock;
@property (nonatomic, readonly) PXRunNode *runNode;
@property (readonly) unsigned long long state;

+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingIsReady;

- (void).cxx_destruct;
- (id)_stateLock;
- (bool)_transitionToState:(unsigned long long)arg1;
- (bool)cancelIfAble;
- (bool)completeIfAble;
- (id)init;
- (id)initWithRunNode:(id)arg1;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (bool)isReady;
- (id)runNode;
- (void)start;
- (unsigned long long)state;

@end
