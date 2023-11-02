
@interface WiFiMACAddress : NSObject <NSCopying, NSSecureCoding> {
    NSData * _data;
    NSData * _ipv6LinkLocalAddress;
}

@property (readonly) NSData *data;
@property (readonly) NSData *ipv6LinkLocalAddress;

+ (bool)supportsSecureCoding;
+ (id)zeroAddress;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAddress:(struct ether_addr { unsigned char x1[6]; })arg1;
- (id)initWithAddress:(struct ether_addr { unsigned char x1[6]; })arg1 ipv6Address:(struct in6_addr { union { unsigned char x_1_1_1[16]; unsigned short x_1_1_2[8]; unsigned int x_1_1_3[4]; } x1; })arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithLinkLocalIPv6Address:(struct in6_addr { union { unsigned char x_1_1_1[16]; unsigned short x_1_1_2[8]; unsigned int x_1_1_3[4]; } x1; })arg1;
- (id)ipv6LinkLocalAddress;
- (bool)isEqual:(id)arg1;

@end
