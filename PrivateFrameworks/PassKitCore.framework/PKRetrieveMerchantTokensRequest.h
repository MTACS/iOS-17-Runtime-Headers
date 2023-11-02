
@interface PKRetrieveMerchantTokensRequest : PKPaymentWebServiceRequest {
    NSString * _merchantTokenId;
    NSNumber * _pageNumber;
    NSNumber * _pageSize;
    PKSecureElementPass * _pass;
}

@property (nonatomic, copy) NSString *merchantTokenId;
@property (nonatomic, copy) NSNumber *pageNumber;
@property (nonatomic, copy) NSNumber *pageSize;
@property (nonatomic, retain) PKSecureElementPass *pass;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;
- (id)merchantTokenId;
- (id)pageNumber;
- (id)pageSize;
- (id)pass;
- (void)setMerchantTokenId:(id)arg1;
- (void)setPageNumber:(id)arg1;
- (void)setPageSize:(id)arg1;
- (void)setPass:(id)arg1;

@end
