
@interface TSBonjourIPv4Address : NSObject <NSCopying> {
    bool  _hasLinkLayerAddress;
    unsigned int  _ipv4Address;
    unsigned char  _linkLayerAddress;
}

@property (nonatomic) bool hasLinkLayerAddress;
@property (nonatomic, readonly) unsigned int ipv4Address;
@property (nonatomic, readonly) const char *linkLayerAddress;

+ (bool)getLinkLayerAddress:(char *)arg1 forIPv4Address:(unsigned int)arg2 error:(id*)arg3;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)getLinkLayerAddressError:(id*)arg1;
- (bool)hasLinkLayerAddress;
- (id)init;
- (id)initWithIPv4Address:(unsigned int)arg1;
- (unsigned int)ipv4Address;
- (const char *)linkLayerAddress;
- (void)setHasLinkLayerAddress:(bool)arg1;

@end
