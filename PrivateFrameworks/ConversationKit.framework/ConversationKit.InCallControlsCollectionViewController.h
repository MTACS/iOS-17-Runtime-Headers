
@interface ConversationKit.InCallControlsCollectionViewController : UIViewController <UICollectionViewDelegate> {
    void activeRemoteParticipantsCount;
    void activity;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  activityCellRegistration;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  addParticipantCellRegistration;
    void capabilitiesChecker;
    void collectionView;
    void controlsManager;
    void conversation;
    void dataSource;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  fallbackCellRegistration;
    void gridLayoutStyle;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  ignoreLMIRequestsCellRegistration;
    void inCallControlsCollectionViewControllerDelegate;
    void isLegacy;
    void isOnScreen;
    void menuHostViewController;
    void mode;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  openMessagesCellRegistration;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  participantCellRegistration;
    void participants;
    void participantsViewControllerDelegate;
    void remoteAudioPaused;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  sectionHeaderViewRegistration;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  shareLinkCellRegistration;
    void shareLinkEnabled;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  statusCellRegistration;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  titleCellRegistration;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  toggleCaptionsCellRegistration;
    void updateDataSourceDebouncer;
    void updateDataSourceNeedsAnimatedDifferences;
    void updateDataSourceNeedsRefreshParticipants;
    void updateDataSourceSubject;
    void updatedCapabilitiesWithParticipants;
}

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)handleContentSizeCategoryDidChange:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;

@end
