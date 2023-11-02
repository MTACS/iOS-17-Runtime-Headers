
@interface TSBonjourInterface : NSObject {
    struct _DNSServiceRef_t { } * _addressRef;
    <TSBonjourInterfaceDelegate> * _delegate;
    NSString * _domain;
    NSString * _hostTarget;
    unsigned int  _interfaceIndex;
    NSString * _interfaceName;
    TSBonjourIPv4Address * _ipv4Address;
    NSArray * _ipv4Addresses;
    TSBonjourIPv6Address * _ipv6Address;
    NSArray * _ipv6Addresses;
    NSString * _name;
    TSBonjourNode * _node;
    unsigned short  _port;
    NSObject<OS_dispatch_queue> * _queue;
    struct _DNSServiceRef_t { } * _resolveRef;
    NSString * _type;
}

@property (nonatomic) <TSBonjourInterfaceDelegate> *delegate;
@property (nonatomic, readonly, copy) NSString *interfaceName;
@property (nonatomic, copy) TSBonjourIPv4Address *ipv4Address;
@property (nonatomic, copy) NSArray *ipv4Addresses;
@property (nonatomic, copy) TSBonjourIPv6Address *ipv6Address;
@property (nonatomic, copy) NSArray *ipv6Addresses;
@property (nonatomic) TSBonjourNode *node;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithServiceName:(id)arg1 type:(id)arg2 andDomain:(id)arg3 onInterfaceIndex:(unsigned int)arg4 andName:(id)arg5;
- (id)interfaceName;
- (id)ipv4Address;
- (id)ipv4Addresses;
- (id)ipv6Address;
- (id)ipv6Addresses;
- (id)node;
- (void)pokeIPv6Destination;
- (void)resolvedWithHostTarget:(const char *)arg1 port:(unsigned short)arg2;
- (void)setDelegate:(id)arg1;
- (void)setIpv4Address:(id)arg1;
- (void)setIpv4Addresses:(id)arg1;
- (void)setIpv6Address:(id)arg1;
- (void)setIpv6Addresses:(id)arg1;
- (void)setNode:(id)arg1;
- (bool)startAddressLookupWithError:(id*)arg1;
- (bool)startResolveWithError:(id*)arg1;
- (bool)stopAddressLookup;
- (bool)stopResolve;

@end
