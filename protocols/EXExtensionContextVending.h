
@protocol EXExtensionContextVending <NSObject>

@required

- (void)_beginRequestWithExtensionItems:(void *)arg1 listenerEndpoint:(void *)arg2 withContextUUID:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSArray *, NSXPCListenerEndpoint *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, NSError *, void*
- (void)_hostDidBecomeActiveForContextUUID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)_hostDidEnterBackgroundForContextUUID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)_hostWillEnterForegroundForContextUUID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)_hostWillResignActiveForContextUUID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
