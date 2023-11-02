
@interface CWFXPCEvent : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    unsigned long long  _acknowledgementTimeout;
    NSDictionary * _info;
    NSString * _interfaceName;
    long long  _internalType;
    NSDate * _timestamp;
    long long  _type;
}

@property (nonatomic, copy) NSUUID *UUID;
@property (nonatomic) unsigned long long acknowledgementTimeout;
@property (nonatomic, copy) NSDictionary *info;
@property (nonatomic, copy) NSString *interfaceName;
@property (nonatomic) long long internalType;
@property (nonatomic, copy) NSDate *timestamp;
@property (nonatomic) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)__descriptionForEventType;
- (unsigned long long)acknowledgementTimeout;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)info;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)interfaceName;
- (long long)internalType;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToXPCEvent:(id)arg1;
- (void)setAcknowledgementTimeout:(unsigned long long)arg1;
- (void)setInfo:(id)arg1;
- (void)setInterfaceName:(id)arg1;
- (void)setInternalType:(long long)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setUUID:(id)arg1;
- (id)timestamp;
- (long long)type;

@end
