
@interface NRMutableDeviceCollection : NRMutableStateBase <NRMutableStateParentDelegate, NSFastEnumeration> {
    NSMutableDictionary * _childMap;
    NSMutableDictionary * _deviceCollection;
    NRPBMutableDeviceCollection * _protobuf;
}

@property (nonatomic, readonly) NRMutableDevice *activeDevice;
@property (nonatomic, retain) NSUUID *activeDeviceID;
@property (getter=allAltAccount, nonatomic, readonly) bool isAllAltAccount;
@property (getter=paired, nonatomic, readonly) bool isPaired;
@property (nonatomic, retain) NRPBMutableDeviceCollection *protobuf;

+ (id)diffFrom:(id)arg1 to:(id)arg2;
+ (void)parseDiff:(id)arg1 forPropertyChange:(id)arg2 withBlock:(id /* block */)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_createIndex;
- (id)_diffsToChangeActiveDeviceToDeviceID:(id)arg1;
- (id)activeDevice;
- (id)activeDeviceID;
- (bool)allAltAccount;
- (id)allPairingIDs;
- (id)applyDiff:(id)arg1 upOnly:(bool)arg2 notifyParent:(bool)arg3 unconditional:(bool)arg4;
- (void)child:(id)arg1 didApplyDiff:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)description;
- (id)deviceForPairingID:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (void)invalidate;
- (bool)isEqual:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (bool)paired;
- (id)protobuf;
- (void)removeDeviceForPairingID:(id)arg1;
- (void)setActiveDeviceID:(id)arg1;
- (void)setDevice:(id)arg1 forPairingID:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setProtobuf:(id)arg1;

@end
