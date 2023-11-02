
@interface WDElectrocardiogramActivityItemSource : NSObject <UIActivityItemSource> {
    NSURL * _pdfTemporaryFileURL;
    unsigned long long  _provenance;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSURL *pdfTemporaryFileURL;
@property (nonatomic) unsigned long long provenance;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (void)dealloc;
- (id)initWithPDFData:(id)arg1 sampleDate:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 provenance:(unsigned long long)arg5;
- (id)pdfFileNameForSampleDate:(id)arg1 firstName:(id)arg2 lastName:(id)arg3;
- (id)pdfTemporaryFileURL;
- (unsigned long long)provenance;
- (void)setProvenance:(unsigned long long)arg1;

@end
