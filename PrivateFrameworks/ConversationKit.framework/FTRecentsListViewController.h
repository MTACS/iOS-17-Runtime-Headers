
@interface FTRecentsListViewController : UIViewController <SCUIInterventionViewControllerDelegate, UICollectionViewDelegate, UIScrollViewDelegate> {
    void $__lazy_storage_$_avatarViewControllerDelegate;
    void $__lazy_storage_$_callCreator;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  $__lazy_storage_$_cellBackgroundConfiguration;
    void $__lazy_storage_$_cellProvider;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  $__lazy_storage_$_collectionLayoutConfiguration;
    void $__lazy_storage_$_collectionView;
    void $__lazy_storage_$_dataSource;
    void $__lazy_storage_$_deleteButtonItem;
    void $__lazy_storage_$_flexibleSpaceButtonItem;
    void $__lazy_storage_$_linkController;
    void $__lazy_storage_$_reportSpamManager;
    void $__lazy_storage_$_supplementaryViewProvider;
    void avatarViewControllerSettings;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  cellRegistrationForRecentsCallItemCalls;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  cellRegistrationForRecentsCallItemLinks;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  cellRegistrationForRecentsCallItemOngoingCalls;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  cellRegistrationForRecentsSensitveCallItemCalls;
    void conversationManager;
    void dataSourceLoadSink;
    void detailControllerFactory;
    void featureFlags;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  headerButtonsViewRegistration;
    void headerView;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  indexPathForMenu;
    void linkCoordinator;
    void meCardSharingSettingsViewControllerObserver;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  messageUUIDForDeferredPresentation;
    void onboardingController;
    void pseudonymForDeferredLinkDetailPresentation;
    void recentCallProvider;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  sectionHeaderViewRegistrationForSupplementalView;
}

- (void).cxx_destruct;
- (void)accessibilityPrepareHeaderView:(id)arg1;
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)deleteButtonAction:(id)arg1;
- (void)didConfirmForInterventionViewController:(id)arg1;
- (void)didEnterBackgroundNotification:(id)arg1;
- (void)didRejectForInterventionViewController:(id)arg1;
- (void)didSelectAccessoryViewForLinkWithSender:(id)arg1;
- (void)didSelectAccessoryViewForOngoingCallWithSender:(id)arg1;
- (void)didSelectAccessoryViewForRecentCallWithSender:(id)arg1;
- (void)didTapNewCallButton;
- (void)didTapNewLinkButtonFrom:(id)arg1;
- (void)dismissContactsModal;
- (void)dismissMoreHelp;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)startEditing;
- (void)stopEditing;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)willEnterForegroundNotification:(id)arg1;

@end
