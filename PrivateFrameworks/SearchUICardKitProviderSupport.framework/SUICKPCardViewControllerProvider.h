
@interface SUICKPCardViewControllerProvider : NSObject <CRKCardSectionViewControllerDelegate, CRKCardViewControllerProviding, SearchUICardViewDelegate, SearchUIFeedbackDelegate> {
    NSMutableDictionary * _cardViewControllersByCardIdentifiers;
    NSMutableDictionary * _cardsByCardSectionIdentifiers;
    NSMutableDictionary * _feedbackDelegateDemultiplexersByCardIdentifiers;
    NSMutableArray * _pendingDismissalCommands;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredContentSize;
    long long  _preferredPunchoutIndex;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *feedbackDelegateDemultiplexersByCardIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_askDelegateToPerformReferentialCommand:(id)arg1 forCardSection:(id)arg2;
- (id)_cardViewControllerForCardSection:(id)arg1;
- (id)_createCardViewControllerForCard:(id)arg1;
- (struct CGSize { double x1; double x2; })boundingSizeForCardSectionViewController:(id)arg1;
- (void)cardSectionView:(id)arg1 willProcessEngagementFeedback:(id)arg2;
- (void)cardSectionViewController:(id)arg1 didSelectPreferredPunchoutIndex:(long long)arg2;
- (void)cardSectionViewDidAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)cardSectionViewDidDisappearForCardSection:(id)arg1 withDisappearanceFeedback:(id)arg2;
- (void)cardSectionViewWillAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)cardViewController:(id)arg1 preferredContentSizeDidChange:(struct CGSize { double x1; double x2; })arg2 animated:(bool)arg3;
- (id)cardViewControllerForCard:(id)arg1;
- (id)customInteractionsForCardSection:(id)arg1;
- (id)customLayerForCardSection:(id)arg1;
- (id)customViewControllerForCardSection:(id)arg1;
- (unsigned long long)displayPriorityForCard:(id)arg1;
- (id)extractLinkID:(id)arg1;
- (id)feedbackDelegateDemultiplexersByCardIdentifiers;
- (id)init;
- (bool)performCommand:(id)arg1 forCardSectionViewController:(id)arg2;
- (long long)preferredPunchoutIndexForCardSectionViewController:(id)arg1;
- (void)presentViewController:(id)arg1;
- (void)presentViewController:(id)arg1 forCardSectionViewController:(id)arg2;
- (void)presentation:(id)arg1 didApplyCardSectionViewSource:(id)arg2 toCardViewController:(id)arg3;
- (void)setFeedbackDelegateDemultiplexersByCardIdentifiers:(id)arg1;
- (void)unregisterCardViewController:(id)arg1;
- (void)userDidEngageCardSection:(id)arg1 withEngagementFeedback:(id)arg2;

@end
