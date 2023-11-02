
@interface CNAvatarImageRendererSettings : NSObject {
    <CNUILikenessRendering> * _likenessRenderer;
    <CNUIPRLikenessResolver> * _likenessResolver;
    <CNSchedulerProvider> * _schedulerProvider;
    unsigned long long  _style;
}

@property (nonatomic, readonly) <CNUILikenessRendering> *likenessRenderer;
@property (nonatomic, readonly) <CNUIPRLikenessResolver> *likenessResolver;
@property (nonatomic, readonly) <CNSchedulerProvider> *schedulerProvider;
@property (nonatomic) unsigned long long style;

+ (id)defaultSettings;
+ (id)defaultSettingsWithCacheSize:(unsigned long long)arg1;
+ (id)offMainThreadSynchronousRenderingOnlySettingsWithCacheSize:(unsigned long long)arg1;
+ (id)settingsWithContactStore:(id)arg1;
+ (id)settingsWithContactStore:(id)arg1 cacheSize:(unsigned long long)arg2;
+ (id)settingsWithContactStore:(id)arg1 cacheSize:(unsigned long long)arg2 schedulerProvider:(id)arg3;
+ (id)settingsWithContactStore:(id)arg1 cacheSize:(unsigned long long)arg2 schedulerProvider:(id)arg3 concurrentCaches:(bool)arg4;
+ (id)settingsWithContactStore:(id)arg1 schedulerProvider:(id)arg2;

- (void).cxx_destruct;
- (id)initWithLikenessResolver:(id)arg1 likenessRenderer:(id)arg2 schedulerProvider:(id)arg3;
- (id)likenessRenderer;
- (id)likenessResolver;
- (id)schedulerProvider;
- (void)setStyle:(unsigned long long)arg1;
- (unsigned long long)style;

@end
