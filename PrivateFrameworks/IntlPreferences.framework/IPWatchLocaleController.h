
@interface IPWatchLocaleController : NSObject {
    NPSDomainAccessor * _gizmoGlobalDomain;
    NPSManager * _syncManager;
    NSArray * _systemLanguages;
}

@property (nonatomic, retain) NPSDomainAccessor *gizmoGlobalDomain;
@property (nonatomic, retain) NPSManager *syncManager;
@property (nonatomic, retain) NSArray *systemLanguages;

- (void).cxx_destruct;
- (id)deviceLanguage;
- (id)gizmoGlobalDomain;
- (id)init;
- (id)initWithSystemLanguages:(id)arg1;
- (void)initializeMirrorSettings;
- (bool)isMirroringEnabled;
- (void)mirrorLanguagesAndLocaleToWatch;
- (void)postLocaleChangedNotification;
- (id)preferredLanguages;
- (void)resetTimeFormat;
- (void)setGizmoGlobalDomain:(id)arg1;
- (void)setLanguages:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setSyncManager:(id)arg1;
- (void)setSystemLanguages:(id)arg1;
- (id)syncManager;
- (id)systemLanguages;
- (void)updateLocale:(id)arg1;

@end
