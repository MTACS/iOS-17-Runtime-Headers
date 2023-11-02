
@interface PKPassDetailSharesSectionController : PKPaymentPassDetailSectionController <PKSharedPassSharesControllerDelegate> {
    <PKPassDetailSharesSectionControllerDelegate> * _delegate;
    bool  _hasLoadedInitialData;
    bool  _mapped;
    PKSharedPassSharesController * _sharesController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPassDetailSharesSectionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKSharedPassSharesController *sharesController;
@property (readonly) Class superclass;

+ (bool)validForPaymentPass:(id)arg1;

- (void).cxx_destruct;
- (void)_updateSectionIdentifiersNotify:(bool)arg1;
- (id)allSectionIdentifiers;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithSharesController:(id)arg1 delegate:(id)arg2;
- (void)preflight:(id /* block */)arg1;
- (id)sectionIdentifiers;
- (void)setDelegate:(id)arg1;
- (void)sharedPassSharesControllerDidUpdateShares:(id)arg1;
- (id)sharesController;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSectionIdentifier:(id)arg2;

@end
