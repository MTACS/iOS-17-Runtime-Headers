
@interface TPMachineID : NSObject {
    NSString * _machineID;
    NSDate * _modified;
    unsigned long long  _status;
}

@property (readonly) NSString *machineID;
@property (readonly) NSDate *modified;
@property (readonly) unsigned long long status;

- (void).cxx_destruct;
- (id)description;
- (id)initWithMachineID:(id)arg1 status:(unsigned long long)arg2 modified:(id)arg3;
- (id)machineID;
- (id)modified;
- (unsigned long long)status;

@end
