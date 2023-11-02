
@interface PKAuxiliaryPassInformationDataSource : NSObject <PKDashboardDataSource> {
    bool  _contentIsLoaded;
    <PKDashboardDataSourceDelegate> * _delegate;
    NSIndexPath * _headerIndexPath;
    PKPassAuxiliaryPassInformationItem * _item;
    PKMerchant * _merchant;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *footerSecondaryText;
@property (nonatomic, readonly) NSString *footerSecondaryTitle;
@property (nonatomic, readonly) NSString *footerText;
@property (nonatomic, readonly) NSString *footerTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSIndexPath *headerIndexPath;
@property (nonatomic, readonly) PKPassAuxiliaryPassInformationItem *item;
@property (nonatomic, readonly) PKMerchant *merchant;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_headerItem;
- (bool)_isDynamicSection:(long long)arg1;
- (void)_loadMerchantForPassUniqueID:(id)arg1;
- (void)_notifyContentLoadedIfNecessary;
- (id)footerSecondaryText;
- (id)footerSecondaryTitle;
- (id)footerText;
- (id)footerTextItemForSection:(unsigned long long)arg1;
- (id)footerTitle;
- (id)headerIndexPath;
- (id)initWithItem:(id)arg1 forPass:(id)arg2;
- (id)item;
- (id)itemAtIndexPath:(id)arg1;
- (id)merchant;
- (id)navigationBarTitle;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (void)setDataSourceDelegate:(id)arg1;
- (id)titleForSection:(unsigned long long)arg1;

@end
