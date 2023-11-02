
@interface CommandAndControlUI.CACLanguageViewBridge : NSObject <CommandAndControlUI.CACLanguageViewDelegate> {
    void delegate;
    void model;
}

@property (nonatomic, retain) <_TtP19CommandAndControlUI23CACLanguageViewDelegate_> *delegate;

- (void).cxx_destruct;
- (void)cancelDownloadWithIdentifier:(id)arg1;
- (id)delegate;
- (void)downloadLanguageWithIdentifier:(id)arg1;
- (id)init;
- (id)makeLanguageUI;
- (id)makeLanguageUIWithLocales:(id)arg1;
- (void)selectedLanguageWithIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSelectedWithLanguageIdentifier:(id)arg1;
- (void)updateDownloadStatusWith:(id)arg1;
- (void)updateInstallationStatusWith:(id)arg1;

@end
