
@protocol FSModuleXPC <NSObject>

@required

- (void)checkIn:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)checkResource:(void *)arg1 options:(void *)arg2 connection:(void *)arg3 taskID:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 10: FSResource *, FSTaskOptionsBundle *, FSMessageConnection *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)formatResource:(void *)arg1 options:(void *)arg2 connection:(void *)arg3 taskID:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 10: FSResource *, FSTaskOptionsBundle *, FSMessageConnection *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)getLegacyVolumeEndpoint:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSXPCListenerEndpoint *, NSError *, void*
- (void)getProgressPortForTask:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSXPCListenerEndpoint *, NSError *, void*
- (void)getVolumeEndpoint:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSXPCListenerEndpoint *, NSError *, void*
- (void)ping:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)probeResource:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: FSResource *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FSProbeResult *, NSError *, void*

@end
