
@interface EKUIParticipantContainer : UIView {
    EKUILabeledAvatarView * _avatar;
    NSMutableArray * _labelConstraints;
    UILabel * _nameLabel;
    UINavigationController * _navController;
    EKParticipant * _participant;
    UILabel * _subLabel;
}

@property (retain) EKUILabeledAvatarView *avatar;
@property (retain) NSMutableArray *labelConstraints;
@property (retain) UILabel *nameLabel;
@property UINavigationController *navController;
@property (retain) EKParticipant *participant;
@property (retain) UILabel *subLabel;

- (void).cxx_destruct;
- (id)avatar;
- (id)initWithParticipant:(id)arg1 viewController:(id)arg2;
- (id)labelConstraints;
- (id)nameLabel;
- (id)navController;
- (id)participant;
- (void)setAvatar:(id)arg1;
- (void)setBusy:(bool)arg1;
- (void)setLabelConstraints:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setNavController:(id)arg1;
- (void)setParticipant:(id)arg1;
- (void)setSubLabel:(id)arg1;
- (void)singleTap:(id)arg1;
- (id)subLabel;
- (void)updateContentForSizeCategoryChange:(id)arg1;
- (void)updateSublabelWithState:(unsigned long long)arg1;

@end
