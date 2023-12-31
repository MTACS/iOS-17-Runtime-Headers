
@interface HSRequest : NSObject {
    NSString * _action;
    NSDictionary * _arguments;
    NSData * _bodyData;
    bool  _concurrent;
    long long  _method;
}

@property (nonatomic, readonly) bool acceptsGzipEncoding;
@property (nonatomic, readonly) NSString *action;
@property (nonatomic, copy) NSData *bodyData;
@property (getter=isConcurrent, nonatomic, readonly) bool concurrent;
@property (nonatomic) long long method;
@property (nonatomic, readonly) double timeoutInterval;

+ (id)request;

- (void).cxx_destruct;
- (id)URLRequestForBaseURL:(id)arg1 sessionID:(unsigned int)arg2;
- (bool)acceptsGzipEncoding;
- (id)action;
- (id)bodyData;
- (id)canonicalResponseForResponse:(id)arg1;
- (id)description;
- (id)initWithAction:(id)arg1;
- (bool)isConcurrent;
- (long long)method;
- (id)requestURLForBaseURL:(id)arg1 sessionID:(unsigned int)arg2;
- (void)setBodyData:(id)arg1;
- (void)setMethod:(long long)arg1;
- (void)setValue:(id)arg1 forArgument:(id)arg2;
- (double)timeoutInterval;

@end
