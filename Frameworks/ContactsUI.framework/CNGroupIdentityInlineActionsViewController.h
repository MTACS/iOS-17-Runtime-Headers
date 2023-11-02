
@interface CNGroupIdentityInlineActionsViewController : UIViewController <CNContactInlineActionsViewControllerDelegate_Internal, CNGroupIdentityActionItemDelegate, CNUIObjectViewControllerDelegate> {
    CNGroupIdentityInlineActionsViewConfiguration * _configuration;
    <CNGroupIdentityInlineActionsViewControllerDelegate> * _delegate;
    CNGroupIdentity * _group;
    CNContactInlineActionsViewController * _inlineActionsViewController;
}

@property (nonatomic, readonly) CNGroupIdentityInlineActionsViewConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNGroupIdentityInlineActionsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CNGroupIdentity *group;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CNContactInlineActionsViewController *inlineActionsViewController;
@property (nonatomic, readonly) long long style;
@property (readonly) Class superclass;

+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (id)actionsContainerView;
- (id)actionsView;
- (double)actionsViewHeightThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)configuration;
- (bool)contactInlineActionsViewController:(id)arg1 canPerformGroupActionOfType:(id)arg2;
- (void)contactInlineActionsViewController:(id)arg1 didPerformActionOfType:(id)arg2 fromDisambiguation:(bool)arg3;
- (void)contactInlineActionsViewController:(id)arg1 didSelectActionOfType:(id)arg2;
- (bool)contactInlineActionsViewController:(id)arg1 overrideEnabledStateForActionOfType:(id)arg2;
- (id)contactInlineActionsViewController:(id)arg1 overrideImageForActionOfType:(id)arg2;
- (id)contactInlineActionsViewController:(id)arg1 overrideTitleForActionOfType:(id)arg2;
- (bool)contactInlineActionsViewController:(id)arg1 shouldOverrideEnabledStateForActionOfType:(id)arg2;
- (bool)contactInlineActionsViewController:(id)arg1 shouldPresentDisambiguationUIForActionOfType:(id)arg2;
- (void)contactInlineActionsViewController:(id)arg1 willPresentDisambiguationUIForActionType:(id)arg2;
- (id)delegate;
- (id)group;
- (void)groupIdentityActionItem:(id)arg1 didUpdateActionBlock:(id /* block */)arg2;
- (void)groupIdentityActionItem:(id)arg1 didUpdateOverrideEnabledState:(bool)arg2;
- (id)hostingViewControllerForController:(id)arg1;
- (id)initWithGroupIdentity:(id)arg1 actionsViewConfiguration:(id)arg2;
- (id)inlineActionsViewController;
- (void)setDelegate:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setInlineActionsViewController:(id)arg1;
- (void)setupActionsView;
- (bool)shouldOverrideEnabledStateForActionItem:(id)arg1;
- (long long)style;
- (void)updateActionsViewForUpdatedActionItem:(id)arg1;
- (void)viewDidLoad;
- (id)viewForActionAtIndex:(unsigned long long)arg1;

@end
