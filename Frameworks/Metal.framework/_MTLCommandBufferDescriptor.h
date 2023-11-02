
@interface _MTLCommandBufferDescriptor : MTLCommandBufferDescriptor {
    bool  _captureProgramAddressTable;
    bool  _cloneIntersectionFunctionTablesPerDispatch;
    <MTLDeadlineProfile> * _deadlineProfile;
    bool  _disableFineGrainedComputePreemption;
    unsigned long long  _errorOptions;
    bool  _retainedReferences;
}

@property (nonatomic) bool captureProgramAddressTable;
@property (nonatomic) bool cloneIntersectionFunctionTablesPerDispatch;
@property (nonatomic) <MTLDeadlineProfile> *deadlineProfile;
@property (nonatomic) bool disableFineGrainedComputePreemption;

- (bool)captureProgramAddressTable;
- (bool)cloneIntersectionFunctionTablesPerDispatch;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deadlineProfile;
- (bool)disableFineGrainedComputePreemption;
- (unsigned long long)errorOptions;
- (id)init;
- (bool)retainedReferences;
- (void)setCaptureProgramAddressTable:(bool)arg1;
- (void)setCloneIntersectionFunctionTablesPerDispatch:(bool)arg1;
- (void)setDeadlineProfile:(id)arg1;
- (void)setDisableFineGrainedComputePreemption:(bool)arg1;
- (void)setErrorOptions:(unsigned long long)arg1;
- (void)setRetainedReferences:(bool)arg1;

@end
