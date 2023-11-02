
@interface PKActivityItemProvider : UIActivityItemProvider {
    PKLinkedApplication * _linkedApp;
    PKPass * _pass;
    PKPassView * _passView;
    long long  _sharingMethod;
}

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize { double x1; double x2; })arg3;
- (id)activityViewControllerLinkMetadata:(id)arg1;
- (id)initWithPass:(id)arg1 passView:(id)arg2 linkedApp:(id)arg3 sharingMethod:(long long)arg4;
- (id)item;

@end
