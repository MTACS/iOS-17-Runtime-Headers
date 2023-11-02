
@interface CACLanguageSelectionViewController : UIViewController <CACLanguageViewBridgeDelegate> {
    NSArray * _availableLocales;
    unsigned long long  _controllerStyle;
    CACUILanguageViewBridgeController * _languageViewBridgeController;
    UIViewController * _languageViewController;
}

@property (nonatomic, retain) NSArray *availableLocales;
@property (nonatomic) unsigned long long controllerStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CACUILanguageViewBridgeController *languageViewBridgeController;
@property (nonatomic, retain) UIViewController *languageViewController;
@property (readonly) Class superclass;

+ (id)defaultControllerWithStyle:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)availableLocales;
- (void)cacLanguageDownloadStartDownload:(id)arg1;
- (void)cacLanguageDownloadStopDownload:(id)arg1;
- (unsigned long long)controllerStyle;
- (void)dealloc;
- (void)dismiss;
- (void)handleDownloadProgressChange;
- (void)handleErrorOccured:(id)arg1;
- (id)init;
- (void)languageDidChange;
- (id)languageViewBridgeController;
- (id)languageViewController;
- (void)selectedLanguageWithIdentifier:(id)arg1;
- (void)setAvailableLocales:(id)arg1;
- (void)setControllerStyle:(unsigned long long)arg1;
- (void)setLanguageViewBridgeController:(id)arg1;
- (void)setLanguageViewController:(id)arg1;
- (void)updateDownloadProgress;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
