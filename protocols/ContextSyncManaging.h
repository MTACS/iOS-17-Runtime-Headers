
@protocol ContextSyncManaging <NSObject>

@required

- (void)registerForUpdates:(void *)arg1 withIdentifier:(void *)arg2 forUseCase:(void *)arg3 shouldWake:(void *)arg4 forDeviceTypes:(void *)arg5 withErrorHandler:(void *)arg6; // needs 6 arg types, found 12: BMDSL *, NSString *, NSString *, bool, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)registerForUpdates:(void *)arg1 withIdentifier:(void *)arg2 forUseCase:(void *)arg3 shouldWake:(void *)arg4 forDeviceTypes:(void *)arg5 withHandler:(void *)arg6; // needs 6 arg types, found 11: BMDSL *, NSString *, NSString *, bool, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)registerForUpdates:(void *)arg1 withIdentifier:(void *)arg2 forUseCase:(void *)arg3 shouldWake:(void *)arg4 forDevices:(void *)arg5 withErrorHandler:(void *)arg6; // needs 6 arg types, found 12: BMDSL *, NSString *, NSString *, bool, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)unregisterForUpdates:(void *)arg1 withIdentifier:(void *)arg2 forUseCase:(void *)arg3 forDeviceTypes:(void *)arg4 withErrorHandler:(void *)arg5; // needs 5 arg types, found 11: BMDSL *, NSString *, NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)unregisterForUpdates:(void *)arg1 withIdentifier:(void *)arg2 forUseCase:(void *)arg3 forDeviceTypes:(void *)arg4 withHandler:(void *)arg5; // needs 5 arg types, found 10: BMDSL *, NSString *, NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)unregisterForUpdates:(void *)arg1 withIdentifier:(void *)arg2 forUseCase:(void *)arg3 forDevices:(void *)arg4 withErrorHandler:(void *)arg5; // needs 5 arg types, found 11: BMDSL *, NSString *, NSString *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
