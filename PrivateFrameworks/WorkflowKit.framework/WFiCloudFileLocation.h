
@interface WFiCloudFileLocation : WFFileProviderLocation

+ (bool)canRepresentURL:(id)arg1 item:(id)arg2 parentItems:(id)arg3;
+ (id)resolveLocationFromPossibleProviderDomainIDsWithSerializedProviderDomainID:(id)arg1 relativeSubpath:(id)arg2;
+ (id)subpathFromURL:(id)arg1;

- (id)resolveLocationWithError:(id*)arg1;

@end
