
@protocol BAAppStoreProgressObserverConfiguring

@required

- (void)setAppBundleIdentifiers:(NSSet *)arg1;
- (void)setHandlerQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)setUpdateHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, <BAAppStoreProgressInfo> *, void*

@end
