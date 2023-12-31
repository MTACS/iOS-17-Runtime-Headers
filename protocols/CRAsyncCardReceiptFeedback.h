
@protocol CRAsyncCardReceiptFeedback <CRFeedback>

@required

- (<CRCard> *)baseCard;
- (<CRCard> *)receivedCard;
- (<CRCard> *)requestedCard;
- (void)setBaseCard:(id <CRCard>)arg1;
- (void)setReceivedCard:(id <CRCard>)arg1;
- (void)setRequestedCard:(id <CRCard>)arg1;

@end
