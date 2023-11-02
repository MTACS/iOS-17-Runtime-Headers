
@interface PKPaymentPushProvisioningSharingStatusResponse : PKPaymentWebServiceResponse {
    unsigned long long  _sharingStatus;
}

@property (nonatomic, readonly) unsigned long long sharingStatus;

- (id)initWithData:(id)arg1;
- (unsigned long long)sharingStatus;

@end
