
@interface HMFWoWLANInfo : HMFObject <NSSecureCoding> {
    NSArray * _additionalMACAddresses;
    NSData * _primaryMACAddress;
    bool  _supportsSleepConfig;
    unsigned char  _version;
    NSData * _wakeAddress;
    long long  _wakePacketType;
    NSData * _wakePattern;
    unsigned short  _wakePort;
    long long  _wakeType;
}

@property (nonatomic, readonly) NSArray *additionalMACAddresses;
@property (nonatomic, readonly) NSData *primaryMACAddress;
@property (nonatomic, readonly) bool supportsSleepConfig;
@property (nonatomic, readonly) unsigned char version;
@property (nonatomic, retain) NSData *wakeAddress;
@property (nonatomic, readonly) NSString *wakeAddressString;
@property (nonatomic, readonly) long long wakePacketType;
@property (nonatomic, retain) NSData *wakePattern;
@property (nonatomic, readonly) unsigned short wakePort;
@property (nonatomic, readonly) long long wakeType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalMACAddresses;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPrimaryIdentifier:(id)arg1 wifiIdentifiers:(id)arg2;
- (id)initWithWakeVersion:(unsigned char)arg1 wakePort:(unsigned short)arg2 wakeAddress:(id)arg3 wakeType:(long long)arg4 wakePacketType:(long long)arg5 wakePattern:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)primaryMACAddress;
- (void)setWakeAddress:(id)arg1;
- (void)setWakePattern:(id)arg1;
- (bool)supportsSleepConfig;
- (unsigned char)version;
- (id)wakeAddress;
- (id)wakeAddressString;
- (long long)wakePacketType;
- (id)wakePattern;
- (unsigned short)wakePort;
- (long long)wakeType;

@end
