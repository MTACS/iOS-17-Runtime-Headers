
@protocol SFPersonCollectionViewCellDelegate <NSObject>

@required

- (void)personCollectionViewCellDidFinishTransfer:(SFPersonCollectionViewCell *)arg1;
- (void)personCollectionViewCellDidStartTransfer:(SFPersonCollectionViewCell *)arg1;
- (void)personCollectionViewCellDidTerminateTransfer:(SFPersonCollectionViewCell *)arg1;

@end
