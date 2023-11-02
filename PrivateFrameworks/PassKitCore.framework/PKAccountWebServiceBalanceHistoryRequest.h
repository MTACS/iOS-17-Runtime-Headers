
@interface PKAccountWebServiceBalanceHistoryRequest : PKAccountWebServiceRequest {
    NSString * _accountIdentifier;
    NSURL * _baseURL;
    NSDate * _beginDate;
    NSDate * _endDate;
    unsigned long long  _type;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, retain) NSURL *baseURL;
@property (nonatomic, copy) NSDate *beginDate;
@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)accountIdentifier;
- (id)baseURL;
- (id)beginDate;
- (id)endDate;
- (void)setAccountIdentifier:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setBeginDate:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
