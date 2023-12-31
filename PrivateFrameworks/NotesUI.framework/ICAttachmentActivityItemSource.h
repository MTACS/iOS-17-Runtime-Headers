
@interface ICAttachmentActivityItemSource : NSObject <UIActivityItemSource, UIActivityItemSourceAttachment> {
    ICAttachment * _attachment;
}

@property (nonatomic) ICAttachment *attachment;
@property (nonatomic, readonly, copy) NSString *attachmentTypeUTI;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 attachmentNameForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)attachment;
- (id)attachmentTypeUTI;
- (id)initWithAttachment:(id)arg1;
- (void)setAttachment:(id)arg1;

@end
