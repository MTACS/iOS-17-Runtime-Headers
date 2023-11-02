
@protocol ANConnectionDelegate <NSObject>

@required

- (void)connection:(void *)arg1 didReceiveMessage:(void *)arg2 fromSender:(void *)arg3 senderContext:(void *)arg4 handler:(void *)arg5; // needs 5 arg types, found 10: <ANConnectionProvider> *, NSDictionary *, ANSender *, ANSenderContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)connection:(id <ANConnectionProvider>)arg1 failedDeliveryForMessage:(NSDictionary *)arg2 withError:(NSError *)arg3;

@end
