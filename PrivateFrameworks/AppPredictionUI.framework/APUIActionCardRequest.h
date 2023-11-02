
@interface APUIActionCardRequest : CRSCardRequest {
    APUIActionCardViewConfig * _cardViewConfig;
}

@property (nonatomic, readonly) APUIActionCardViewConfig *cardViewConfig;

- (void).cxx_destruct;
- (id)cardViewConfig;
- (id)initWithCardViewConfig:(id)arg1;

@end
