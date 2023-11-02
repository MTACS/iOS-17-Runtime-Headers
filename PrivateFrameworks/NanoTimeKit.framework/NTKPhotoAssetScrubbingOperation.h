
@interface NTKPhotoAssetScrubbingOperation : NSObject <NTKResourceDirectoryScrubbingOperation>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)scrubAssetAtURL:(id)arg1 toDestinationURL:(id)arg2 error:(id*)arg3;
- (id)supportedExtensions;

@end
