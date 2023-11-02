
@protocol SKDaemonProtocol <NSObject>

@required

- (void)childDisksForWholeDisk:(void *)arg1 withCallbackBlock:(void *)arg2; // needs 2 arg types, found 7: SKDisk *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)diskForPath:(void *)arg1 withCallbackBlock:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SKDisk *, void*
- (void)ejectDisk:(void *)arg1 withCompletionBlock:(void *)arg2; // needs 2 arg types, found 7: SKDisk *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSProgress *)eraseWithEraser:(void *)arg1 completionBlock:(void *)arg2; // needs 2 arg types, found 8: <SKEraserProtocol> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SKDisk *, NSError *, void*
- (void)filesystemsWithCallbackBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)isBusy:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)mountDisk:(void *)arg1 options:(void *)arg2 connection:(void *)arg3 completionBlock:(void *)arg4; // needs 4 arg types, found 9: SKDisk *, NSDictionary *, SKDaemonConnection *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)physicalStoresForAPFSVolume:(void *)arg1 completionBlock:(void *)arg2; // needs 2 arg types, found 7: SKDisk *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)recacheDisk:(void *)arg1 options:(void *)arg2 callbackBlock:(void *)arg3; // needs 3 arg types, found 7: SKDisk *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)renameDisk:(void *)arg1 to:(void *)arg2 withCompletionBlock:(void *)arg3; // needs 3 arg types, found 8: SKDisk *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setDaemonOptionsWithLanguage:(void *)arg1 authRef:(void *)arg2 withCompletionBlock:(void *)arg3; // needs 3 arg types, found 8: NSString *, unsigned char, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)syncAllDisksWithCompletionBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)unmountDisk:(void *)arg1 options:(void *)arg2 withCompletionBlock:(void *)arg3; // needs 3 arg types, found 8: SKDisk *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)unmountDisk:(void *)arg1 withCompletionBlock:(void *)arg2; // needs 2 arg types, found 7: SKDisk *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)volumesForAPFSPS:(void *)arg1 completionBlock:(void *)arg2; // needs 2 arg types, found 7: SKDisk *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)wholeDiskForDisk:(void *)arg1 withCallbackBlock:(void *)arg2; // needs 2 arg types, found 7: SKDisk *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SKDisk *, void*

@end
