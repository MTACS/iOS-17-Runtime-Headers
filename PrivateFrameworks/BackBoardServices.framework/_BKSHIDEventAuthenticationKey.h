
@interface _BKSHIDEventAuthenticationKey : NSObject {
    struct { 
        unsigned int ctx[96]; 
    }  _hmacContext;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _hmacInitialized;
    NSData * _keyData;
}

- (void).cxx_destruct;

@end
