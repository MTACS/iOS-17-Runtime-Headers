
@protocol SFAirDropTransferObserverDelegate <NSObject>

@required

- (void)updatedTransfer:(SFAirDropTransfer *)arg1;

@optional

- (void)removedTransfer:(SFAirDropTransfer *)arg1;

@end
