
@interface IDSCTPNRResponseData : NSObject <IDSCTPNRResponseData> {
    NSString * _phoneBookNumber;
    NSString * _phoneNumber;
    NSData * _signature;
    NSString * _status;
    bool  _success;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *phoneBookNumber;
@property (nonatomic, retain) NSString *phoneNumber;
@property (nonatomic, retain) NSData *signature;
@property (nonatomic, retain) NSString *status;
@property (nonatomic) bool success;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithCTResponse:(id)arg1 phoneBookNumber:(id)arg2;
- (id)phoneBookNumber;
- (id)phoneNumber;
- (void)setPhoneBookNumber:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setSignature:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setSuccess:(bool)arg1;
- (id)signature;
- (id)status;
- (bool)success;

@end
