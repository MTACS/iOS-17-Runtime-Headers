
@interface DMCSecondaryAccountViewModel : NSObject {
    ACAccount * _account;
    UIImage * _icon;
    NSString * _identifier;
    NSNumber * _reauthBadgeNumber;
    NSString * _reauthIdentifer;
    NSString * _reauthTitle;
    NSString * _subtitle;
    NSString * _title;
}

@property (retain) ACAccount *account;
@property (retain) UIImage *icon;
@property (retain) NSString *identifier;
@property (retain) NSNumber *reauthBadgeNumber;
@property (retain) NSString *reauthIdentifer;
@property (retain) NSString *reauthTitle;
@property (retain) NSString *subtitle;
@property (retain) NSString *title;

- (void).cxx_destruct;
- (id)account;
- (id)icon;
- (id)identifier;
- (id)reauthBadgeNumber;
- (id)reauthIdentifer;
- (id)reauthTitle;
- (void)setAccount:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setReauthBadgeNumber:(id)arg1;
- (void)setReauthIdentifer:(id)arg1;
- (void)setReauthTitle:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
