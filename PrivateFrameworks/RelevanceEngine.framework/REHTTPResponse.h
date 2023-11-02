
@interface REHTTPResponse : NSObject {
    struct __CFHTTPMessage { } * _message;
    REHTTPRequest * _request;
    long long  _statusCode;
}

@property (nonatomic, copy) NSData *body;
@property (nonatomic, copy) NSString *contentType;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, readonly, copy) NSDictionary *headerFields;
@property (nonatomic, readonly) long long statusCode;

- (void).cxx_destruct;
- (id)_dateFormatter;
- (id)body;
- (id)contentType;
- (id)date;
- (void)dealloc;
- (id)headerFields;
- (id)headerValueForKey:(id)arg1;
- (id)initWithRequest:(id)arg1 statusCode:(long long)arg2;
- (struct _CFHTTPServerResponse { }*)response;
- (void)setBody:(id)arg1;
- (void)setContentType:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setHeaderValue:(id)arg1 forKey:(id)arg2;
- (long long)statusCode;

@end
