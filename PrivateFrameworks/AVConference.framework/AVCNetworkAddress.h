
@interface AVCNetworkAddress : NSObject {
    NSString * interfaceName;
    NSString * ip;
    bool  isIPv6;
    unsigned short  port;
}

@property (nonatomic, copy) NSString *interfaceName;
@property (nonatomic, copy) NSString *ip;
@property (nonatomic) bool isIPv6;
@property (nonatomic) unsigned short port;

- (void)dealloc;
- (id)init;
- (id)interfaceName;
- (id)ip;
- (bool)isIPv6;
- (unsigned short)port;
- (void)setInterfaceName:(id)arg1;
- (void)setIp:(id)arg1;
- (void)setIsIPv6:(bool)arg1;
- (void)setPort:(unsigned short)arg1;

@end
