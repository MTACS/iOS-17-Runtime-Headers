
@interface RPRequestRegistration : NSObject {
    id /* block */  _cnxHandler;
    id /* block */  _handler;
    NSDictionary * _options;
    NSString * _requestID;
}

@property (nonatomic, copy) id /* block */ cnxHandler;
@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, copy) NSDictionary *options;
@property (nonatomic, copy) NSString *requestID;

- (void).cxx_destruct;
- (id /* block */)cnxHandler;
- (id /* block */)handler;
- (id)options;
- (id)requestID;
- (void)setCnxHandler:(id /* block */)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setOptions:(id)arg1;
- (void)setRequestID:(id)arg1;

@end
