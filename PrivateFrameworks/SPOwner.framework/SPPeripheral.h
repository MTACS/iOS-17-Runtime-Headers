
@interface SPPeripheral : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _allowedSessions;
    NSUUID * _beaconIdentifier;
    NSDictionary * _dictionaryRepresentation;
    NSUUID * _groupIdentifier;
    NSData * _lastConnectedLEMAC;
    NSDictionary * _longTermKeyMap;
    NSDictionary * _ltkIndexMap;
    bool  _managedByFindMy;
    NSString * _name;
    unsigned char  _partIdentifier;
    unsigned long long  _primaryIndex;
    NSString * _serialNumber;
    NSUUID * _userIdentifier;
}

@property (nonatomic, copy) NSArray *allowedSessions;
@property (nonatomic, copy) NSUUID *beaconIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly, copy) NSUUID *groupIdentifier;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly, copy) NSArray *keyAddressPairs;
@property (nonatomic, copy) NSData *lastConnectedLEMAC;
@property (nonatomic, copy) NSDictionary *longTermKeyMap;
@property (nonatomic, copy) NSDictionary *ltkIndexMap;
@property (nonatomic) bool managedByFindMy;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) unsigned char partIdentifier;
@property (nonatomic) unsigned long long primaryIndex;
@property (nonatomic, copy) NSString *serialNumber;
@property (nonatomic, copy) NSUUID *userIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allowedSessions;
- (id)beaconIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionForLEMAC:(id)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)groupIdentifier;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserIdentifier:(id)arg1 beaconIdentifier:(id)arg2 groupIdentifier:(id)arg3 name:(id)arg4 partIdentifier:(unsigned char)arg5 serialNumber:(id)arg6 managedByFindMy:(bool)arg7 primaryIndex:(unsigned long long)arg8 ltkIndexMap:(id)arg9 lastConnectedLEMAC:(id)arg10 allowedSessions:(id)arg11 keyAddressPairs:(id)arg12;
- (id)initWithUserIdentifier:(id)arg1 beaconIdentifier:(id)arg2 groupIdentifier:(id)arg3 name:(id)arg4 partIdentifier:(unsigned char)arg5 serialNumber:(id)arg6 managedByFindMy:(bool)arg7 primaryIndex:(unsigned long long)arg8 ltkIndexMap:(id)arg9 lastConnectedLEMAC:(id)arg10 allowedSessions:(id)arg11 longTermKeyMap:(id)arg12;
- (bool)isEqual:(id)arg1;
- (id)keyAddressPairs;
- (id)lastConnectedLEMAC;
- (id)longTermKeyMap;
- (id)ltkIndexMap;
- (bool)managedByFindMy;
- (id)name;
- (unsigned char)partIdentifier;
- (unsigned long long)primaryIndex;
- (id)serialNumber;
- (void)setAllowedSessions:(id)arg1;
- (void)setBeaconIdentifier:(id)arg1;
- (void)setLastConnectedLEMAC:(id)arg1;
- (void)setLongTermKeyMap:(id)arg1;
- (void)setLtkIndexMap:(id)arg1;
- (void)setManagedByFindMy:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setPartIdentifier:(unsigned char)arg1;
- (void)setPrimaryIndex:(unsigned long long)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setUserIdentifier:(id)arg1;
- (id)userIdentifier;

@end
