
@interface ConversationKit.ParticipantListViewController : UIViewController <UICollectionViewDelegate> {
    void collectionViewDataSource;
    void lastLayedOutViewSize;
    void participantListLayout;
    void participantListViewControllerDelegate;
    void participantsViewControllerDelegate;
    void viewContent;
}

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)accessibilityParticipantCollectionView;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
