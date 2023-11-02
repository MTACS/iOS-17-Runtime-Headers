
@interface REHTTPRequest : NSObject {
    NSMutableData * _bodyData;
    REHTTPConnection * _connection;
    NSDictionary * _headerFields;
    NSString * _method;
    struct _CFHTTPServerRequest { } * _request;
    NSInputStream * _stream;
    NSURL * _url;
}

@property (nonatomic, readonly) NSData *bodyData;
@property (nonatomic, readonly) REHTTPConnection *connection;
@property (nonatomic, readonly) NSDictionary *headerFields;
@property (nonatomic, readonly) NSString *method;
@property (nonatomic, readonly) struct _CFHTTPServerRequest { }*request;
@property (nonatomic, readonly) NSInputStream *stream;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (void)appendData:(id)arg1;
- (id)bodyData;
- (id)connection;
- (void)dealloc;
- (id)headerFields;
- (id)initWithConnect:(id)arg1 request:(struct _CFHTTPServerRequest { }*)arg2;
- (id)method;
- (struct _CFHTTPServerRequest { }*)request;
- (id)responseWithStatusCode:(long long)arg1;
- (id)stream;
- (id)url;

@end
