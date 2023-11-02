
@interface CNContactContainerCell : CNLabeledCell {
    UILabel * _accountLabel;
    UILabel * _accountNameLabel;
    <CNPropertyCellDelegate> * _delegate;
}

@property (nonatomic, readonly) UILabel *accountLabel;
@property (nonatomic, readonly) UILabel *accountNameLabel;
@property (nonatomic) <CNPropertyCellDelegate> *delegate;

+ (bool)wantsChevron;

- (void).cxx_destruct;
- (id)accountLabel;
- (id)accountNameLabel;
- (id)delegate;
- (id)labelView;
- (void)performDefaultAction;
- (void)setCardGroupItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldPerformDefaultAction;
- (void)updateConstraints;
- (id)valueView;

@end
