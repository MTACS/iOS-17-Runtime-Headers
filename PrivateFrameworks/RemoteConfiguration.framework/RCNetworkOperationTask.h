
@interface RCNetworkOperationTask : NSObject {
    id /* block */  _completionHandler;
    NSMutableData * _dataStore;
    NSHTTPURLResponse * _httpResponse;
    NSString * _identifier;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, retain) NSMutableData *dataStore;
@property (nonatomic, retain) NSHTTPURLResponse *httpResponse;
@property (nonatomic, retain) NSString *identifier;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)data;
- (id)dataStore;
- (id)httpResponse;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (void)receiveData:(id)arg1;
- (void)receiveHTTPResponse:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDataStore:(id)arg1;
- (void)setHttpResponse:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end
