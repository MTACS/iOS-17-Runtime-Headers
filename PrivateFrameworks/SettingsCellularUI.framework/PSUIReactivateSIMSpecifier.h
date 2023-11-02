
@interface PSUIReactivateSIMSpecifier : PSSpecifier <PSUIReActivateSIMSpecifierModelDelegate> {
    PSListController * _hostController;
    id  _originAccessoryView;
    id  _planItem;
    UIActivityIndicatorView * _spinner;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property PSListController *hostController;
@property (retain) id originAccessoryView;
@property (retain) id planItem;
@property (retain) UIActivityIndicatorView *spinner;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activateSIMPressed:(id)arg1;
- (void)_hideSpinner;
- (void)_showSpinner;
- (id)getLogger;
- (id)hostController;
- (id)initWithPlanUniversalReference:(id)arg1 hostController:(id)arg2;
- (id)originAccessoryView;
- (id)planItem;
- (void)setHostController:(id)arg1;
- (void)setOriginAccessoryView:(id)arg1;
- (void)setPlanItem:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (void)setSpinner:(id)arg1;
- (id)spinner;
- (void)transferBackCanceled:(id)arg1;
- (void)transferBackFailed:(id)arg1 error:(id)arg2;
- (void)transferBackSuccessFrom:(id)arg1 to:(id)arg2;

@end
