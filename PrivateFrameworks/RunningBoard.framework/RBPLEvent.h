
@interface RBPLEvent : NSObject {
    int  _assertionCount;
    unsigned long long  _event;
    RBSProcessIdentity * _identity;
    int  _pid;
}

@property (nonatomic, readonly) int assertionCount;
@property (nonatomic, readonly) unsigned long long event;
@property (nonatomic, readonly) RBSProcessIdentity *identity;
@property (nonatomic, readonly) int pid;

- (void).cxx_destruct;
- (int)assertionCount;
- (unsigned long long)event;
- (id)identity;
- (id)initWithevent:(unsigned long long)arg1 identity:(id)arg2 assertionCount:(int)arg3 pid:(int)arg4;
- (int)pid;

@end
