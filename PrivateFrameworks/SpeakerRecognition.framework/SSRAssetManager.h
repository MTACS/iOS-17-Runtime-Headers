
@interface SSRAssetManager : NSObject {
    NSArray * _assetProviders;
    NSString * _currentLanguageCode;
    <SSRAssetManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSArray *assetProviders;
@property (nonatomic, retain) NSString *currentLanguageCode;
@property (nonatomic) <SSRAssetManagerDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedManager;

- (void).cxx_destruct;
- (float)_convertVersionStringToFloat:(id)arg1;
- (id)_latestVersionedAssetOfType:(unsigned long long)arg1 fromProviders:(id)arg2 forLocale:(id)arg3;
- (id)allInstalledAssetsOfType:(unsigned long long)arg1 forLanguage:(id)arg2;
- (id)assetProviders;
- (id)currentLanguageCode;
- (id)delegate;
- (id)init;
- (id)installedAssetOfType:(unsigned long long)arg1 forLanguage:(id)arg2;
- (id)queue;
- (void)setAssetProviders:(id)arg1;
- (void)setCurrentLanguageCode:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;

@end
