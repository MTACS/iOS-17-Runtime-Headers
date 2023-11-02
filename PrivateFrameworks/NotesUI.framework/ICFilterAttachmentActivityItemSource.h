
@interface ICFilterAttachmentActivityItemSource : NSObject <UIActivityItemSource, UIActivityItemSourceAttachment> {
    id  _attachmentItem;
}

@property (nonatomic, retain) id attachmentItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityItemSourceForSelector:(SEL)arg1;
- (id)activityViewController:(id)arg1 attachmentNameForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)attachmentItem;
- (id)initAttachmentItem:(id)arg1;
- (void)setAttachmentItem:(id)arg1;

@end
