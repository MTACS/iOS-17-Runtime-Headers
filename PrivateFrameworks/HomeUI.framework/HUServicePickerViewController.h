
@interface HUServicePickerViewController : HUSelectableServiceGridViewController {
    bool  _isPresentedModally;
    NSSet * _preselectedServices;
}

@property (nonatomic) <HUServicePickerViewControllerDelegate> *delegate;
@property (nonatomic) bool isPresentedModally;
@property (nonatomic, retain) NSSet *preselectedServices;

- (void).cxx_destruct;
- (void)_cancel:(id)arg1;
- (void)_done:(id)arg1;
- (bool)_isItemPreselected:(id)arg1;
- (bool)_preselectedServicesContainsService:(id)arg1;
- (id)_servicesForItem:(id)arg1;
- (id)_servicesForItems:(id)arg1;
- (void)_setUpNavButtons;
- (id)initWithHome:(id)arg1 isPresentedModally:(bool)arg2 delegate:(id)arg3;
- (id)initWithHome:(id)arg1 selectedServices:(id)arg2 isPresentedModally:(bool)arg3 delegate:(id)arg4;
- (bool)isPresentedModally;
- (void)itemManagerDidUpdate:(id)arg1;
- (id)preselectedServices;
- (bool)serviceGridItemManager:(id)arg1 shouldHideItem:(id)arg2;
- (void)setIsPresentedModally:(bool)arg1;
- (void)setPreselectedServices:(id)arg1;
- (void)viewDidLoad;

@end
