
@interface CWFRequestParameters : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    NSString * _interfaceName;
    long long  _qualityOfService;
    long long  _queuePriority;
    unsigned long long  _timeout;
    int  _virtualInterfaceRole;
}

@property (nonatomic, copy) NSUUID *UUID;
@property (nonatomic, copy) NSString *interfaceName;
@property (nonatomic) long long qualityOfService;
@property (nonatomic) long long queuePriority;
@property (nonatomic) unsigned long long timeout;
@property (nonatomic) int virtualInterfaceRole;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)interfaceName;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRequestParameters:(id)arg1;
- (long long)qualityOfService;
- (long long)queuePriority;
- (void)setInterfaceName:(id)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setQueuePriority:(long long)arg1;
- (void)setTimeout:(unsigned long long)arg1;
- (void)setUUID:(id)arg1;
- (void)setVirtualInterfaceRole:(int)arg1;
- (unsigned long long)timeout;
- (int)virtualInterfaceRole;

@end
