
@protocol NTKResourceDirectoryScrubbingOperation <NSObject>

@required

- (bool)scrubAssetAtURL:(NSURL *)arg1 toDestinationURL:(NSURL *)arg2 error:(id*)arg3;
- (NSArray *)supportedExtensions;

@end
