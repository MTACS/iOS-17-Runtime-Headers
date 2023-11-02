
@interface PKRetrieveMerchantTokensResponse : PKPaymentWebServiceResponse {
    NSArray * _merchantTokens;
    NSNumber * _pageNumber;
    NSNumber * _pageSize;
    NSNumber * _totalMerchantTokens;
    NSNumber * _totalPages;
}

@property (nonatomic, readonly, copy) NSArray *merchantTokens;
@property (nonatomic, readonly, copy) NSNumber *pageNumber;
@property (nonatomic, readonly, copy) NSNumber *pageSize;
@property (nonatomic, readonly, copy) NSNumber *totalMerchantTokens;
@property (nonatomic, readonly, copy) NSNumber *totalPages;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)initWithMerchantTokens:(id)arg1 totalMerchantTokens:(id)arg2 pageSize:(id)arg3 totalPages:(id)arg4 pageNumber:(id)arg5;
- (id)merchantTokens;
- (id)pageNumber;
- (id)pageSize;
- (id)totalMerchantTokens;
- (id)totalPages;

@end
