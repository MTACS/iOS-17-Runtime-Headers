
@interface DMFOSStateHandler : NSObject {
    id /* block */  _block;
    unsigned long long  _handle;
    NSString * _name;
    NSObject<OS_os_transaction> * _transaction;
}

@property (nonatomic, copy) id /* block */ block;
@property (nonatomic) unsigned long long handle;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSObject<OS_os_transaction> *transaction;

- (void).cxx_destruct;
- (struct os_state_data_s { unsigned int x1; union { unsigned int x_2_1_1 : 32; unsigned int x_2_1_2; } x2; struct os_state_data_decoder_s { BOOL x_3_1_1[64]; BOOL x_3_1_2[64]; } x3; BOOL x4[64]; unsigned char x5[0]; }*)_serializeState;
- (id /* block */)block;
- (void)dealloc;
- (unsigned long long)handle;
- (id)initWithQueue:(id)arg1 name:(id)arg2 stateHandlerBlock:(id /* block */)arg3;
- (id)name;
- (void)setBlock:(id /* block */)arg1;
- (void)setHandle:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setTransaction:(id)arg1;
- (id)transaction;

@end
