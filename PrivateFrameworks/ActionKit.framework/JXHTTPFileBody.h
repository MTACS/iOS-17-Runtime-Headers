
@interface JXHTTPFileBody : NSObject <JXHTTPRequestBody> {
    NSString * _filePath;
    NSString * _httpContentType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *filePath;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *httpContentType;
@property (readonly) Class superclass;

+ (id)withFilePath:(id)arg1;
+ (id)withFilePath:(id)arg1 contentType:(id)arg2;

- (void).cxx_destruct;
- (id)filePath;
- (long long)httpContentLength;
- (id)httpContentType;
- (id)httpInputStream;
- (id)initWithFilePath:(id)arg1 contentType:(id)arg2;
- (void)setFilePath:(id)arg1;
- (void)setHttpContentType:(id)arg1;

@end
