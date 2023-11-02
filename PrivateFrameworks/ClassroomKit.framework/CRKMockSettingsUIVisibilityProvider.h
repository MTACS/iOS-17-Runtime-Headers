
@interface CRKMockSettingsUIVisibilityProvider : NSObject <CRKSettingsUIVisibilityProvider> {
    bool  _settingsUIVisible;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *paneStatus;
@property bool settingsUIVisible;
@property (readonly) Class superclass;

- (void)connectToDaemon;
- (id)paneStatus;
- (void)setSettingsUIVisible:(bool)arg1;
- (bool)settingsUIVisible;

@end
