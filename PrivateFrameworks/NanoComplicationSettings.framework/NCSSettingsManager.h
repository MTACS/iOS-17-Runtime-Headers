
@interface NCSSettingsManager : NCSInternalSettingsManager {
    <NCSSettingsManagerDelegate> * _delegate;
}

@property (nonatomic) <NCSSettingsManagerDelegate> *delegate;

+ (id)sharedSettingsManager;

- (void).cxx_destruct;
- (id)_fetchSockPuppetComplications;
- (void)_handleLocaleChange:(id)arg1;
- (void)_updateSockPuppetComplications;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)loadSettings;
- (void)setDelegate:(id)arg1;

@end
