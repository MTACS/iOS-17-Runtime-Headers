
@interface _TtC8SettingsP33_D536CAB592FD6D1F6F74399A1DC2AD1D24SettingsProtocolDispatch : _TtCs12_SwiftObject <Settings.SettingsPrivateProtocol> {
    void hasPushedContent;
    void initialPathToken;
    void target;
}

@property (nonatomic, retain) <_TtP8Settings20SettingsHostProtocol_> *settingsHost;

- (void)didUnselect;
- (void)handshakeWithEndPoint:(id)arg1;
- (void)isCloudSyncEnabled:(id /* block */)arg1;
- (void)popNavigationStack;
- (void)setCloudSyncEnabled:(bool)arg1;
- (void)setSettingsHost:(id)arg1;
- (id)settingsHost;
- (void)willSelect;
- (void)willSelectWithNavigationPath:(id)arg1;
- (void)willSelectWithRevealElementKey:(id)arg1;

@end
