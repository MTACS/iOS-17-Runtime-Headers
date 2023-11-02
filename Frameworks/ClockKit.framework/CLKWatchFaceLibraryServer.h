
@interface CLKWatchFaceLibraryServer : NSObject <CLKWatchFaceLibraryServerInterface> {
    NSXPCConnection * _connection;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_clearConnection;
- (void)_queue_setupConnectionIfNeeded;
- (void)dealloc;
- (void)openWatchFaceURLWithBookmarkData:(id)arg1 sourceApplicationBundleIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)validateFaceType:(id)arg1 faceBundleId:(id)arg2 completionHandler:(id /* block */)arg3;

@end
