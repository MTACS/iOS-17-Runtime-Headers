
@interface SFAccountManagerDrillInTableViewCellWithTrailingNumber : UITableViewCell

+ (id)_numberFormatter;

- (void)configureCellWithGroup:(id)arg1 numberOfSavedAccounts:(unsigned long long)arg2;
- (void)configureForRecentlyDeletedWithNumberOfRecentlyDeletedAccounts:(unsigned long long)arg1;
- (void)configureForSecurityRecommendationsWithNumberOfRecommendations:(unsigned long long)arg1 subtitleText:(id)arg2 warningStyle:(long long)arg3;
- (void)configureGroupInvitationsDrillInWithNumberOfInvitations:(unsigned long long)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
