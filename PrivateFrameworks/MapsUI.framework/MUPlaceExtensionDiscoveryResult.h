
@interface MUPlaceExtensionDiscoveryResult : NSObject {
    GEOAppleMediaServicesResult * _appStoreApp;
    _MXExtension * _extension;
    NSString * _vendorIdentifier;
}

@property (nonatomic, readonly) GEOAppleMediaServicesResult *appStoreApp;
@property (nonatomic, readonly) _MXExtension *extension;
@property (nonatomic, readonly) NSString *vendorIdentifier;

- (void).cxx_destruct;
- (id)appStoreApp;
- (id)extension;
- (id)initWithExtension:(id)arg1 appStoreApp:(id)arg2 vendorIdentifier:(id)arg3;
- (id)vendorIdentifier;

@end
