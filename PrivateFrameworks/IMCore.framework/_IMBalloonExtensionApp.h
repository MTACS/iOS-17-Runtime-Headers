
@interface _IMBalloonExtensionApp : IMBalloonApp {
    NSExtension * _extension;
    LSPlugInKitProxy * _proxy;
}

@property (nonatomic, retain) NSExtension *extension;
@property (nonatomic, retain) LSPlugInKitProxy *proxy;

- (void).cxx_destruct;
- (id)_bundleIDsForDawnSendMenuTemporaryDisplayOverride;
- (id)appStoreGenre;
- (id)appStoreGenreID;
- (id)appStoreSubgenres;
- (id)applicationType;
- (id)extension;
- (id)initWithPluginBundle:(id)arg1 extension:(id)arg2;
- (id)initWithPluginBundle:(id)arg1 extension:(id)arg2 pluginKitProxyClass:(Class)arg3 proxy:(id)arg4;
- (id)initWithPluginBundle:(id)arg1 pluginKitProxy:(id)arg2 extension:(id)arg3;
- (bool)isBetaPlugin;
- (bool)isEnabled;
- (bool)isLaunchProhibited;
- (bool)isPreDawnAndAppStoreStickerGenre;
- (bool)isStickerPackOnly;
- (id)itemID;
- (bool)linkedBeforeDawn;
- (bool)linkedBeforeSDKVersion:(id)arg1;
- (id)plugin;
- (id)proxy;
- (void)setExtension:(id)arg1;
- (void)setIsEnabled:(bool)arg1;
- (void)setProxy:(id)arg1;
- (bool)shouldForceIntoSendMenu;
- (bool)showInBrowser;
- (bool)showInSendMenu;
- (bool)showableInBrowser;
- (id)version;

@end
