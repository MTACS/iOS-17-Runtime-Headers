
@interface MKPlaceHeaderButtonsViewController : MKPlaceSectionViewController <MKETAProviderObserver, MKModuleViewControllerProtocol, MKStackingViewControllerFixedHeightAware> {
    UIButton<_MKPlaceActionControlledButton> * _alternatePrimaryButton;
    _MKPlaceActionButtonController * _alternatePrimaryButtonController;
    NSArray * _buttons;
    MKPlaceSectionRowView * _buttonsContainerView;
    NSArray * _constraints;
    NSMutableAttributedString * _currentETAString;
    <MKPlaceHeaderButtonsViewControllerDelegate> * _delegate;
    <GEOTransitLineItem> * _lineItem;
    <_MKPlaceItem> * _placeItem;
    UIButton<_MKPlaceActionControlledButton> * _primaryButton;
    unsigned long long  _primaryButtonType;
    bool  _resizableViewsDisabled;
    UIButton<_MKPlaceActionControlledButton> * _secondaryButton;
    _MKPlaceActionButtonController * _secondaryButtonController;
}

@property (nonatomic, retain) _MKPlaceActionButtonController *alternatePrimaryButtonController;
@property (nonatomic, readonly) NSArray *buttons;
@property (nonatomic, readonly) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKPlaceHeaderButtonsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <GEOTransitLineItem> *lineItem;
@property (nonatomic, retain) <_MKPlaceItem> *placeItem;
@property (nonatomic) unsigned long long primaryButtonType;
@property (nonatomic) bool resizableViewsDisabled;
@property (nonatomic, retain) _MKPlaceActionButtonController *secondaryButtonController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)ETAProviderUpdated:(id)arg1;
- (bool)_canShowWhileLocked;
- (void)_commonInit;
- (void)_contentSizeDidChange;
- (id)alternatePrimaryButtonController;
- (id)attributedStringWith:(id)arg1;
- (id)buttons;
- (id)contentView;
- (id)delegate;
- (id)directionAttributedStringWithETAString;
- (id)etaStringFor:(unsigned long long)arg1 travelTime:(double)arg2;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (id)init;
- (id)lineItem;
- (id)placeItem;
- (id)primaryAttributedString;
- (void)primaryButtonSelected:(id)arg1;
- (unsigned long long)primaryButtonType;
- (id)rerouteAttributedString;
- (bool)resizableViewsDisabled;
- (id)secondaryButtonController;
- (void)setAlternatePrimaryButtonController:(id)arg1;
- (void)setConstraints;
- (void)setDelegate:(id)arg1;
- (void)setLineItem:(id)arg1;
- (void)setPlaceItem:(id)arg1;
- (void)setPrimaryButtonType:(unsigned long long)arg1;
- (void)setResizableViewsDisabled:(bool)arg1;
- (void)setSecondaryButtonController:(id)arg1;
- (void)setupPrimaryButton;
- (bool)shouldStackForButtons:(id)arg1;
- (id)updateButton:(id)arg1 withController:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
