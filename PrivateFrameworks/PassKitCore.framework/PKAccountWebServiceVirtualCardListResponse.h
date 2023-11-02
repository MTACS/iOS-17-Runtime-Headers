
@interface PKAccountWebServiceVirtualCardListResponse : PKAccountWebServiceResponse {
    NSArray * _virtualCards;
}

@property (nonatomic, readonly, copy) NSArray *virtualCards;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)virtualCards;

@end