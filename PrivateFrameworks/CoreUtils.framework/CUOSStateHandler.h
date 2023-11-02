
@interface CUOSStateHandler : NSObject {
    id /* block */  _handler;
    unsigned long long  _stateHandle;
    NSString * _title;
}

@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic) unsigned long long stateHandle;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (struct os_state_data_s { unsigned int x1; union { unsigned int x_2_1_1 : 32; unsigned int x_2_1_2; } x2; struct os_state_data_decoder_s { BOOL x_3_1_1[64]; BOOL x_3_1_2[64]; } x3; BOOL x4[64]; unsigned char x5[0]; }*)_generateState;
- (void)dealloc;
- (id /* block */)handler;
- (id)initWithTitle:(id)arg1 dispatchQueue:(id)arg2 handler:(id /* block */)arg3;
- (void)remove;
- (void)setHandler:(id /* block */)arg1;
- (void)setStateHandle:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (unsigned long long)stateHandle;
- (id)title;

@end
