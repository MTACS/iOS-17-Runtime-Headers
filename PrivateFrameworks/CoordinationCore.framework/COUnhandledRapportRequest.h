
@interface COUnhandledRapportRequest : COUnhandledRequest {
    NSDictionary * _data;
    id /* block */  _handler;
    NSString * _identifier;
    NSDictionary * _options;
    COMeshRequest * _request;
    unsigned long long  _timestamp;
}

@property (nonatomic, readonly, copy) NSDictionary *data;
@property (nonatomic, readonly) id /* block */ handler;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSDictionary *options;
@property (nonatomic, readonly) COMeshRequest *request;
@property (nonatomic, readonly) unsigned long long timestamp;

- (void).cxx_destruct;
- (id)data;
- (id /* block */)handler;
- (id)identifier;
- (id)initWithRequest:(id)arg1 identifier:(id)arg2 data:(id)arg3 options:(id)arg4 handler:(id /* block */)arg5 at:(unsigned long long)arg6;
- (id)options;
- (id)request;
- (unsigned long long)timestamp;

@end
