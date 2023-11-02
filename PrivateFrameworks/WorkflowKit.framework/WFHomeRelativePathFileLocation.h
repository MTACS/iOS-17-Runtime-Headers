
@interface WFHomeRelativePathFileLocation : WFFilePathLocation

+ (bool)canRepresentURL:(id)arg1;
+ (id)homeDirectory;
+ (id)subpathFromURL:(id)arg1;

- (bool)isSupportedOnCurrentPlatform;
- (id)resolveLocationWithError:(id*)arg1;
- (bool)shouldShowUsersDuringDisplay:(id)arg1;

@end
