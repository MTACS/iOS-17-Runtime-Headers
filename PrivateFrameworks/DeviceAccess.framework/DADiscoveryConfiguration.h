
@interface DADiscoveryConfiguration : NSObject <CUXPCCodable, NSCopying> {
    NSArray * _bluetoothCompanyIdentifiers;
    NSArray * _bluetoothServices;
    NSArray * _bonjourServiceTypes;
    NSString * _bundleID;
    bool  _presenceOnly;
}

@property (nonatomic, copy) NSArray *bluetoothCompanyIdentifiers;
@property (nonatomic, copy) NSArray *bluetoothServices;
@property (nonatomic, copy) NSArray *bonjourServiceTypes;
@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic) bool presenceOnly;

- (void).cxx_destruct;
- (id)bluetoothCompanyIdentifiers;
- (id)bluetoothServices;
- (id)bonjourServiceTypes;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithXPCObject:(id)arg1;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;
- (bool)presenceOnly;
- (void)setBluetoothCompanyIdentifiers:(id)arg1;
- (void)setBluetoothServices:(id)arg1;
- (void)setBonjourServiceTypes:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setPresenceOnly:(bool)arg1;

@end
