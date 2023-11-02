
@interface WFContentAttributionTableViewCell : UITableViewCell {
    UILabel * _accountIdentifierLabel;
    UILabel * _bundleNameLabel;
    UILabel * _contentItemsCountLabel;
    UIStackView * _contentStackView;
    UILabel * _disclosureLevelLabel;
    NSLayoutConstraint * _firstLineBaseLineConstaint;
    UILabel * _managedLevelLabel;
    NSLayoutConstraint * _secondLineBaseLineConstaint;
}

@property (nonatomic, retain) UILabel *accountIdentifierLabel;
@property (nonatomic, retain) UILabel *bundleNameLabel;
@property (nonatomic, retain) UILabel *contentItemsCountLabel;
@property (nonatomic, retain) UIStackView *contentStackView;
@property (nonatomic, retain) UILabel *disclosureLevelLabel;
@property (nonatomic, retain) NSLayoutConstraint *firstLineBaseLineConstaint;
@property (nonatomic, retain) UILabel *managedLevelLabel;
@property (nonatomic, retain) NSLayoutConstraint *secondLineBaseLineConstaint;

- (void).cxx_destruct;
- (id)accountIdentifierLabel;
- (id)bundleNameLabel;
- (id)contentItemsCountLabel;
- (id)contentStackView;
- (id)disclosureLevelLabel;
- (id)firstLineBaseLineConstaint;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)managedLevelLabel;
- (id)secondLineBaseLineConstaint;
- (void)setAccountIdentifierLabel:(id)arg1;
- (void)setBundleNameLabel:(id)arg1;
- (void)setContentItemsCountLabel:(id)arg1;
- (void)setContentStackView:(id)arg1;
- (void)setDisclosureLevelLabel:(id)arg1;
- (void)setFirstLineBaseLineConstaint:(id)arg1;
- (void)setManagedLevelLabel:(id)arg1;
- (void)setSecondLineBaseLineConstaint:(id)arg1;
- (void)updateCellWithContentAttribution:(id)arg1;

@end
