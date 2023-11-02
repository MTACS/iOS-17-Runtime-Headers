
@interface PKPaymentPushProvisioningSharingIdentifiersResponse : PKPaymentWebServiceResponse {
    NSArray * _sharedCredentials;
}

@property (nonatomic, readonly) NSArray *sharedCredentials;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)sharedCredentials;

@end
