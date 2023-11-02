
@protocol PUImageInfoNode <PXRunNode>

@required

- (NSURL *)imageDataURL;
- (NSString *)imageDataUTI;
- (long long)imageExifOrientation;
- (bool)useEmbeddedPreview;

@end
