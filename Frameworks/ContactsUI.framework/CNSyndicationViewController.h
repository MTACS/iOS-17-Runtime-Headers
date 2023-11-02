
@interface CNSyndicationViewController : UIViewController <CNActionsViewProtocol> {
    UIView * _actionsContainerView;
    CNActionsView * _actionsView;
    CNGroupIdentityInlineActionsViewConfiguration * _actionsViewConfiguration;
    CNContactFormatter * _contactFormatter;
    CNGroupIdentity * _group;
    CNGroupAvatarViewController * _groupAvatarViewController;
    UIView * _nameContainerView;
    CNContact * _senderContact;
    UILabel * _subtitleLabel;
    NSString * _subtitleText;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIView *actionsContainerView;
@property (nonatomic, retain) CNActionsView *actionsView;
@property (nonatomic, readonly) CNGroupIdentityInlineActionsViewConfiguration *actionsViewConfiguration;
@property (nonatomic, retain) CNContactFormatter *contactFormatter;
@property (nonatomic, retain) CNGroupIdentity *group;
@property (nonatomic, retain) CNGroupAvatarViewController *groupAvatarViewController;
@property (nonatomic, retain) UIView *nameContainerView;
@property (nonatomic, retain) CNContact *senderContact;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, copy) NSString *subtitleText;
@property (nonatomic, retain) UILabel *titleLabel;

+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (id)actionsContainerView;
- (id)actionsView;
- (id)actionsViewConfiguration;
- (id)contactFormatter;
- (void)didSelectAction:(id)arg1 withSourceView:(id)arg2 longPress:(bool)arg3;
- (id)group;
- (id)groupAvatarViewController;
- (id)initWithGroup:(id)arg1 senderContact:(id)arg2 actionsViewConfiguration:(id)arg3;
- (id)nameContainerView;
- (id)senderContact;
- (void)setActionsContainerView:(id)arg1;
- (void)setActionsView:(id)arg1;
- (void)setContactFormatter:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setGroupAvatarViewController:(id)arg1;
- (void)setNameContainerView:(id)arg1;
- (void)setSenderContact:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setupActionViews;
- (void)setupContainerViews;
- (void)setupNameViews;
- (id)subtitleLabel;
- (id)subtitleText;
- (id)subtitleTextForSenderContact:(id)arg1;
- (id)titleLabel;
- (void)viewDidLoad;

@end
