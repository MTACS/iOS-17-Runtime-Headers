
@interface PKAccountWebServiceCustomizePhysicalCardResponse : PKAccountWebServiceResponse {
    NSArray * _artworkOptions;
    NSArray * _nameOptions;
    NSArray * _priceOptions;
}

@property (nonatomic, readonly, copy) NSArray *artworkOptions;
@property (nonatomic, readonly, copy) NSArray *nameOptions;
@property (nonatomic, readonly, copy) NSArray *priceOptions;

- (void).cxx_destruct;
- (id)artworkOptions;
- (id)initWithData:(id)arg1;
- (id)nameOptions;
- (id)priceOptions;

@end
