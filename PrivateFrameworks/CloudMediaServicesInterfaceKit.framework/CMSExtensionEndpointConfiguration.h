
@interface CMSExtensionEndpointConfiguration : NSObject {
    NSURL * _endpointURL;
    NSDictionary * _groupHeaders;
    NSDictionary * _headers;
    NSMutableURLRequest * _request;
}

@property (nonatomic, retain) NSURL *endpointURL;
@property (nonatomic, readonly) NSDictionary *groupHeaders;
@property (nonatomic, readonly) NSDictionary *headers;
@property (nonatomic, retain) NSMutableURLRequest *request;

- (void).cxx_destruct;
- (id)description;
- (id)endpointURL;
- (id)groupHeaders;
- (id)headers;
- (id)init;
- (id)initWithDictionary:(id)arg1 endpoint:(id)arg2 baseURL:(id)arg3 groupHeaders:(id)arg4;
- (id)request;
- (void)setEndpointURL:(id)arg1;
- (void)setRequest:(id)arg1;

@end
