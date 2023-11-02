
@interface VUIShareURLActivityItem : NSObject <UIActivityItemLinkPresentationSource, UIActivityItemSource> {
    NSURL * _imageURL;
    NSItemProvider * _itemProvider;
    NSURL * _shareURL;
    NSString * _subtitle;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSURL *shareURL;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerLinkPresentationMetadata:(id)arg1;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)initWithURL:(id)arg1 title:(id)arg2 subtitle:(id)arg3 imageURL:(id)arg4;
- (id)shareURL;

@end
