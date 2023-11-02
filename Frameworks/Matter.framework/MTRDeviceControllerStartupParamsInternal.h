
@interface MTRDeviceControllerStartupParamsInternal : MTRDeviceControllerStartupParams {
    bool  _advertiseOperational;
    struct Optional<unsigned char> { 
        bool mHasValue; 
        union Value { 
            unsigned char mData; 
        } mValue; 
    }  _fabricIndex;
    void * _fabricTable;
    struct OperationalKeystore { int (**x1)(); } * _keystore;
}

@property (nonatomic, readonly) bool advertiseOperational;
@property (nonatomic, readonly) struct Optional<unsigned char> { bool x1; union Value { unsigned char x_2_1_1; } x2; } fabricIndex;
@property (nonatomic, readonly) void*fabricTable;
@property (nonatomic, readonly) struct OperationalKeystore { int (**x1)(); }*keystore;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)advertiseOperational;
- (struct Optional<unsigned char> { bool x1; union Value { unsigned char x_2_1_1; } x2; })fabricIndex;
- (void*)fabricTable;
- (id)initForExistingFabric:(void*)arg1 fabricIndex:(unsigned char)arg2 keystore:(struct OperationalKeystore { int (**x1)(); }*)arg3 advertiseOperational:(bool)arg4 params:(id)arg5;
- (id)initForNewFabric:(void*)arg1 keystore:(struct OperationalKeystore { int (**x1)(); }*)arg2 advertiseOperational:(bool)arg3 params:(id)arg4;
- (id)initWithParams:(id)arg1;
- (bool)keypairsMatchCertificates;
- (struct OperationalKeystore { int (**x1)(); }*)keystore;

@end
