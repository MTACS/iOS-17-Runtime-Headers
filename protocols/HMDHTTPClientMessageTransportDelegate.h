
@protocol HMDHTTPClientMessageTransportDelegate <NSObject>

@required

- (void)client:(void *)arg1 didReceiveMessage:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: HMDHTTPClientMessageTransport *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)client:(HMDHTTPClientMessageTransport *)arg1 didStopWithError:(NSError *)arg2;

@end
