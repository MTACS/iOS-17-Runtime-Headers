
@interface SADevice : NSObject <OSLogCoding, TAEventProtocol> {
    NSDate * _date;
    unsigned long long  _deviceType;
    NSUUID * _groupIdentifier;
    NSUUID * _identifier;
    bool  _isAppleAudioAccessory;
    NSString * _macAddress;
    NSString * _model;
    NSString * _name;
    bool  _notifyEnabled;
    long long  _partIdentifier;
    long long  _productId;
    NSString * _systemVersion;
    long long  _vendorId;
}

@property (nonatomic, readonly, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long deviceType;
@property (nonatomic, readonly, copy) NSUUID *groupIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly) bool isAppleAudioAccessory;
@property (nonatomic, retain) NSString *macAddress;
@property (nonatomic, readonly, copy) NSString *model;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) bool notifyEnabled;
@property (nonatomic, readonly) long long partIdentifier;
@property (nonatomic, readonly) long long productId;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *systemVersion;
@property (nonatomic, readonly) long long vendorId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (id)descriptionDictionary;
- (unsigned long long)deviceType;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3;
- (id)getDate;
- (id)groupIdentifier;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceUUID:(id)arg1 groupIdentifier:(id)arg2 macAddress:(id)arg3 name:(id)arg4 model:(id)arg5 systemVersion:(id)arg6 vendorId:(long long)arg7 productId:(long long)arg8 deviceType:(unsigned long long)arg9 notifyEnabled:(bool)arg10 isAppleAudioAccessory:(bool)arg11 date:(id)arg12;
- (id)initWithDeviceUUID:(id)arg1 groupIdentifier:(id)arg2 macAddress:(id)arg3 partIdentifier:(long long)arg4 name:(id)arg5 model:(id)arg6 systemVersion:(id)arg7 vendorId:(long long)arg8 productId:(long long)arg9 deviceType:(unsigned long long)arg10 notifyEnabled:(bool)arg11 isAppleAudioAccessory:(bool)arg12 date:(id)arg13;
- (id)initWithDeviceUUID:(id)arg1 name:(id)arg2 model:(id)arg3 systemVersion:(id)arg4 vendorId:(long long)arg5 productId:(long long)arg6 deviceType:(unsigned long long)arg7 notifyEnabled:(bool)arg8 isAppleAudioAccessory:(bool)arg9 date:(id)arg10;
- (bool)isAppleAudioAccessory;
- (bool)isEqual:(id)arg1;
- (bool)isReallyEqual:(id)arg1;
- (id)macAddress;
- (id)model;
- (id)name;
- (bool)notifyEnabled;
- (long long)partIdentifier;
- (long long)productId;
- (void)setMacAddress:(id)arg1;
- (id)systemVersion;
- (long long)vendorId;

@end
