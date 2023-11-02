
@interface SBKRequest : NSObject {
    NSString * _action;
    NSDictionary * _arguments;
    long long  _bodyContentType;
    NSData * _bodyData;
    bool  _concurrent;
    NSDictionary * _headers;
    bool  _includeDeviceGUID;
    long long  _method;
    NSURL * _requestURL;
    ISDataProvider * _responseDataProvider;
    bool  _shouldAuthenticate;
    SBKTransaction * _transaction;
}

@property (nonatomic, retain) NSData *bodyData;
@property (getter=isConcurrent, nonatomic, readonly) bool concurrent;
@property (nonatomic) bool includeDeviceGUID;
@property (nonatomic) long long method;
@property (nonatomic, retain) ISDataProvider *responseDataProvider;
@property (nonatomic) bool shouldAuthenticate;
@property (nonatomic, readonly) double timeoutInterval;
@property (nonatomic, retain) SBKTransaction *transaction;

+ (id)_contentEncodingTypeStringForBodyContentEncodingType:(long long)arg1;
+ (id)_contentTypeStringForBodyContentType:(long long)arg1;
+ (id)_methodStringForMethod:(long long)arg1;
+ (long long)bodyContentEncodingType;
+ (long long)bodyContentType;
+ (id)requestWithRequestURL:(id)arg1;

- (void).cxx_destruct;
- (id)_defaultHeaderFields;
- (bool)acceptsGzipEncoding;
- (id)bodyData;
- (id)canonicalResponseForResponse:(id)arg1;
- (id)copyRequestProperties;
- (id)description;
- (id)descriptionWithoutHeaderFields;
- (bool)includeDeviceGUID;
- (id)initWithRequestURL:(id)arg1;
- (bool)isConcurrent;
- (long long)method;
- (id)newURLOperation;
- (id)newURLOperationWithDelegate:(id)arg1;
- (id)responseDataProvider;
- (void)setBodyData:(id)arg1;
- (void)setBodyDataWithPropertyList:(id)arg1;
- (void)setIncludeDeviceGUID:(bool)arg1;
- (void)setMethod:(long long)arg1;
- (void)setResponseDataProvider:(id)arg1;
- (void)setShouldAuthenticate:(bool)arg1;
- (void)setTransaction:(id)arg1;
- (void)setValue:(id)arg1 forArgument:(id)arg2;
- (void)setValue:(id)arg1 forHeaderField:(id)arg2;
- (bool)shouldAuthenticate;
- (double)timeoutInterval;
- (id)transaction;

@end