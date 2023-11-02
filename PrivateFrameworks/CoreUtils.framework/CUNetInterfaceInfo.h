
@interface CUNetInterfaceInfo : NSObject {
    NSString * _interfaceName;
    NSString * _ipv4String;
}

@property (nonatomic, copy) NSString *interfaceName;
@property (nonatomic, copy) NSString *ipv4String;

- (void).cxx_destruct;
- (id)interfaceName;
- (id)ipv4String;
- (void)setInterfaceName:(id)arg1;
- (void)setIpv4String:(id)arg1;

@end
