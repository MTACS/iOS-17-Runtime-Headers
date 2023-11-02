
@interface DCActivityItemSource : NSObject <UIActivityItemSource, UIActivityItemSourceAttachment> {
    ICDocCamDocumentInfoCollection * _docInfoCollection;
}

@property (nonatomic, readonly, copy) NSString *attachmentTypeUTI;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) ICDocCamDocumentInfoCollection *docInfoCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 attachmentNameForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)attachmentTypeUTI;
- (id)docInfoCollection;
- (id)initWithDocumentInfoCollection:(id)arg1;
- (void)setDocInfoCollection:(id)arg1;

@end
