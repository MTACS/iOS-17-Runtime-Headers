
@interface VKStateCaptureHandler : NSObject {
    struct function<NSString *()>="__f_"{__value_func<NSString *()>="__buf_"{type="__lx"[24C] {}  _callback;
    unsigned long long  _handle;
    NSString * _name;
}

+ (struct os_state_data_s { unsigned int x1; union { unsigned int x_2_1_1 : 32; unsigned int x_2_1_2; } x2; struct os_state_data_decoder_s { BOOL x_3_1_1[64]; BOOL x_3_1_2[64]; } x3; BOOL x4[64]; unsigned char x5[0]; }*)stateDataForDictionary:(id)arg1 title:(id)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_registerHandlerforStateCapture:(id)arg1;
- (struct os_state_data_s { unsigned int x1; union { unsigned int x_2_1_1 : 32; unsigned int x_2_1_2; } x2; struct os_state_data_decoder_s { BOOL x_3_1_1[64]; BOOL x_3_1_2[64]; } x3; BOOL x4[64]; unsigned char x5[0]; }*)_stateCapture;
- (void)_unregisterHandlerforStateCapture;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 withName:(id)arg2 withCallback:(struct function<NSString *()>={__value_func<NSString *()>={type=[24C] {})arg3;

@end
