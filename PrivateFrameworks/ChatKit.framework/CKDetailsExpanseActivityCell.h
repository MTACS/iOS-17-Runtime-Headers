
@interface CKDetailsExpanseActivityCell : CKDetailsCell <CKDetailsCell> {
    UILabel * _activityDescriptionLabel;
    CNContact * _contactSharingScreen;
    TUConversation * _conversation;
    bool  _isScreenShare;
    LPLinkView * _lpLinkView;
}

@property (nonatomic, retain) UILabel *activityDescriptionLabel;
@property (nonatomic, retain) CNContact *contactSharingScreen;
@property (nonatomic, retain) TUConversation *conversation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isScreenShare;
@property (nonatomic, retain) LPLinkView *lpLinkView;
@property (readonly) Class superclass;

+ (id)reuseIdentifier;
+ (bool)shouldHighlight;

- (void).cxx_destruct;
- (id)activityDescriptionLabel;
- (void)addConstraints;
- (double)buttonInteritemSpacing;
- (id)contactSharingScreen;
- (id)conversation;
- (void)formatTitle;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 conversation:(id)arg3;
- (double)insetPadding;
- (double)interitemSpacing;
- (bool)isScreenShare;
- (void)layoutSubviews;
- (id)lpLinkView;
- (void)setActivityDescriptionLabel:(id)arg1;
- (void)setContactSharingScreen:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setIsScreenShare:(bool)arg1;
- (void)setLpLinkView:(id)arg1;
- (void)setupView;

@end
