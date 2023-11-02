
@interface RTTUIActivityItemProvider : UIActivityItemProvider {
    NSAttributedString * _transcript;
}

@property (nonatomic, retain) NSAttributedString *transcript;

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerLinkMetadata:(id)arg1;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (void)setTranscript:(id)arg1;
- (id)transcript;

@end
