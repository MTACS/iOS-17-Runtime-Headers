
@interface NWInterface : NSObject <NSCopying, NSSecureCoding, NWPrettyDescription> {
    NSObject<OS_nw_interface> * _internalInterface;
}

@property (nonatomic, readonly) NSObject<OS_nw_interface> *cInterface;
@property (getter=isConstrained, nonatomic, readonly) bool constrained;
@property (nonatomic, readonly) NWInterface *delegateInterface;
@property (getter=isExpensive, nonatomic, readonly) bool expensive;
@property (nonatomic, readonly) unsigned long long generation;
@property (nonatomic, readonly) bool hasDNS;
@property (nonatomic, readonly) bool hasNAT64;
@property (nonatomic, readonly) unsigned long long interfaceIndex;
@property (nonatomic, readonly) NSString *interfaceName;
@property (retain) NSObject<OS_nw_interface> *internalInterface;
@property (getter=isIPv4Routable, nonatomic, readonly) bool ipv4Routable;
@property (getter=isIPv6Routable, nonatomic, readonly) bool ipv6Routable;
@property (nonatomic, readonly) long long mtu;
@property (nonatomic, readonly, copy) NSString *privateDescription;
@property (nonatomic, readonly) long long subtype;
@property (nonatomic, readonly) bool supportsMulticast;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSString *typeString;

+ (id)descriptionForSubtype:(long long)arg1;
+ (id)descriptionForType:(long long)arg1;
+ (id)interfaceWithProtocolBufferData:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cInterface;
- (id)copyLocalAddressForDefaultIPv4;
- (id)copyLocalAddressForDefaultIPv6;
- (id)copyLocalAddressForRemoteAddress:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createProtocolBufferObject;
- (id)delegateInterface;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(bool)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)generation;
- (bool)hasDNS;
- (bool)hasNAT64;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithInterface:(id)arg1;
- (id)initWithInterfaceIndex:(unsigned long long)arg1;
- (id)initWithInterfaceIndex:(unsigned long long)arg1 interfaceName:(id)arg2;
- (id)initWithInterfaceName:(id)arg1;
- (unsigned long long)interfaceIndex;
- (id)interfaceName;
- (id)internalInterface;
- (id)ipv4Broadcast;
- (id)ipv4Netmask;
- (bool)isConstrained;
- (bool)isDeepEqual:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isExpensive;
- (bool)isIPv4Routable;
- (bool)isIPv6Routable;
- (bool)isShallowEqual:(id)arg1;
- (long long)mtu;
- (id)privateDescription;
- (void)setInternalInterface:(id)arg1;
- (long long)subtype;
- (bool)supportsMulticast;
- (long long)type;
- (id)typeString;

@end
