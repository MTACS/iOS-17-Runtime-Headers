
@interface TSBonjourIPv6Address : NSObject <NSCopying> {
    bool  _hasLinkLayerAddress;
    unsigned char  _ipv6Address;
    unsigned char  _linkLayerAddress;
}

@property (nonatomic) bool hasLinkLayerAddress;
@property (nonatomic, readonly) const char *ipv6Address;
@property (nonatomic, readonly) const char *linkLayerAddress;

+ (bool)getLinkLayerAddress:(char *)arg1 forIPv6Address:(const char *)arg2 error:(id*)arg3;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)getLinkLayerAddressError:(id*)arg1;
- (bool)hasLinkLayerAddress;
- (id)init;
- (id)initWithIPv6Address:(const char *)arg1;
- (const char *)ipv6Address;
- (const char *)linkLayerAddress;
- (void)pokeDestinationAtPort:(unsigned short)arg1 onInterfaceIndex:(unsigned int)arg2;
- (void)setHasLinkLayerAddress:(bool)arg1;

@end
