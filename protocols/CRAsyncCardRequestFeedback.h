
@protocol CRAsyncCardRequestFeedback <CRFeedback>

@required

- (<CRCard> *)baseCard;
- (<CRCard> *)requestedCard;
- (void)setBaseCard:(id <CRCard>)arg1;
- (void)setRequestedCard:(id <CRCard>)arg1;

@end
