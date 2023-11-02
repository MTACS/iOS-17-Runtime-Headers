
@interface BLDAAPURLRequest : NSObject {
    NSNumber * _DSID;
    BUBag * _bag;
    NSData * _body;
    unsigned long long  _contentType;
    NSString * _daapURL;
    long long  _dataEncoding;
    long long  _reason;
    long long  _requestMethod;
}

@property (nonatomic, retain) NSNumber *DSID;
@property (nonatomic, retain) NSData *body;
@property (nonatomic) unsigned long long contentType;
@property (nonatomic, retain) NSString *daapURL;
@property (nonatomic) long long dataEncoding;
@property (nonatomic) long long reason;
@property (nonatomic) long long requestMethod;

- (void).cxx_destruct;
- (id)DSID;
- (void)_URLWithCompletionHandler:(id /* block */)arg1;
- (void)_URLWithRetry:(bool)arg1 completion:(id /* block */)arg2;
- (void)_requestWithCompletionHandler:(id /* block */)arg1;
- (void)_serverParametersWithCompletionHandler:(id /* block */)arg1;
- (void)_valueForDAAPBagKey:(id)arg1 completion:(id /* block */)arg2;
- (id)body;
- (unsigned long long)contentType;
- (id)createDaapURL:(id)arg1;
- (id)daapURL;
- (long long)dataEncoding;
- (id)description;
- (void)executeWithCompletionHandler:(id /* block */)arg1;
- (id)initWithDSID:(id)arg1 reason:(long long)arg2;
- (long long)reason;
- (long long)requestMethod;
- (void)setBody:(id)arg1;
- (void)setContentType:(unsigned long long)arg1;
- (void)setDSID:(id)arg1;
- (void)setDaapURL:(id)arg1;
- (void)setDataEncoding:(long long)arg1;
- (void)setReason:(long long)arg1;
- (void)setRequestMethod:(long long)arg1;

@end
