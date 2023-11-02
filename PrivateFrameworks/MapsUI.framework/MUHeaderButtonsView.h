
@interface MUHeaderButtonsView : UIView <MKETAProviderObserver> {
    MUPlaceHeaderButton * _alternatePrimaryButton;
    _MKPlaceActionButtonController * _alternatePrimaryButtonController;
    MUHeaderButtonsViewConfiguration * _configuration;
    NSArray * _constraints;
    <MUHeaderButtonsViewDelegate> * _delegate;
    MKETAProvider * _etaProvider;
    bool  _isStackingButtons;
    MUPlaceHeaderButton * _moreButton;
    MUPlaceHeaderButton * _primaryButton;
    unsigned long long  _primaryButtonType;
    MUPlaceHeaderButton * _secondaryButton;
    _MKPlaceActionButtonController * _secondaryButtonController;
}

@property (nonatomic, retain) _MKPlaceActionButtonController *alternatePrimaryButtonController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MUHeaderButtonsViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long primaryButtonType;
@property (nonatomic, retain) _MKPlaceActionButtonController *secondaryButtonController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)ETAProviderUpdated:(id)arg1;
- (void)_activateNewConstraints:(id)arg1;
- (void)_createLayout;
- (void)_didTapAlternatePrimaryAction;
- (void)_didTapMoreButton;
- (void)_didTapPrimaryAction;
- (void)_didTapSecondaryAction;
- (void)_loadPrimaryButtonWithPrimaryType:(unsigned long long)arg1;
- (void)_loadSecondaryButtonWithSecondaryActionController:(id)arg1;
- (void)_setupSubviews;
- (void)_updateConstraintsIfNeeded;
- (void)_updateContent;
- (id)alternatePrimaryButtonController;
- (id)delegate;
- (id)initWithConfiguration:(id)arg1;
- (void)layoutSubviews;
- (unsigned long long)primaryButtonType;
- (id)secondaryButtonController;
- (void)setAlternatePrimaryButtonController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPrimaryButtonType:(unsigned long long)arg1;
- (void)setSecondaryButtonController:(id)arg1;
- (bool)shouldStackForButtons;

@end
