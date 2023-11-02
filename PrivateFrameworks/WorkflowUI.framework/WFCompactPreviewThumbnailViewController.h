
@interface WFCompactPreviewThumbnailViewController : WFCompactThumbnailViewController {
    WFContentItem * _contentItem;
    UIView * _hostedView;
}

@property (nonatomic, readonly) WFContentItem *contentItem;
@property (nonatomic) UIView *hostedView;

- (void).cxx_destruct;
- (double)contentHeightForWidth:(double)arg1;
- (id)contentItem;
- (id)hostedView;
- (id)initWithContentItem:(id)arg1;
- (void)loadView;
- (unsigned long long)preferredContentMode;
- (void)setHostedView:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
