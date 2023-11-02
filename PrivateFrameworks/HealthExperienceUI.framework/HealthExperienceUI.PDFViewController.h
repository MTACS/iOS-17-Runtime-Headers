
@interface HealthExperienceUI.PDFViewController : UIViewController <PDFDocumentDelegate> {
    void delegate;
    void pageNumberFormat;
    void pdfData;
    void pdfDocument;
    void pdfFilename;
    void shareItemSource;
}

- (void).cxx_destruct;
- (Class)classForPage;
- (void)didTapDone;
- (void)didTapShare:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)viewWillAppear:(bool)arg1;

@end
