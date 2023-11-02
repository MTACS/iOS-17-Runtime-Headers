
@interface C2NetworkingResponse : NSObject {
    NSData * _body;
    NSHTTPURLResponse * _urlResponse;
}

@property (nonatomic, readonly, copy) NSData *body;
@property (nonatomic, readonly, copy) NSHTTPURLResponse *urlResponse;

+ (id)responseFromRequest:(id)arg1 statusCode:(long long)arg2 headerFields:(id)arg3 body:(id)arg4;
+ (id)responseWithURLResponse:(id)arg1 body:(id)arg2;

- (void).cxx_destruct;
- (id)body;
- (id)urlResponse;

@end
