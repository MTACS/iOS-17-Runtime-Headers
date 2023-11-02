
@interface CUBluetoothFindDeviceRequest : NSObject {
    struct { 
        unsigned char bytes[6]; 
    }  _address;
    id /* block */  _completion;
}

@property (nonatomic) struct { unsigned char x1[6]; } address;
@property (nonatomic, copy) id /* block */ completion;

- (void).cxx_destruct;
- (struct { unsigned char x1[6]; })address;
- (id /* block */)completion;
- (void)setAddress:(struct { unsigned char x1[6]; })arg1;
- (void)setCompletion:(id /* block */)arg1;

@end
