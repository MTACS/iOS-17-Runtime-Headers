
@interface JXHTTPJSONBody : NSObject <JXHTTPRequestBody> {
    NSData * _requestData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSData *requestData;
@property (readonly) Class superclass;

+ (id)withData:(id)arg1;
+ (id)withJSONObject:(id)arg1;
+ (id)withString:(id)arg1;

- (void).cxx_destruct;
- (long long)httpContentLength;
- (id)httpContentType;
- (id)httpInputStream;
- (void)httpOperationDidFinishLoading:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)requestData;
- (void)setRequestData:(id)arg1;

@end
