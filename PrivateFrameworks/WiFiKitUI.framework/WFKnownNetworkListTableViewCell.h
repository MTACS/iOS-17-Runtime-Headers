
@interface WFKnownNetworkListTableViewCell : UITableViewCell {
    NSLayoutConstraint * _extraLeadingConstraints;
    bool  _hasLeadingPadding;
    UIImageView * _lockImageView;
    NSString * _networkName;
    UILabel * _networkNameLabel;
    NSLayoutConstraint * _normalLeadingConstraints;
    bool  _showLock;
}

@property (nonatomic, retain) NSLayoutConstraint *extraLeadingConstraints;
@property (nonatomic) bool hasLeadingPadding;
@property (nonatomic, retain) UIImageView *lockImageView;
@property (nonatomic, retain) NSString *networkName;
@property (nonatomic, retain) UILabel *networkNameLabel;
@property (nonatomic, retain) NSLayoutConstraint *normalLeadingConstraints;
@property (nonatomic) bool showLock;

- (void).cxx_destruct;
- (id)extraLeadingConstraints;
- (bool)hasLeadingPadding;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)lockImageView;
- (id)networkName;
- (id)networkNameLabel;
- (id)normalLeadingConstraints;
- (void)setExtraLeadingConstraints:(id)arg1;
- (void)setHasLeadingPadding:(bool)arg1;
- (void)setLockImageView:(id)arg1;
- (void)setNetworkName:(id)arg1;
- (void)setNetworkNameLabel:(id)arg1;
- (void)setNormalLeadingConstraints:(id)arg1;
- (void)setShowLock:(bool)arg1;
- (bool)showLock;

@end
