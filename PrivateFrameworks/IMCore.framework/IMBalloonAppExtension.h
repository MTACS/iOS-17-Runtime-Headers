
@interface IMBalloonAppExtension : IMBalloonPlugin {
    bool  _canSendDataPayloads;
    NSExtension * _extension;
    LSPlugInKitProxy * _proxy;
    NSUUID * _requestIdentifier;
}

@property (nonatomic) bool canSendDataPayloads;
@property (nonatomic, readonly) NSString *containingBundleIdentifier;
@property (nonatomic, readonly, retain) NSExtension *extension;
@property (nonatomic, readonly) bool isLaunchProhibited;
@property (nonatomic, readonly, retain) NSNumber *itemID;
@property (nonatomic, readonly, retain) <PKPlugIn> *plugin;
@property (nonatomic, retain) LSPlugInKitProxy *proxy;
@property (retain) NSUUID *requestIdentifier;
@property (nonatomic, readonly) bool shouldBalloonHideAppIcon;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)_initWithPluginBundle:(id)arg1 extension:(id)arg2 pluginKitProxyClass:(Class)arg3;
- (bool)canSendDataPayloads;
- (id)extension;
- (id)initWithPluginBundle:(id)arg1 appBundle:(id)arg2;
- (id)initWithPluginBundle:(id)arg1 extension:(id)arg2;
- (id)initWithPluginBundle:(id)arg1 pluginKitProxy:(id)arg2 extension:(id)arg3;
- (bool)isBetaPlugin;
- (bool)isLaunchProhibited;
- (id)itemID;
- (id)plugin;
- (id)proxy;
- (id)requestIdentifier;
- (void)setCanSendDataPayloads:(bool)arg1;
- (void)setProxy:(id)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (bool)shouldBalloonHideAppIcon;
- (bool)shouldBreadcrumbHideAppIcon;
- (id)version;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (id)__ck_breadcrumbImage;
- (id)__ck_browserImageForInterfaceStyle:(long long)arg1;
- (id)__ck_browserImageGenerateSynchronously:(bool)arg1 interfaceStyle:(long long)arg2 allowPlaceholder:(bool)arg3;
- (id)__ck_generateAssetCatalogImageForInterfaceStyle:(long long)arg1;
- (void)__ck_generateStatusImage:(id /* block */)arg1;
- (id)__ck_iconServicesBundleIdentifier;
- (bool)__ck_preferIconServices;
- (id)__ck_statusImage;
- (id)__ck_tapToRadarBalloonPluginImage;
- (id)_adamID;
- (id)_generatePlaceholderImageForInterfaceStyle:(long long)arg1;
- (id)_validProxy;
- (id)containingBundleIdentifier;

@end
