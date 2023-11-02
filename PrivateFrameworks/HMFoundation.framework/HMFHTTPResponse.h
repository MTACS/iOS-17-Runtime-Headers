
@interface HMFHTTPResponse : HMFObject <NSCopying, NSMutableCopying> {
    HMFHTTPResponseInternal * _internal;
    HMFHTTPRequest * _request;
}

@property (nonatomic, readonly) NSData *body;
@property (nonatomic, readonly) NSDictionary *headerFields;
@property (nonatomic, readonly) HMFHTTPResponseInternal *internal;
@property (nonatomic, readonly) HMFHTTPRequest *request;
@property (nonatomic, readonly) long long statusCode;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)body;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)headerFields;
- (id)init;
- (id)initWithRequest:(id)arg1 internalResponse:(id)arg2;
- (id)internal;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)request;
- (long long)statusCode;

@end
