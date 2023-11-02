
@interface FMXPCServiceDescription : NSObject {
    NSXPCInterface * _exportedInterface;
    NSObject * _exportedObject;
    id /* block */  _interruptionHandler;
    id /* block */  _invalidationHandler;
    NSString * _machService;
    unsigned long long  _options;
    NSXPCInterface * _remoteObjectInterface;
}

@property (nonatomic, retain) NSXPCInterface *exportedInterface;
@property (nonatomic, retain) NSObject *exportedObject;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *machService;
@property (nonatomic) unsigned long long options;
@property (nonatomic, retain) NSXPCInterface *remoteObjectInterface;

- (void).cxx_destruct;
- (id)exportedInterface;
- (id)exportedObject;
- (id)initInternalWithMachServiceName:(id)arg1 options:(unsigned long long)arg2 exportedObject:(id)arg3 exportedInterface:(id)arg4 remoteObjectInterface:(id)arg5 interruptionHandler:(id /* block */)arg6 invalidationHandler:(id /* block */)arg7;
- (id)initWithMachServiceName:(id)arg1 options:(unsigned long long)arg2 exportedObject:(id)arg3 exportedInterface:(id)arg4 remoteObjectInterface:(id)arg5 interruptionHandler:(id /* block */)arg6 invalidationHandler:(id /* block */)arg7;
- (id)initWithMachServiceName:(id)arg1 options:(unsigned long long)arg2 remoteObjectInterface:(id)arg3 interruptionHandler:(id /* block */)arg4 invalidationHandler:(id /* block */)arg5;
- (id /* block */)interruptionHandler;
- (id /* block */)invalidationHandler;
- (id)machService;
- (unsigned long long)options;
- (id)remoteObjectInterface;
- (void)setExportedInterface:(id)arg1;
- (void)setExportedObject:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setMachService:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setRemoteObjectInterface:(id)arg1;

@end
