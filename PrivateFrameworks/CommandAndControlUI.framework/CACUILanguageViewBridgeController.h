
@interface CACUILanguageViewBridgeController : NSObject <CommandAndControlUI.CACLanguageViewDelegate> {
    <CACLanguageViewBridgeDelegate> * _delegate;
    NSDictionary * _installationStatus;
    UIViewController * _trueViewController;
    _TtC19CommandAndControlUI21CACLanguageViewBridge * _viewBridge;
}

@property (nonatomic) <CACLanguageViewBridgeDelegate> *delegate;
@property (nonatomic, readonly) NSDictionary *installationStatus;
@property (nonatomic, retain) UIViewController *trueViewController;
@property (nonatomic, retain) _TtC19CommandAndControlUI21CACLanguageViewBridge *viewBridge;

- (void).cxx_destruct;
- (void)cancelDownloadWithIdentifier:(id)arg1;
- (id)createLanguageViewController;
- (id)createLanguageViewControllerWithLocales:(id)arg1;
- (id)delegate;
- (void)downloadLanguageWithIdentifier:(id)arg1;
- (id)init;
- (id)installationStatus;
- (void)selectedLanguageWithIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSelectedLanguageIdentifier:(id)arg1;
- (void)setTrueViewController:(id)arg1;
- (void)setViewBridge:(id)arg1;
- (id)trueViewController;
- (void)updateDownloadStatus:(id)arg1;
- (void)updateInstallationStatus:(id)arg1;
- (id)viewBridge;

@end
