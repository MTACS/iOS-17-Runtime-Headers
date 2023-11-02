
@interface PKDashboardBarcodePassDataSource : NSObject <PKDashboardPassDataSource, PKSecureElementObserver> {
    <PKDashboardDataSourceDelegate> * _delegate;
    PKGroup * _group;
    PKPassGroupView * _groupView;
    NSOrderedSet * _messages;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PKPassGroupView *groupView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_messageForIssuerBinding;
- (void)_reloadMessages;
- (void)dealloc;
- (id)footerTextItemForSection:(unsigned long long)arg1;
- (id)groupView;
- (void)groupViewDidChangeFrontmostPassView:(id)arg1 withContext:(id)arg2;
- (void)groupViewDidUpdatePassView:(id)arg1;
- (id)initWithGroupView:(id)arg1 context:(id)arg2;
- (id)itemAtIndexPath:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (void)reloadData;
- (void)reloadMessages;
- (void)sendContentIsLoadedIfNecessary;
- (void)setDataSourceDelegate:(id)arg1;
- (id)titleForSection:(unsigned long long)arg1;

@end
