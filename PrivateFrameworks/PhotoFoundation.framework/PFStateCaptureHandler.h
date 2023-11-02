
@interface PFStateCaptureHandler : NSObject {
    unsigned long long  _callCount;
    unsigned long long  _ignoreCount;
    NSString * _logPrefix;
    NSString * _name;
    <PFStateCaptureProvider> * _provider;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _stateHandle;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithProvider:(id)arg1 name:(id)arg2;
- (struct os_state_data_s { unsigned int x1; union { unsigned int x_2_1_1 : 32; unsigned int x_2_1_2; } x2; struct os_state_data_decoder_s { BOOL x_3_1_1[64]; BOOL x_3_1_2[64]; } x3; BOOL x4[64]; unsigned char x5[0]; }*)stateDataWithHints:(struct os_state_hints_s { unsigned int x1; char *x2; unsigned int x3; unsigned int x4; }*)arg1;

@end
