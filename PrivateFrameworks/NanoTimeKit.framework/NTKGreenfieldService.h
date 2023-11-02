
@interface NTKGreenfieldService : NSObject <NTKGreenfieldDecodingServiceProtocol>

+ (id)_unzipWatchfaceFromURL:(id)arg1;

- (void)removeFileAtPath:(id)arg1 withSandboxExtension:(char *)arg2 completionBlock:(id /* block */)arg3;
- (void)unzipWatchfaceFromURL:(id)arg1 withSandboxExtension:(char *)arg2 writeSandboxExtension:(char *)arg3 completionBlock:(id /* block */)arg4;

@end
