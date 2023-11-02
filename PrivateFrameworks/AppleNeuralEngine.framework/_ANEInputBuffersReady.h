
@interface _ANEInputBuffersReady : NSObject {
    unsigned long long  _executionDelay;
    NSArray * _inputBufferInfoIndex;
    NSArray * _inputFreeValue;
    unsigned int  _procedureIndex;
}

@property (nonatomic, readonly) unsigned long long executionDelay;
@property (nonatomic, readonly) NSArray *inputBufferInfoIndex;
@property (nonatomic, readonly) NSArray *inputFreeValue;
@property (nonatomic, readonly) unsigned int procedureIndex;

+ (id)inputBuffersWithProcedureIndex:(unsigned int)arg1 inputBufferInfoIndex:(id)arg2 inputFreeValue:(id)arg3 executionDelay:(unsigned long long)arg4;
+ (id)new;

- (void).cxx_destruct;
- (unsigned long long)executionDelay;
- (id)init;
- (id)initInputsProcedureIndex:(unsigned int)arg1 inputBufferInfoIndex:(id)arg2 inputFreeValue:(id)arg3 executionDelay:(unsigned long long)arg4;
- (id)inputBufferInfoIndex;
- (id)inputFreeValue;
- (unsigned int)procedureIndex;
- (bool)validate;

@end
