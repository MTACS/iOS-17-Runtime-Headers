
@interface PKAccountWebServiceExportTransactionDataRequest : PKAccountWebServiceRequest {
    NSString * _accountIdentifier;
    NSURL * _baseURL;
    NSDate * _beginDate;
    NSDate * _endDate;
    NSString * _fileFormat;
    NSTimeZone * _productTimeZone;
    NSString * _statementIdentifier;
    unsigned long long  _trigger;
    unsigned long long  _type;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, retain) NSURL *baseURL;
@property (nonatomic, copy) NSDate *beginDate;
@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic, copy) NSString *fileFormat;
@property (nonatomic, copy) NSTimeZone *productTimeZone;
@property (nonatomic, copy) NSString *statementIdentifier;
@property (nonatomic) unsigned long long trigger;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)accountIdentifier;
- (id)baseURL;
- (id)beginDate;
- (id)endDate;
- (id)fileFormat;
- (id)productTimeZone;
- (void)setAccountIdentifier:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setBeginDate:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setFileFormat:(id)arg1;
- (void)setProductTimeZone:(id)arg1;
- (void)setStatementIdentifier:(id)arg1;
- (void)setTrigger:(unsigned long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)statementIdentifier;
- (unsigned long long)trigger;
- (unsigned long long)type;

@end
