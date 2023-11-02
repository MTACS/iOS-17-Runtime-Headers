
@interface THNetworkSignature : NSObject <NSSecureCoding> {
    NSData * _ipv4NwSignature;
    NSData * _ipv6NwSignature;
    NSString * _wifiPassword;
    NSString * _wifiSSID;
}

@property (nonatomic, readonly) NSData *ipv4NwSignature;
@property (nonatomic, readonly) NSData *ipv6NwSignature;
@property (nonatomic, readonly) NSString *wifiPassword;
@property (nonatomic, readonly) NSString *wifiSSID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initSignaturesWithArrays:(char *)arg1 ipv4BytesLen:(int)arg2 ipv6Bytes:(char *)arg3 ipv6BytesLen:(int)arg4 wifSSID:(id)arg5 wifiPassword:(id)arg6;
- (id)initWithCoder:(id)arg1;
- (id)initWithSignatures:(id)arg1 ipv6NwSignature:(id)arg2 wifSSID:(id)arg3 wifiPassword:(id)arg4;
- (id)ipv4NwSignature;
- (id)ipv6NwSignature;
- (id)wifiPassword;
- (id)wifiSSID;

@end
