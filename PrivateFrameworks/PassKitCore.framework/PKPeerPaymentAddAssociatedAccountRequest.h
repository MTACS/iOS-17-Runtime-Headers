
@interface PKPeerPaymentAddAssociatedAccountRequest : PKPeerPaymentWebServiceRequest {
    NSString * _altDSID;
    NSString * _firstName;
    NSString * _lastName;
    unsigned long long  _role;
}

@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic, copy) NSString *firstName;
@property (nonatomic, copy) NSString *lastName;
@property (nonatomic) unsigned long long role;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;
- (id)altDSID;
- (id)firstName;
- (id)lastName;
- (unsigned long long)role;
- (void)setAltDSID:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setRole:(unsigned long long)arg1;

@end
