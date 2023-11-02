
@interface SKUIShareTemplateActivityViewController : UIActivityViewController {
    SKUIClientContext * _clientContext;
    SKUIShareTemplateViewElement * _templateElement;
}

- (void).cxx_destruct;
- (id)_activityItemsWithTemplateElement:(id)arg1 clientContext:(id)arg2;
- (id)_applicationActivitiesWithTemplateElement:(id)arg1 clientContext:(id)arg2;
- (id)_titleForActivity:(id)arg1;
- (id)initWithTemplateElement:(id)arg1 clientContext:(id)arg2;

@end
