
@interface PKAccountWebServiceEnhancedMerchantsRequest : PKAccountWebServiceRequest {
    NSString * _accountIdentifier;
    NSDate * _addedSinceDate;
    NSURL * _baseURL;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, copy) NSDate *addedSinceDate;
@property (nonatomic, retain) NSURL *baseURL;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)accountIdentifier;
- (id)addedSinceDate;
- (id)baseURL;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAddedSinceDate:(id)arg1;
- (void)setBaseURL:(id)arg1;

@end
