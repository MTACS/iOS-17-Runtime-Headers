
@interface _SFPrintActivityItemProvider : _SFActivityItemProvider <UIActivityItemsSource> {
    bool  _canVendPDFRepresentation;
    bool  _hasReservedPrintInteractionController;
    LPFileMetadata * _linkPreviewFileMetadata;
    NSItemProvider * _pdfItemProvider;
    _SFPrintController * _printController;
    UIPrintPageRenderer * _printPageRenderer;
}

@property (nonatomic) bool canVendPDFRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasReservedPrintInteractionController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSItemProvider *pdfItemProvider;
@property (nonatomic, readonly) _SFPrintController *printController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2;
- (id)activityViewControllerLinkMetadata:(id)arg1;
- (id)activityViewControllerPlaceholderItems:(id)arg1;
- (bool)canVendPDFRepresentation;
- (bool)hasReservedPrintInteractionController;
- (id)initWithPrintController:(id)arg1 webView:(id)arg2;
- (id)item;
- (id)pdfItemProvider;
- (id)printController;
- (void)setCanVendPDFRepresentation:(bool)arg1;

@end
