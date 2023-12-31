
@interface CRBasicAsyncCardRequestFeedback : NSObject <CRAsyncCardRequestFeedback> {
    <CRCard> * baseCard;
    <CRCard> * requestedCard;
}

@property (nonatomic, readonly) SFFeedback *backingFeedback;
@property (nonatomic, retain) <CRCard> *baseCard;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <CRCard> *requestedCard;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)baseCard;
- (id)requestedCard;
- (void)setBaseCard:(id)arg1;
- (void)setRequestedCard:(id)arg1;

@end
