
@interface CNAvatarViewControllerSettings : NSObject {
    CNContactStore * _contactStore;
    <CNUILikenessRendering> * _likenessRenderer;
    <CNUIPRLikenessResolver> * _likenessResolver;
    <CNSchedulerProvider> * _schedulerProvider;
    unsigned long long  _style;
    bool  _threeDTouchEnabled;
}

@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic, retain) <CNUILikenessRendering> *likenessRenderer;
@property (nonatomic, retain) <CNUIPRLikenessResolver> *likenessResolver;
@property (nonatomic, retain) <CNSchedulerProvider> *schedulerProvider;
@property (nonatomic) unsigned long long style;
@property (nonatomic) bool threeDTouchEnabled;

+ (id)defaultSettings;
+ (id)defaultSettingsWithCacheSize:(unsigned long long)arg1 threeDTouchEnabled:(bool)arg2;
+ (id)settingsWithContactStore:(id)arg1;
+ (id)settingsWithContactStore:(id)arg1 cacheSize:(unsigned long long)arg2 threeDTouchEnabled:(bool)arg3;
+ (id)settingsWithContactStore:(id)arg1 threeDTouchEnabled:(bool)arg2;
+ (id)settingsWithLikenessResolver:(id)arg1 likenessRenderer:(id)arg2 contactStore:(id)arg3 threeDTouchEnabled:(bool)arg4 schedulerProvider:(id)arg5;
+ (bool)threeDTouchEnabledDefaultValue;

- (void).cxx_destruct;
- (id)contactStore;
- (id)initWithLikenessResolver:(id)arg1 likenessRenderer:(id)arg2 contactStore:(id)arg3 threeDTouchEnabled:(bool)arg4 schedulerProvider:(id)arg5;
- (id)likenessRenderer;
- (id)likenessResolver;
- (id)schedulerProvider;
- (void)setContactStore:(id)arg1;
- (void)setLikenessRenderer:(id)arg1;
- (void)setLikenessResolver:(id)arg1;
- (void)setSchedulerProvider:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setThreeDTouchEnabled:(bool)arg1;
- (unsigned long long)style;
- (bool)threeDTouchEnabled;

@end
