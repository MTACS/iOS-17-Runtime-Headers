
@interface WFShortcutsFileLocation : WFFileProviderLocation

+ (bool)canRepresentURL:(id)arg1 item:(id)arg2 parentItems:(id)arg3;
+ (id)locationAtRootDirectory;
+ (id)subpathFromURL:(id)arg1 item:(id)arg2;

- (id)resolveLocationWithError:(id*)arg1;

@end
