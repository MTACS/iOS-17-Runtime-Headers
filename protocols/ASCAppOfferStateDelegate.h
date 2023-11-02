
@protocol ASCAppOfferStateDelegate <NSObject>

@required

- (void)offer:(id <ASCOffer>)arg1 didChangeState:(NSString *)arg2 withMetadata:(ASCOfferMetadata *)arg3 flags:(long long)arg4;
- (void)offer:(id <ASCOffer>)arg1 didChangeStatusText:(NSString *)arg2;

@end
