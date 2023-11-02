
@interface PKPayLaterFinancingPlanCancellationViewController : PKPayLaterViewController <PKPayLaterFinancingPlanCancellationSectionControllerDelegate> {
    PKPayLaterDynamicContentPage * _dynamicContentPage;
    PKPayLaterFinancingPlan * _financingPlan;
    UIBarButtonItem * _rightbarButton;
    PKPayLaterFinancingPlanCancellationSectionController * _sectionController;
    PKPayLaterDynamicContentPageItem * _selectedReason;
    bool  _shouldLoadCancellationReasons;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)planCancellationReasonsDynamincContentForPayLaterAccount:(id)arg1 financingPlan:(id)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_cancelButtonTapped;
- (void)_preflightIfNecessary;
- (void)_submitButtonTapped;
- (void)_updateRightBarButtonEnabledState;
- (void)_updateView;
- (void)didSelectCancellationRow:(id)arg1;
- (id)initWithPayLaterAccount:(id)arg1 financingPlan:(id)arg2 dynamicContentPage:(id)arg3;
- (void)viewDidLoad;

@end
