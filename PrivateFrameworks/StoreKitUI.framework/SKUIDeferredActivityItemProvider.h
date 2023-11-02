
@interface SKUIDeferredActivityItemProvider : UIActivityItemProvider {
    SKUIClientContext * _clientContext;
    id /* block */  _itemProvider;
    SKUIProductPageItem * _productPageItem;
}

@property (retain) SKUIClientContext *clientContext;
@property (copy) id /* block */ itemProvider;
@property (readonly, copy) SKUIProductPageItem *productPageItem;

+ (id)placeholderItem;

- (void).cxx_destruct;
- (id)clientContext;
- (id)initWithProductPageItem:(id)arg1 clientContext:(id)arg2;
- (id)initWithProductPageItemProvider:(id /* block */)arg1 clientContext:(id)arg2;
- (id)initWithProductPageItemProvider:(id /* block */)arg1 clientContext:(id)arg2 placeholderItem:(id)arg3;
- (id /* block */)itemProvider;
- (id)productPageItem;
- (void)setClientContext:(id)arg1;
- (void)setItemProvider:(id /* block */)arg1;

@end
