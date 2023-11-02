
@interface HMFHTTPResponseInternal : HMFObject <NSCopying> {
    HMFActivity * _activity;
    NSData * _body;
    NSDictionary * _headerFields;
    long long  _statusCode;
}

@property (nonatomic, retain) HMFActivity *activity;
@property (nonatomic, copy) NSData *body;
@property (nonatomic, copy) NSDictionary *headerFields;
@property (nonatomic, readonly) long long statusCode;

- (void).cxx_destruct;
- (id)activity;
- (id)body;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)headerFields;
- (id)init;
- (id)initWithStatusCode:(long long)arg1 headerFields:(id)arg2 body:(id)arg3;
- (void)setActivity:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setHeaderFields:(id)arg1;
- (void)setHeaderValue:(id)arg1 forHeaderKey:(id)arg2;
- (long long)statusCode;

@end
