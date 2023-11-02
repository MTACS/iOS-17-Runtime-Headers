
@interface HDFitnessMachineStatus : HDHealthServiceCharacteristic {
    unsigned long long  _machineState;
}

@property (nonatomic) unsigned long long machineState;

+ (id)_buildWithBinaryValue:(id)arg1 error:(id*)arg2;
+ (id)unitTest_fakeStatusUpdateForState:(unsigned long long)arg1;
+ (id)uuid;

- (id)description;
- (unsigned long long)machineState;
- (void)setMachineState:(unsigned long long)arg1;

@end
