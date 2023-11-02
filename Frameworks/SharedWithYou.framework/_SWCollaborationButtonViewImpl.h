
@interface _SWCollaborationButtonViewImpl : UIView <UIPopoverPresentationControllerDelegate> {
    void _isContentShared;
    void activeParticipantCount;
    void attributionView;
    void attributionViewXAnchorVisibleLabel;
    void button;
    void centerXAnchorHiddenLabel;
    void containerLeadingConstraint;
    void containerTrailingConstraint;
    void containerView;
    void delegate;
    void detailViewController;
    void headerImage;
    void headerSubtitle;
    void headerTitle;
    void highlightSubscriptionCancellable;
    void isRTL;
    void label;
    void labelXAnchorHidden;
    void numberFormatter;
    void outerButton;
    void presentingViewController;
    void sBehaviors;
    void sharedWithYouCenter;
}

@property (nonatomic) unsigned long long activeParticipantCount;
@property (nonatomic) <UICloudSharingControllerDelegate> *cloudSharingControllerDelegate;
@property (nonatomic) <SWCollaborationViewDelegate> *delegate;
@property (nonatomic, retain) UIImage *headerImage;
@property (nonatomic, copy) NSString *headerSubtitle;
@property (nonatomic, copy) NSString *headerTitle;
@property (nonatomic) bool isContentShared;
@property (nonatomic, retain) NSItemProvider *itemProvider;
@property (nonatomic) SWCollaborationView *outerButton;

- (void).cxx_destruct;
- (unsigned long long)activeParticipantCount;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)buttonTapped:(id)arg1;
- (id)cloudSharingControllerDelegate;
- (id)delegate;
- (void)dismissPopoverAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)headerImage;
- (id)headerSubtitle;
- (id)headerTitle;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithItemProvider:(id)arg1;
- (bool)isContentShared;
- (id)itemProvider;
- (void)layoutSubviews;
- (id)outerButton;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)setActiveParticipantCount:(unsigned long long)arg1;
- (void)setCloudSharingControllerDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetailViewListContent:(id)arg1;
- (void)setHeaderImage:(id)arg1;
- (void)setHeaderSubtitle:(id)arg1;
- (void)setHeaderTitle:(id)arg1;
- (void)setIsContentShared:(bool)arg1;
- (void)setItemProvider:(id)arg1;
- (void)setManageButtonTitle:(id)arg1;
- (void)setOuterButton:(id)arg1;
- (void)setShowManageButton:(bool)arg1;
- (void)tintColorDidChange;
- (void)updatePlaceHolderSymbolScale:(long long)arg1 weight:(long long)arg2 pointSize:(double)arg3;

@end
