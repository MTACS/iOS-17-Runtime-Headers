
@protocol NSXPCServerProtocol <NSObject>

@required

- (oneway void)handleRequest:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSCoreDataXPCMessage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSCoreDataXPCMessage *, NSData *, void*

@end
