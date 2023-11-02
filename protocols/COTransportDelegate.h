
@protocol COTransportDelegate <NSObject>

@optional

- (void)transport:(id <COTransportProtocol>)arg1 didInvalidateWithError:(NSError *)arg2;
- (void)transport:(id <COTransportProtocol>)arg1 didReceiveCommand:(COMeshCommand *)arg2;
- (void)transport:(id <COTransportProtocol>)arg1 didReceiveError:(NSError *)arg2 forCommand:(COMeshCommand *)arg3;
- (void)transport:(void *)arg1 didReceiveRequest:(void *)arg2 callback:(void *)arg3; // needs 3 arg types, found 9: <COTransportProtocol> *, COMeshRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, COMeshResponse *, NSError *, void*
- (void)transport:(id <COTransportProtocol>)arg1 didReceiveUnhandledRequest:(COUnhandledRequest *)arg2;
- (void)transport:(id <COTransportProtocol>)arg1 didUpdateRemoteConstituent:(COConstituent *)arg2 to:(COConstituent *)arg3;
- (void)transport:(void *)arg1 shouldUpdateRemoteConstituent:(void *)arg2 to:(void *)arg3 forCommand:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: <COTransportProtocol> *, COConstituent *, COConstituent *, COMeshCommand *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)transport:(id <COTransportProtocol>)arg1 willUpdateRemoteConstituent:(COConstituent *)arg2 to:(COConstituent *)arg3;

@end
