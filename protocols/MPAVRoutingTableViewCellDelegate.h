
@protocol MPAVRoutingTableViewCellDelegate <NSObject>

@optional

- (void)routingCell:(MPAVRoutingTableViewCell *)arg1 mirroringSwitchValueDidChange:(bool)arg2;
- (void)routingCellDidTapToExpand:(MPAVRoutingTableViewCell *)arg1;

@end
