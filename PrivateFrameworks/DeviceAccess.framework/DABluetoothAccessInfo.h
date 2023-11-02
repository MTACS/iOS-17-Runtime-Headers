
@interface DABluetoothAccessInfo : NSObject <CUXPCCodable> {
    NSArray * _bluetoothDevices;
    NSArray * _bluetoothScanCompanyIdentifiers;
    NSArray * _bluetoothScanServices;
}

@property (nonatomic, copy) NSArray *bluetoothDevices;
@property (nonatomic, readonly, copy) NSArray *bluetoothScanCompanyIdentifiers;
@property (nonatomic, copy) NSArray *bluetoothScanServices;

- (void).cxx_destruct;
- (id)bluetoothDevices;
- (id)bluetoothScanCompanyIdentifiers;
- (id)bluetoothScanServices;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (void)encodeWithXPCObject:(id)arg1;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;
- (void)setBluetoothDevices:(id)arg1;
- (void)setBluetoothScanServices:(id)arg1;

@end
