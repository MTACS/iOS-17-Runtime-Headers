
@interface PKPassShareActivationOverviewViewController : UIViewController <PKPassShareActivationExternalKeyEducationViewDelegate, PKPassShareActivationShareActivationCodeViewDelegate> {
    PKPassShareActivationOptions * _activationOptions;
    UIView * _contentView;
    <PKPassShareActivationOverviewViewControllerDelegate> * _delegate;
    PKCollapsibleHeaderView * _headerView;
    bool  _isFinalScreen;
    PKContact * _recipient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)closeButtonPressed;
- (void)externalKeyEdicationViewDidSelectNext:(id)arg1;
- (id)init;
- (id)initWithActivationOptions:(id)arg1 recipient:(id)arg2 isFinalScreen:(bool)arg3 delegate:(id)arg4;
- (void)loadView;
- (void)shareActivationCodeViewDidSelectCopy:(id)arg1;
- (void)shareActivationCodeViewDidSelectPhone:(id)arg1;
- (void)shareActivationCodeViewDidSelectShare:(id)arg1;
- (void)viewWillLayoutSubviews;

@end
