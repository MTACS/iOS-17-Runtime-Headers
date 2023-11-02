
@interface SystemListener : NSObject {
    bool  _autoUpdatingLocale;
    bool  _force;
    NSLocale * _locked_currentLocale;
    NSArray * _locked_currentPreferredLanguages;
    NSMutableDictionary * _locked_currentResources;
    bool  _locked_hasUpdatedLocale;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) bool force;

+ (id)defaultListener;

- (void).cxx_destruct;
- (id)currentLocale;
- (id)currentPreferredLanguages;
- (void)dealloc;
- (bool)force;
- (bool)hasUpdatedLocale;
- (bool)hasUpdatedResources;
- (id)init;
- (void)loadLocale:(id)arg1 preferredLanguages:(id)arg2;
- (id)pathsForContentType:(id)arg1 locale:(id)arg2;
- (void)setAutoUpdatingLocale:(bool)arg1;
- (void)setForce:(bool)arg1;
- (void)updateLocale;
- (void)updateLocaleWithLocale:(id)arg1 preferredLanguages:(id)arg2 forceLoad:(bool)arg3;

@end
