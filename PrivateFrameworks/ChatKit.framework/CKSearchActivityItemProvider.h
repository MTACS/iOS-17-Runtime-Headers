
@interface CKSearchActivityItemProvider : UIActivityItemProvider {
    LPLinkMetadata * _metadata;
    id  _payload;
}

@property (nonatomic, retain) LPLinkMetadata *metadata;
@property (nonatomic, retain) id payload;

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerLinkMetadata:(id)arg1;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)initWithPlaceholderItem:(id)arg1 metadata:(id)arg2;
- (id)item;
- (id)metadata;
- (id)payload;
- (void)setMetadata:(id)arg1;
- (void)setPayload:(id)arg1;

@end
