
@interface NFVASResponse : NSObject {
    NSNumber * _mobileCapabilities;
    NFVASRequest * _request;
    NSNumber * _statusCode;
    NSData * _token;
    NSData * _vasData;
}

@property (nonatomic, retain) NSNumber *mobileCapabilities;
@property (nonatomic, readonly) bool paymentSupported;
@property (nonatomic, retain) NFVASRequest *request;
@property (nonatomic, retain) NSNumber *statusCode;
@property (nonatomic, retain) NSData *token;
@property (nonatomic, retain) NSData *vasData;

+ (bool)validateDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)asDictionary;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)mobileCapabilities;
- (bool)paymentSupported;
- (id)request;
- (void)setMobileCapabilities:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setStatusCode:(id)arg1;
- (void)setToken:(id)arg1;
- (void)setVasData:(id)arg1;
- (id)statusCode;
- (id)token;
- (id)vasData;

@end
