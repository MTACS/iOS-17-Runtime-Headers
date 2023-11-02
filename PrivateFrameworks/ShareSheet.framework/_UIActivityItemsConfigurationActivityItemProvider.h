
@interface _UIActivityItemsConfigurationActivityItemProvider : UIActivityItemProvider {
    <UIActivityItemsConfigurationReading> * _activityItemsConfiguration;
    id  _item;
    LPLinkMetadata * _linkMetadata;
    long long  _sourceIndex;
}

- (void).cxx_destruct;
- (id)_title;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewControllerLinkMetadata:(id)arg1;
- (id)initWithActivityItemsConfiguration:(id)arg1 itemAtSourceIndex:(long long)arg2;
- (id)item;

@end
