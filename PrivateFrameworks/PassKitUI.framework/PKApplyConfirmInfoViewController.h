
@interface PKApplyConfirmInfoViewController : PKApplyCollectionViewController <PKApplyConfirmInfoSectionControllerDelegate> {
    PKApplyConfirmInfoSectionController * _sectionController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_continueAction;
- (id)additionalAnalyticsDictionaryForViewAppearing:(bool)arg1;
- (void)didSelectActionItem:(id)arg1;
- (id)initWithController:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 applyPage:(id)arg4;
- (id)pageTag;
- (void)viewDidLoad;

@end
