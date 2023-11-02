
@protocol IDSXPCActivityMonitorClient <NSObject>

@required

- (void)handleIncomingUpdate:(void *)arg1 onActivity:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: IDSActivityUpdate *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
