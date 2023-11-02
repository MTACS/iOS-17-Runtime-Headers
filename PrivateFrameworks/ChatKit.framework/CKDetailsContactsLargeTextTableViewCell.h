
@interface CKDetailsContactsLargeTextTableViewCell : CKDetailsContactsTableViewCell {
    NSLayoutConstraint * _buttonsTopConstraint;
}

@property (nonatomic, retain) NSLayoutConstraint *buttonsTopConstraint;

+ (double)estimatedHeight;
+ (double)preferredHeight;

- (void).cxx_destruct;
- (void)_hideAllButtons;
- (void)_initConstraints;
- (void)_updateVisibleButtons;
- (id)buttonsTopConstraint;
- (void)configureWithViewModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setButtonsTopConstraint:(id)arg1;
- (void)setShowsLocation:(bool)arg1;
- (void)setShowsTUConversationStatus:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
