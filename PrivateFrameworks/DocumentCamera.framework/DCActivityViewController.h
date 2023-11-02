
@interface DCActivityViewController : UIActivityViewController {
    ICDocCamDocumentInfoCollection * _documentInfoCollection;
    bool  _ignoreAttachmentsForCopyToPasteboard;
    ICDocCamImageCache * _imageCache;
}

@property (nonatomic, retain) ICDocCamDocumentInfoCollection *documentInfoCollection;
@property (nonatomic) bool ignoreAttachmentsForCopyToPasteboard;
@property (nonatomic, retain) ICDocCamImageCache *imageCache;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_performActivity:(id)arg1;
- (id)activityTypesThatInhibitPDFGeneration;
- (id)documentInfoCollection;
- (bool)ignoreAttachmentsForCopyToPasteboard;
- (id)imageCache;
- (bool)inhibitPDFGenerationForActivityType:(id)arg1;
- (void)setDocumentInfoCollection:(id)arg1;
- (void)setIgnoreAttachmentsForCopyToPasteboard:(bool)arg1;
- (void)setImageCache:(id)arg1;
- (bool)writeGalleryPDFDataToPasteboardIfNecessaryForActivity:(id)arg1 documentInfoCollection:(id)arg2;

@end
