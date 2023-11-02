
@interface WFLocalStorageFileLocation : WFFileProviderLocation

+ (bool)canRepresentURL:(id)arg1 item:(id)arg2 parentItems:(id)arg3;
+ (id)subpathFromURL:(id)arg1;
+ (id)subpathFromURL:(id)arg1 item:(id)arg2;

- (bool)isSupportedOnCurrentPlatform;
- (id)resolveLocationWithError:(id*)arg1;
- (bool)shouldShowUsersDuringDisplay:(id)arg1;

@end
