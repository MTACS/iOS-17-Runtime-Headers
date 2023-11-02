
@interface WBSDiagnosticStateCollector : NSObject {
    NSString * _logLabel;
    id /* block */  _payloadProvider;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _stateHandler;
}

@property (nonatomic, copy) NSString *logLabel;
@property (getter=isRegisteredWithSysdiagnose, nonatomic, readonly) bool registeredWithSysdiagnose;

+ (id)registeredStateCollectorWithLogLabel:(id)arg1 payloadProvider:(id /* block */)arg2;

- (void).cxx_destruct;
- (struct os_state_data_s { unsigned int x1; union { unsigned int x_2_1_1 : 32; unsigned int x_2_1_2; } x2; struct os_state_data_decoder_s { BOOL x_3_1_1[64]; BOOL x_3_1_2[64]; } x3; BOOL x4[64]; unsigned char x5[0]; }*)_createOSStateDataWithHints:(struct os_state_hints_s { unsigned int x1; char *x2; unsigned int x3; unsigned int x4; }*)arg1;
- (void)dealloc;
- (id)initWithLogLabel:(id)arg1 payloadProvider:(id /* block */)arg2;
- (id)initWithLogLabel:(id)arg1 queue:(id)arg2 payloadProvider:(id /* block */)arg3;
- (bool)isRegisteredWithSysdiagnose;
- (id)logLabel;
- (void)registerWithSysdiagnose;
- (void)setLogLabel:(id)arg1;
- (struct os_state_data_s { unsigned int x1; union { unsigned int x_2_1_1 : 32; unsigned int x_2_1_2; } x2; struct os_state_data_decoder_s { BOOL x_3_1_1[64]; BOOL x_3_1_2[64]; } x3; BOOL x4[64]; unsigned char x5[0]; }*)test_createOSStateDataWithHints:(struct os_state_hints_s { unsigned int x1; char *x2; unsigned int x3; unsigned int x4; }*)arg1;
- (void)unregister;

@end
