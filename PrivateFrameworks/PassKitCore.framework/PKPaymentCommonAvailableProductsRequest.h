
@interface PKPaymentCommonAvailableProductsRequest : PKPaymentWebServiceRequest {
    NSURL * _contentURL;
    NSString * _preferredLanguage;
}

@property (nonatomic, readonly) NSURL *contentURL;
@property (nonatomic, readonly, copy) NSString *preferredLanguage;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_urlRequest;
- (id)contentURL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentURL:(id)arg1;
- (id)initWithContentURL:(id)arg1 preferredLanguage:(id)arg2;
- (bool)isStatic;
- (id)preferredLanguage;

@end
