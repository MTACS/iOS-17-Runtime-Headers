
@interface MCMXPCMessageSetTestLock : MCMXPCMessageBase <MCMParametersSetTestLock> {
    bool  _enable;
    unsigned long long  _requestedLocks;
}

@property (nonatomic, readonly) bool enable;
@property (nonatomic, readonly) unsigned long long requestedLocks;

- (bool)enable;
- (id)initWithXPCObject:(id)arg1 context:(id)arg2 error:(unsigned long long*)arg3;
- (unsigned long long)requestedLocks;

@end
