
@interface SKUIProductPageActivityViewController : UIActivityViewController {
    SKUIClientContext * _clientContext;
}

- (void).cxx_destruct;
- (id)_activityItemsForProductPageItem:(id)arg1 clientContext:(id)arg2;
- (id)_activityItemsForProductPageItemProvider:(id /* block */)arg1 clientContext:(id)arg2;
- (id)_applicationActivitiesForProductPageItem:(id)arg1 clientContext:(id)arg2;
- (id)_titleForActivity:(id)arg1;
- (id)initWithProductPageItem:(id)arg1 clientContext:(id)arg2;

@end
