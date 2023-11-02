
@interface NEVirtualInterfaceParameters : NSObject <NSSecureCoding> {
    NSFileHandle * _controlSocket;
    NSData * _ethernetAddress;
    unsigned long long  _maxPendingPackets;
    NSNumber * _mtu;
    NSString * _name;
    long long  _type;
    void * _userEthernetController;
}

@property (nonatomic, retain) NSFileHandle *controlSocket;
@property (readonly) NSData *ethernetAddress;
@property (readonly) unsigned long long maxPendingPackets;
@property (readonly) NSNumber *mtu;
@property (nonatomic, retain) NSString *name;
@property (readonly) long long type;
@property (nonatomic) void*userEthernetController;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)controlSocket;
- (struct NEVirtualInterface_s { }*)createVirtualInterfaceWithQueue:(id)arg1 clientInfo:(void*)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)ethernetAddress;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 maxPendingPackets:(unsigned long long)arg2 ethernetAddress:(id)arg3 mtu:(id)arg4;
- (id)initWithVirtualInterface:(struct NEVirtualInterface_s { }*)arg1;
- (unsigned long long)maxPendingPackets;
- (id)mtu;
- (id)name;
- (void)setControlSocket:(id)arg1;
- (void)setName:(id)arg1;
- (void)setUserEthernetController:(void*)arg1;
- (long long)type;
- (void*)userEthernetController;

@end
