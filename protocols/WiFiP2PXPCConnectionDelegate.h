
@protocol WiFiP2PXPCConnectionDelegate <NSObject>

@required

- (void)startConnectionUsingProxy:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: <WiFiP2PXPCProtocol> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*

@optional

- (NSXPCInterface *)exportedInterface;
- (id)exportedObject;
- (void)handleConnectionEstablishedWithProxy:(id)arg1;
- (void)handleError:(long long)arg1;
- (NSXPCInterface *)remoteObjectInterface;

@end
