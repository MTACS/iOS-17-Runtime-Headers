
@interface INIntentExecutionInfo : INExecutionInfo {
    NSArray * _extensions;
    NSString * _intentClassName;
    long long  _preferredCallProvider;
    NSString * _uiExtensionBundleId;
    NSArray * _uiExtensions;
}

@property (nonatomic, readonly) bool hasCustomUIExtension;
@property (nonatomic, readonly, copy) NSString *intentClassName;
@property (nonatomic, readonly) long long preferredCallProvider;
@property (nonatomic, readonly, copy) NSString *uiExtensionBundleId;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_extensionsWithError:(id*)arg1;
- (id)_initWithIntentClassName:(id)arg1 preferredCallProvider:(long long)arg2 launchableAppBundleId:(id)arg3 displayableAppBundleId:(id)arg4 extensionBundleId:(id)arg5 uiExtensionBundleId:(id)arg6 containingAppBundleURL:(id)arg7;
- (id)_matchingAttributesForExtensionPoint:(id)arg1 error:(id*)arg2;
- (id)_uiExtensionsWithError:(id*)arg1;
- (bool)canRunOnLocalDevice;
- (bool)hasCustomUIExtension;
- (id)initWithIntent:(id)arg1;
- (id)initWithIntentClassName:(id)arg1 extensionBundleId:(id)arg2;
- (id)initWithIntentClassName:(id)arg1 launchableAppBundleId:(id)arg2;
- (id)initWithIntentTypeName:(id)arg1;
- (id)intentClassName;
- (long long)preferredCallProvider;
- (id)uiExtensionBundleId;

@end
