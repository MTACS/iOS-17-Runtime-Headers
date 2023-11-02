
@interface GCGameIntentManager : NSObject {
    unsigned long long  _currentCategory;
    NSUserDefaults * _defaults;
    bool  _enabled;
    SBSHomeScreenService * _service;
}

+ (id)instance;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)launchToSpringboard;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)stepToNextCategory;
- (id)stringForCategory:(unsigned long long)arg1;
- (void)toggleGamesFolder;
- (void)toggleGamesFolderAndDismissOnly:(bool)arg1;
- (void)tryPresentAppLibraryPod;

@end
