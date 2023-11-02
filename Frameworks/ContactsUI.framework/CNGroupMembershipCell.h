
@interface CNGroupMembershipCell : CNLabeledCell {
    <CNPropertyCellDelegate> * _delegate;
    UILabel * _parentGroupNameLabel;
}

@property (nonatomic) <CNPropertyCellDelegate> *delegate;
@property (nonatomic, readonly) UILabel *parentGroupNameLabel;

+ (bool)wantsHorizontalLayout;

- (void).cxx_destruct;
- (bool)allowsCellSelection;
- (id)delegate;
- (id)labelView;
- (id)parentGroupNameLabel;
- (void)setCardGroupItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)updateConstraints;

@end
