
@protocol CLKWatchFaceLibraryServerInterface

@required

- (void)openWatchFaceURLWithBookmarkData:(void *)arg1 sourceApplicationBundleIdentifier:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSData *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)validateFaceType:(void *)arg1 faceBundleId:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
