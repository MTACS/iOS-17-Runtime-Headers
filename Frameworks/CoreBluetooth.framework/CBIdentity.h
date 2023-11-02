
@interface CBIdentity : NSObject <CUXPCCodable> {
    NSString * _accountID;
    NSUUID * _bluetoothIdentifier;
    NSString * _contactID;
    NSString * _identifier;
    NSString * _idsDeviceID;
    NSData * _irkData;
    NSString * _model;
    NSString * _name;
    int  _type;
}

@property (nonatomic, copy) NSString *accountID;
@property (nonatomic, copy) NSUUID *bluetoothIdentifier;
@property (nonatomic, copy) NSString *contactID;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *idsDeviceID;
@property (nonatomic, copy) NSData *irkData;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (id)accountID;
- (id)bluetoothIdentifier;
- (id)contactID;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (void)encodeWithXPCObject:(id)arg1;
- (id)identifier;
- (id)idsDeviceID;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;
- (id)irkData;
- (bool)isEqual:(id)arg1;
- (id)model;
- (id)name;
- (void)setAccountID:(id)arg1;
- (void)setBluetoothIdentifier:(id)arg1;
- (void)setContactID:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIdsDeviceID:(id)arg1;
- (void)setIrkData:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;

@end
