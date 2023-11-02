
@interface MCMXPCMessageOperationDelete : MCMXPCMessageWithConcreteContainersArrayBase <MCMParametersOperationDelete> {
    bool  _waitForDiskSpaceReclaim;
}

@property (nonatomic, readonly) bool waitForDiskSpaceReclaim;

- (id)initWithXPCObject:(id)arg1 context:(id)arg2 error:(unsigned long long*)arg3;
- (bool)waitForDiskSpaceReclaim;

@end
