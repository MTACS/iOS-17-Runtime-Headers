
@interface WFAbsolutePathFileLocation : WFFilePathLocation

+ (bool)canRepresentURL:(id)arg1;
+ (id)subpathFromURL:(id)arg1;

- (bool)isSupportedOnCurrentPlatform;
- (id)resolveLocationWithError:(id*)arg1;
- (bool)shouldShowUsersDuringDisplay:(id)arg1;

@end
