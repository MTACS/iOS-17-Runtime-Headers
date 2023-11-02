
@protocol EncoreXPCService.Receptionist

@required

- (void)broadcastWithEvent:(EncoreEvent *)arg1;
- (void)registerWithClient:(void *)arg1 name:(void *)arg2 with:(void *)arg3; // needs 3 arg types, found 8: NSXPCListenerEndpoint *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
