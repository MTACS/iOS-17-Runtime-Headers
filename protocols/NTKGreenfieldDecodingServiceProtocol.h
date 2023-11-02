
@protocol NTKGreenfieldDecodingServiceProtocol

@required

- (void)removeFileAtPath:(void *)arg1 withSandboxExtension:(void *)arg2 completionBlock:(void *)arg3; // needs 3 arg types, found 8: NSString *, char *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)unzipWatchfaceFromURL:(void *)arg1 withSandboxExtension:(void *)arg2 writeSandboxExtension:(void *)arg3 completionBlock:(void *)arg4; // needs 4 arg types, found 10: NSURL *, char *, char *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*

@end
