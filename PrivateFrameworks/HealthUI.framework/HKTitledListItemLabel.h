
@interface HKTitledListItemLabel : UIView {
    UILabel * _bodyLabel;
    long long  _currentUserInterfaceStyle;
    HKListItemLabel * _listItemLabel;
}

@property (nonatomic, retain) UILabel *bodyLabel;
@property (nonatomic) long long currentUserInterfaceStyle;
@property (nonatomic, retain) HKListItemLabel *listItemLabel;

+ (id)createTitledListItem:(id)arg1 listBody:(id)arg2 itemNumber:(int)arg3;
+ (id)createTitledListItem:(id)arg1 titleAccessibilityIdentifier:(id)arg2 listBody:(id)arg3 bodyAccessibilityIdentifier:(id)arg4 itemNumber:(int)arg5;

- (void).cxx_destruct;
- (id)_bodyLabelFont;
- (double)_bodyLabelToBottom;
- (double)_listItemLabelToBody;
- (void)_setUpConstraints;
- (void)_setUpUI;
- (void)_updateCurrentUserInterfaceStyleIfNeeded;
- (id)bodyLabel;
- (long long)currentUserInterfaceStyle;
- (id)initWithView:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 title:(id)arg3 body:(id)arg4;
- (void)layoutSubviews;
- (id)listItemLabel;
- (void)setBodyLabel:(id)arg1;
- (void)setCurrentUserInterfaceStyle:(long long)arg1;
- (void)setListItemLabel:(id)arg1;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
