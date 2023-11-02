
@interface PKApplyFocusedPickerViewController : PKDynamicCollectionViewController <PKApplyCollectionViewSectionControllerDelegate> {
    <PKApplyCollectionViewSectionControllerDelegate> * _dynamicCollectionDelegate;
    PKPaymentSetupFieldPicker * _picker;
    PKApplyListPickerSectionController * _pickerSectionController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <PKApplyCollectionViewSectionControllerDelegate> *dynamicCollectionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_recomputeSections;
- (void)didSelectCell;
- (id)dynamicCollectionDelegate;
- (id)initWithPicker:(id)arg1;
- (void)recomputeSectionsWithReload:(bool)arg1;
- (void)reloadDataAnimated:(bool)arg1;
- (void)setDynamicCollectionDelegate:(id)arg1;
- (void)viewDidLoad;

@end
