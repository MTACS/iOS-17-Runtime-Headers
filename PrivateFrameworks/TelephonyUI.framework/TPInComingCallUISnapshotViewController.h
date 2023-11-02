
@interface TPInComingCallUISnapshotViewController : UIViewController {
    UIButton * _acceptButton;
    UIButton * _callDetailsViewButton;
    PRSPosterConfiguration * _configuration;
    CNContact * _contact;
    UIButton * _declineButton;
    UILabel * _fakeLabel;
    UIButton * _messageButton;
    PRPosterLabel * _mobileLabel;
    UILabel * _nameLabel;
    UIView * _overlaysContainerView;
    UIButton * _remindMeButton;
    long long  _style;
}

@property (nonatomic, retain) UIButton *acceptButton;
@property (nonatomic, retain) UIButton *callDetailsViewButton;
@property (nonatomic, retain) PRSPosterConfiguration *configuration;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, retain) UIButton *declineButton;
@property (nonatomic, retain) UILabel *fakeLabel;
@property (nonatomic, retain) UIButton *messageButton;
@property (nonatomic, retain) PRPosterLabel *mobileLabel;
@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic, retain) UIView *overlaysContainerView;
@property (nonatomic, retain) UIButton *remindMeButton;
@property (nonatomic) long long style;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })horizontalNameLabelBoundingRectForName:(id)arg1 caption:(id)arg2 window:(id)arg3 preferredTitleFont:(id)arg4;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })horizontalNameLabelBoundingRectForName:(id)arg1 window:(id)arg2;
+ (id)posterDisplayNameComponentsForContact:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })verticalNameLabelBoundingRectForName:(id)arg1 caption:(id)arg2 window:(id)arg3 preferredTitleFont:(id)arg4;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })verticalNameLabelBoundingRectForName:(id)arg1 window:(id)arg2;

- (void).cxx_destruct;
- (id)acceptButton;
- (id)attachmentIdentifiersForStyle;
- (id)attachmentsForStyle;
- (id)callDetailsViewButton;
- (id)configuration;
- (id)contact;
- (id)declineButton;
- (id)fakeLabel;
- (id)generateOverlaysSnapshot;
- (void)hideElementsBasedOn:(long long)arg1;
- (id)identifierForStyle;
- (id)initWithConfiguration:(id)arg1 style:(long long)arg2 contact:(id)arg3;
- (id)initWithConfiguration:(id)arg1 style:(long long)arg2 contact:(id)arg3 fallbackText:(id)arg4;
- (id)initWithConfiguration:(id)arg1 style:(long long)arg2 nameString:(id)arg3;
- (id)messageButton;
- (id)mobileLabel;
- (id)nameLabel;
- (id)nameString;
- (id)overlaysContainerView;
- (id)remindMeButton;
- (void)setAcceptButton:(id)arg1;
- (void)setCallDetailsViewButton:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setDeclineButton:(id)arg1;
- (void)setFakeLabel:(id)arg1;
- (void)setMessageButton:(id)arg1;
- (void)setMobileLabel:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setNameLabelFont:(id)arg1;
- (void)setNameLabelTextColor:(id)arg1;
- (void)setOverlaysContainerView:(id)arg1;
- (void)setRemindMeButton:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setUpButton:(long long)arg1;
- (void)setUpCallDetailsViewButton;
- (void)setUpConstraints;
- (void)setUpOverlayContentIfNeeded;
- (void)setUpOverlaysContainer;
- (void)setupLabels;
- (void)snapshotWithOptions:(unsigned long long)arg1 completionBlock:(id /* block */)arg2;
- (void)snapshotWithOptions:(unsigned long long)arg1 windowScene:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)snapshotWithOptions:(unsigned long long)arg1 windowScene:(id)arg2 useAttachmentConfiguration:(bool)arg3 completionBlock:(id /* block */)arg4;
- (long long)style;
- (void)viewDidLoad;

@end
