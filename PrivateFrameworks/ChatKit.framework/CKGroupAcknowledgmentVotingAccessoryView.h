
@interface CKGroupAcknowledgmentVotingAccessoryView : _UIContextMenuAccessoryView {
    CKGroupAcknowledgmentVotingViewController * _votingViewController;
}

@property (nonatomic, retain) CKGroupAcknowledgmentVotingViewController *votingViewController;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 chatItem:(id)arg2;
- (void)setVotingViewController:(id)arg1;
- (id)votingViewController;

@end
