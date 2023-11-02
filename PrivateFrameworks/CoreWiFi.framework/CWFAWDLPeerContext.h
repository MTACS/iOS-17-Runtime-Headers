
@interface CWFAWDLPeerContext : NSObject <NSCopying, NSSecureCoding> {
    NSString * _MACAddress;
    NSString * _interfaceName;
}

@property (nonatomic, copy) NSString *MACAddress;
@property (nonatomic, copy) NSString *interfaceName;

+ (id)AWDLPeerContextWithMACAddress:(id)arg1 interfaceName:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)MACAddress;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)interfaceName;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAWDLPeerContext:(id)arg1;
- (void)setInterfaceName:(id)arg1;
- (void)setMACAddress:(id)arg1;

@end
