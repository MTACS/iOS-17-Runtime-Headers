
@interface WDElectrocardiogramPDFViewController : UIViewController <UIInterfaceOrientationMaskOverride> {
    NSString * _firstName;
    NSString * _lastName;
    NSData * _pdfData;
    PDFDocument * _pdfDocument;
    NSDate * _sampleDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *firstName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) NSData *pdfData;
@property (nonatomic, readonly) PDFDocument *pdfDocument;
@property (nonatomic, readonly) PDFView *pdfView;
@property (nonatomic, readonly) NSDate *sampleDate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didTapDone;
- (void)didTapShare:(id)arg1;
- (id)firstName;
- (id)initWithPDFData:(id)arg1 sampleDate:(id)arg2 firstName:(id)arg3 lastName:(id)arg4;
- (id)lastName;
- (void)loadView;
- (unsigned long long)overrideMask;
- (id)pdfData;
- (id)pdfDocument;
- (id)pdfView;
- (id)sampleDate;

@end
