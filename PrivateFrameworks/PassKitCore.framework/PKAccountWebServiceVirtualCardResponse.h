
@interface PKAccountWebServiceVirtualCardResponse : PKAccountWebServiceResponse {
    PKVirtualCard * _virtualCard;
}

@property (nonatomic, readonly, copy) PKVirtualCard *virtualCard;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)virtualCard;

@end
