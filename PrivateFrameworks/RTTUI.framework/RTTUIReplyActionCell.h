
@interface RTTUIReplyActionCell : UITableViewCell {
    <RTTUIReplyActionCellDelegate> * _delegate;
}

@property (nonatomic) <RTTUIReplyActionCellDelegate> *delegate;

- (void).cxx_destruct;
- (double)adjustedHeight;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 andDelegate:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;

@end
