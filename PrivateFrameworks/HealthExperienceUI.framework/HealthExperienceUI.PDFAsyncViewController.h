
@interface HealthExperienceUI.PDFAsyncViewController : UIViewController <PDFDocumentDelegate> {
    void $__lazy_storage_$_pdfView;
    void $__lazy_storage_$_spinner;
    void analyticsDelegate;
    void configuration;
    void pageNumberFormat;
    void pdfFileNameProvider;
    void shareButtonBehavior;
    void shareItemSource;
}

- (void).cxx_destruct;
- (Class)classForPage;
- (void)dealloc;
- (void)didTapDone;
- (void)didTapShare:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
