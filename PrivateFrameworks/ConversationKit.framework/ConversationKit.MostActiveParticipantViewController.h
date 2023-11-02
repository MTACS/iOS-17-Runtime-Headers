
@interface ConversationKit.MostActiveParticipantViewController : UIViewController {
    void $__lazy_storage_$_flashView;
    void $__lazy_storage_$_insulatingView;
    void $__lazy_storage_$_localParticipantView;
    void $__lazy_storage_$_remoteParticipantView;
    void defaults;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  focusedParticipant;
    void frontBoardInterfaceOrientation;
    void hasInitializedMomentsViews;
    void ignoreFocusedParticipantUpdates;
    void isLocalMemberAuthorizedToChangeGroupMembership;
    void isVisibleInPIP;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  localParticipant;
    void localParticipantViewConstraints;
    void participantsViewControllerDelegate;
    void remoteParticipants;
    void shouldShowActionTypePhotoCapture;
}

@property (nonatomic) long long frontBoardInterfaceOrientation;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (long long)frontBoardInterfaceOrientation;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setFrontBoardInterfaceOrientation:(long long)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
