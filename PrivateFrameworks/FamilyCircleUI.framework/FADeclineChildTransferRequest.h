
@interface FADeclineChildTransferRequest : AAFamilyRequest {
    NSString * _requestCode;
}

@property (nonatomic, copy) NSString *requestCode;

- (void).cxx_destruct;
- (bool)isUserInitiated;
- (id)requestCode;
- (void)setRequestCode:(id)arg1;
- (id)urlRequest;
- (id)urlString;

@end
