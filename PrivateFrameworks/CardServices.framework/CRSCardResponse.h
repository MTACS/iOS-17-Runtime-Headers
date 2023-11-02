
@interface CRSCardResponse : CRSResponse {
    <CRCard> * _card;
    CRSCardRequest * _request;
}

@property (nonatomic, retain) <CRCard> *card;
@property (nonatomic, retain) CRSCardRequest *request;

- (void).cxx_destruct;
- (id)card;
- (id)request;
- (void)setCard:(id)arg1;
- (void)setRequest:(id)arg1;

@end
