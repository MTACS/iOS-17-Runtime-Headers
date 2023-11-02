
@interface AAFXPCSessionConfig : NSObject {
    Protocol * _exportedProtocol;
    unsigned long long  _options;
    NSXPCInterface * _remoteObjectInterface;
    Protocol * _remoteProtocol;
    NSString * _serviceName;
}

@property (nonatomic, retain) Protocol *exportedProtocol;
@property (nonatomic) unsigned long long options;
@property (nonatomic, retain) NSXPCInterface *remoteObjectInterface;
@property (nonatomic, retain) Protocol *remoteProtocol;
@property (nonatomic, copy) NSString *serviceName;

- (void).cxx_destruct;
- (id)exportedProtocol;
- (id)initWithServiceName:(id)arg1 remoteProtocol:(id)arg2 exportedProtocol:(id)arg3 options:(unsigned long long)arg4;
- (id)initWithServiceName:(id)arg1 remoteProtocol:(id)arg2 options:(unsigned long long)arg3;
- (unsigned long long)options;
- (id)remoteObjectInterface;
- (id)remoteProtocol;
- (id)serviceName;
- (void)setExportedProtocol:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setRemoteObjectInterface:(id)arg1;
- (void)setRemoteProtocol:(id)arg1;
- (void)setServiceName:(id)arg1;

@end
