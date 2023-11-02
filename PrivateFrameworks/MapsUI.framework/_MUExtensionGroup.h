
@interface _MUExtensionGroup : NSObject {
    NSString * _appIdentifier;
    GEOAppleMediaServicesResult * _appStoreApp;
    NSMutableArray * _extensions;
    geo_isolater * _extensionsLock;
}

@property (nonatomic, readonly) NSString *appIdentifier;
@property (nonatomic, retain) GEOAppleMediaServicesResult *appStoreApp;
@property (nonatomic, readonly) _MXExtension *bestExtensionToUse;

- (void).cxx_destruct;
- (void)addExtensionIfMatchedAppIdentifier:(id)arg1;
- (id)appIdentifier;
- (id)appStoreApp;
- (id)bestExtensionToUse;
- (id)initWithAppIdentifier:(id)arg1;
- (void)setAppStoreApp:(id)arg1;

@end
