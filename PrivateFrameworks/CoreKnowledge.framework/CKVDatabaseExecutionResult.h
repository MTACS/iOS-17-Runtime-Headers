
@interface CKVDatabaseExecutionResult : NSObject {
    unsigned long long  _beginMachTime;
    CKVDatabaseCommand * _command;
    unsigned long long  _endMachTime;
    NSError * _error;
    NSArray * _rowValueTuples;
}

@property (nonatomic, readonly) unsigned long long beginMachTime;
@property (nonatomic, readonly) CKVDatabaseCommand *command;
@property (nonatomic, readonly) unsigned long long endMachTime;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSArray *rowValueTuples;

- (void).cxx_destruct;
- (unsigned long long)beginMachTime;
- (id)command;
- (id)description;
- (unsigned long long)endMachTime;
- (id)error;
- (id)init;
- (id)initWithCommand:(id)arg1 beginMachTime:(unsigned long long)arg2 endMachTime:(unsigned long long)arg3 rowValueTuples:(id)arg4 error:(id)arg5;
- (id)rowValueTuples;

@end
