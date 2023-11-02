
@interface WFFileProviderLocation : WFFileLocation {
    NSString * _appContainerBundleIdentifier;
    NSString * _crossDeviceItemID;
    NSString * _fileProviderDomainID;
}

@property (nonatomic, readonly) NSString *appContainerBundleIdentifier;
@property (nonatomic, readonly) NSString *crossDeviceItemID;
@property (nonatomic, readonly) NSString *fileProviderDomainID;

+ (bool)canRepresentURL:(id)arg1;
+ (bool)canRepresentURL:(id)arg1 item:(id)arg2 parentItems:(id)arg3;
+ (id)locationWithSerializedRepresentation:(id)arg1;
+ (id)subpathFromURL:(id)arg1;
+ (id)subpathFromURL:(id)arg1 item:(id)arg2;
+ (Class)supportedClassForURL:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appContainerBundleIdentifier;
- (id)crossDeviceItemID;
- (void)encodeWithCoder:(id)arg1;
- (id)fileProviderDomainID;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileProviderDomainID:(id)arg1 crossDeviceItemID:(id)arg2 appContainerBundleIdentifier:(id)arg3 relativeSubpath:(id)arg4;
- (id)initWithURL:(id)arg1;
- (bool)isSupportedOnCurrentPlatform;
- (id)resolveCrossDeviceItemIDWithError:(id*)arg1;
- (id)resolveLocationFromProviderDomainID;
- (id)resolveLocationWithError:(id*)arg1;
- (id)serializedRepresentation;
- (bool)shouldShowUsersDuringDisplay:(id)arg1;

@end
