
@interface PKPeerPaymentAssociatedAccountActionRequest : PKPeerPaymentWebServiceRequest {
    NSString * _associatedAccountIdentifier;
    NSString * _featureIdentifier;
    NSString * _value;
}

@property (nonatomic, copy) NSString *featureIdentifier;
@property (nonatomic, copy) NSString *value;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;
- (id)featureIdentifier;
- (id)initWithAssociatedAccountIdentifier:(id)arg1;
- (void)setFeatureIdentifier:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
