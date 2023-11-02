
@interface CNXPCListenerDelegate : NSObject <NSXPCListenerDelegate> {
    Protocol * _exportedInterfaceProtocol;
    id  _exportedObject;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithWithExportedObject:(id)arg1 exportedInterfaceProtocol:(id)arg2;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
