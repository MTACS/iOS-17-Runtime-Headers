
@interface JXHTTPDataBody : NSObject <JXHTTPRequestBody> {
    NSData * _data;
    NSString * _httpContentType;
}

@property (nonatomic, retain) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *httpContentType;
@property (readonly) Class superclass;

+ (id)withData:(id)arg1;
+ (id)withData:(id)arg1 contentType:(id)arg2;

- (void).cxx_destruct;
- (id)data;
- (long long)httpContentLength;
- (id)httpContentType;
- (id)httpInputStream;
- (id)initWithData:(id)arg1 contentType:(id)arg2;
- (void)setData:(id)arg1;
- (void)setHttpContentType:(id)arg1;

@end
