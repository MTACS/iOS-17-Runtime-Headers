
@interface PKPeerPaymentDocumentSubmissionResponse : PKPeerPaymentWebServiceResponse {
    unsigned long long  _status;
}

@property (nonatomic, readonly) unsigned long long status;

- (id)initWithData:(id)arg1;
- (unsigned long long)status;

@end
