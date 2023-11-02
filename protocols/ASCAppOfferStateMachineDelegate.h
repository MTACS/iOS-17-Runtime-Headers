
@protocol ASCAppOfferStateMachineDelegate <NSObject>

@required

- (void)offerStateDidChange:(NSString *)arg1 withMetadata:(ASCOfferMetadata *)arg2 isActionable:(bool)arg3;
- (void)offerStatusTextDidChange:(NSString *)arg1;

@end
