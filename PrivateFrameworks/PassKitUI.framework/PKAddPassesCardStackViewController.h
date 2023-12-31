
@interface PKAddPassesCardStackViewController : UIViewController <PKGroupsControllerDelegate, PKPassGroupStackViewDatasource, PKPassGroupStackViewDelegate, PKPassPersonalizationViewControllerDelegate, PKPaymentSetupViewControllerDelegate, UIScrollViewDelegate> {
    <PKAddPassesCardStackViewControllerDelegate> * _delegate;
    PKGroupsController * _groupsController;
    NSArray * _passDataArray;
    PKPassGroupStackView * _passGroupStackView;
    NSArray * _passes;
    PKPassesXPCContainer * _passesContainer;
    NSString * _personalizatonToken;
    unsigned long long  _presentationSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKAddPassesCardStackViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addButtonPressed:(id)arg1;
- (void)_addPassesWithCompletion:(id /* block */)arg1;
- (void)_cancelButtonPressed:(id)arg1;
- (void)_configureAddOrNextButtonItemAsPending:(bool)arg1;
- (void)_configureNavigationItemTitle;
- (void)_nextButtonPressedForPersonalization:(id)arg1;
- (bool)areGroupsSeparated;
- (void)dealloc;
- (id)delegate;
- (void)evaluateBrightness;
- (id)groupAtIndex:(unsigned long long)arg1;
- (void)groupStackView:(id)arg1 deleteConfirmedForPass:(id)arg2;
- (void)groupStackView:(id)arg1 didTransitionToState:(long long)arg2 animated:(bool)arg3;
- (void)groupStackViewDidBeginReordering:(id)arg1;
- (void)groupStackViewDidEndReordering:(id)arg1;
- (void)groupsController:(id)arg1 didInsertGroup:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)groupsController:(id)arg1 didMoveGroup:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)groupsController:(id)arg1 didRemoveGroup:(id)arg2 atIndex:(unsigned long long)arg3;
- (bool)hasDiscoveryContent;
- (unsigned long long)indexOfGroup:(id)arg1;
- (unsigned long long)indexOfSeparationGroup;
- (id)initWithPasses:(id)arg1 orPassesContainer:(id)arg2 fromPresentationSource:(unsigned long long)arg3;
- (bool)isInField;
- (unsigned long long)numberOfGroups;
- (void)passPersonalizationViewController:(id)arg1 didFinishPersonalizingPass:(id)arg2 success:(bool)arg3;
- (void)reloadGroupsForGroupStackView:(id)arg1;
- (void)resetBrightness;
- (void)setDelegate:(id)arg1;
- (bool)supportsExternalPresentation;
- (unsigned long long)suppressedContent;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
