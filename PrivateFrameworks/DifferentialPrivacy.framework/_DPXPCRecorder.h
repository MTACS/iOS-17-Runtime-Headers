
@interface _DPXPCRecorder : _DPDataRecorder {
    _DPDaemonConnection * _connection;
}

@property (nonatomic, readonly) _DPDaemonConnection *connection;

- (void).cxx_destruct;
- (id)connection;
- (void)handleReturn:(bool)arg1 forSelector:(id)arg2 key:(id)arg3 values:(id)arg4 error:(id)arg5;
- (id)init;
- (id)initWithKey:(id)arg1;
- (void)recordBitValues:(id)arg1;
- (void)recordBitValues:(id)arg1 metadata:(id)arg2;
- (void)recordBitVectors:(id)arg1;
- (void)recordBitVectors:(id)arg1 metadata:(id)arg2;
- (void)recordFloatVectors:(id)arg1;
- (void)recordFloatVectors:(id)arg1 metadata:(id)arg2;
- (void)recordNumbers:(id)arg1;
- (void)recordNumbers:(id)arg1 metadata:(id)arg2;
- (void)recordNumbersVectors:(id)arg1;
- (void)recordNumbersVectors:(id)arg1 metadata:(id)arg2;
- (void)recordStrings:(id)arg1;
- (void)recordStrings:(id)arg1 metadata:(id)arg2;
- (void)recordWords:(id)arg1;

@end
