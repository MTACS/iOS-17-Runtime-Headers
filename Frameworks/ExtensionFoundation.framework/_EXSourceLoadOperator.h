
@interface _EXSourceLoadOperator : _EXLoadOperator <NSSecureCoding, NSXPCListenerDelegate, _EXLoadOperatorXPCProtocol> {
    NSItemProvider * _itemProvider;
    NSXPCListener * _listener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSItemProvider *itemProvider;
@property (retain) NSXPCListener *listener;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemProvider:(id)arg1;
- (id)itemProvider;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)resolveWithIdentifier:(id)arg1 className:(id)arg2 options:(id)arg3 reply:(id /* block */)arg4;
- (void)setListener:(id)arg1;

@end
