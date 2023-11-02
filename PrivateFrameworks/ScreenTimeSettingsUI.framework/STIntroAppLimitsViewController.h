
@interface STIntroAppLimitsViewController : STTableWelcomeController {
    id /* block */  _continueHandler;
    STIntroductionViewModel * _model;
    OBBoldTrayButton * _setAppLimitButton;
}

@property (readonly, copy) id /* block */ continueHandler;
@property (readonly) STIntroductionViewModel *model;
@property (retain) OBBoldTrayButton *setAppLimitButton;
@property (nonatomic, retain) STIntroAppLimitsTableViewController *tableViewController;

- (void).cxx_destruct;
- (void)_allowanceSelectedCategoriesDidChange:(id)arg1;
- (void)_allowanceTimeDidChange:(id)arg1;
- (void)_notNow:(id)arg1;
- (void)_setAppLimit:(id)arg1;
- (void)_updateSetAppLimitButtonWithTime:(id)arg1 selectedCategories:(id)arg2;
- (id /* block */)continueHandler;
- (void)dealloc;
- (id)initWithIntroductionModel:(id)arg1 continueHandler:(id /* block */)arg2;
- (void)loadView;
- (id)model;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)setAppLimitButton;
- (void)setSetAppLimitButton:(id)arg1;
- (void)setTableViewController:(id)arg1;
- (id)tableViewController;

@end
