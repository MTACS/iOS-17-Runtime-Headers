
@interface MTLGPUDebugAccelerationStructureErrorLog : MTLGPUDebugGPULog {
    unsigned long long  _actualAccelerationStructureType;
    unsigned long long  _expectedAccelerationStructureType;
    NSString * _functionName;
}

@property (nonatomic) unsigned long long actualAccelerationStructureType;
@property (nonatomic) unsigned long long expectedAccelerationStructureType;
@property (nonatomic, retain) NSString *functionName;

- (unsigned long long)actualAccelerationStructureType;
- (id)description;
- (unsigned long long)expectedAccelerationStructureType;
- (id)functionName;
- (void)setActualAccelerationStructureType:(unsigned long long)arg1;
- (void)setExpectedAccelerationStructureType:(unsigned long long)arg1;
- (void)setFunctionName:(id)arg1;

@end
