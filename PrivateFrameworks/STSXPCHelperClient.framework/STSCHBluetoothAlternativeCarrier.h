
@interface STSCHBluetoothAlternativeCarrier : STSCHAlternativeCarrier {
    NSData * _advertiseUUID;
    NSData * _humanReadableAdvertiseUUID;
    NSData * _leAddr;
    unsigned long long  _leRole;
}

@property (nonatomic, retain) NSData *advertiseUUID;
@property (nonatomic, retain) NSData *humanReadableAdvertiseUUID;
@property (nonatomic, readonly) NSData *humanReadableLEAddress;
@property (nonatomic, retain) NSData *leAddr;
@property (nonatomic) unsigned long long leRole;

+ (id)connectionHandoverAlternativeCarrierWithBundle:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_createCarrierConfigurationRecord;
- (id)advertiseUUID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)humanReadableAdvertiseUUID;
- (id)humanReadableLEAddress;
- (id)initWithAddress:(id)arg1 advertiseUUID:(id)arg2 role:(unsigned long long)arg3 powerState:(unsigned long long)arg4 auxiliaryRecords:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithNdefRecordBundle:(id)arg1;
- (id)leAddr;
- (unsigned long long)leRole;
- (unsigned long long)roleFromSpec:(unsigned char)arg1;
- (id)roleString;
- (void)setAdvertiseUUID:(id)arg1;
- (void)setHumanReadableAdvertiseUUID:(id)arg1;
- (void)setLeAddr:(id)arg1;
- (void)setLeRole:(unsigned long long)arg1;
- (unsigned char)specRole;

@end
