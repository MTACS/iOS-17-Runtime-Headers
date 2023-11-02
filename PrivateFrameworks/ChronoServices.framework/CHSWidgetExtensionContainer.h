
@interface CHSWidgetExtensionContainer : NSObject {
    void iconResolver;
    void storage;
}

@property (nonatomic, readonly) NSSet *allExtensions;
@property (nonatomic, readonly) NSString *containerBundleIdentifier;
@property (nonatomic, readonly) NSString *iconVersion;
@property (nonatomic, readonly) NSArray *localExtensions;
@property (nonatomic, readonly) NSString *localizedContainerDisplayName;
@property (nonatomic, readonly) NSDictionary *remoteExtensionsByDeviceIdentifier;

- (void).cxx_destruct;
- (id)allExtensions;
- (id)containerBundleIdentifier;
- (void)getIconWithCompletion:(id /* block */)arg1;
- (id)iconVersion;
- (id)init;
- (id)initWithExtensions:(id)arg1 iconResolver:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)localExtensions;
- (id)localizedContainerDisplayName;
- (id)remoteExtensionsByDeviceIdentifier;

@end
