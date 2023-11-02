
@interface HKClinicalAuthorizationPrivacyDetailsCell : UITableViewCell {
    _HKClinicalBulletedListLayoutManager * _bulletLayoutManager;
    UITextView * _contentsTextView;
    NSLayoutConstraint * _contentsTextViewLastBaselineToSuperviewBottomConstraint;
    HKSource * _source;
    NSLayoutConstraint * _superviewTopToContentsTextViewFirstBaselineConstraint;
}

@property (nonatomic, readonly) _HKClinicalBulletedListLayoutManager *bulletLayoutManager;
@property (nonatomic, readonly) UITextView *contentsTextView;
@property (nonatomic, readonly) NSLayoutConstraint *contentsTextViewLastBaselineToSuperviewBottomConstraint;
@property (nonatomic) HKSource *source;
@property (nonatomic, readonly) NSLayoutConstraint *superviewTopToContentsTextViewFirstBaselineConstraint;

- (void).cxx_destruct;
- (id)_attributedContentsTextViewStringForCurrentContentSizeCategory;
- (id)_attributedStringForBullet;
- (id)_attributedStringForBulletAtIndex:(long long)arg1;
- (id)_attributedTitleString;
- (id)_bodyEmph;
- (id)_bulletContentFont;
- (id)_bulletContentParagraphStyle;
- (id)_bulletFont;
- (id)_createContentsTextViewWithLayoutManager:(id)arg1;
- (id)_localizedBulletContentStringForBulletAtIndex:(long long)arg1;
- (id)_localizedTitleString;
- (void)_setUpConstraints;
- (void)_setUpSubviews;
- (id)_titleParagraphStyle;
- (void)_updateForCurrentContentSizeCategory;
- (id)bulletLayoutManager;
- (id)contentsTextView;
- (id)contentsTextViewLastBaselineToSuperviewBottomConstraint;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSource:(id)arg1;
- (id)source;
- (id)superviewTopToContentsTextViewFirstBaselineConstraint;
- (void)traitCollectionDidChange:(id)arg1;

@end
