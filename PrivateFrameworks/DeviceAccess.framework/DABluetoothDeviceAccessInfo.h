
@interface DABluetoothDeviceAccessInfo : NSObject <CUXPCCodable> {
    NSArray * _bluetoothServices;
    NSUUID * _identifier;
}

@property (nonatomic, copy) NSArray *bluetoothServices;
@property (nonatomic, copy) NSUUID *identifier;

- (void).cxx_destruct;
- (id)bluetoothServices;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (void)encodeWithXPCObject:(id)arg1;
- (id)identifier;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;
- (void)setBluetoothServices:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end
