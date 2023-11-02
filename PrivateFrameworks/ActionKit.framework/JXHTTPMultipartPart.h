
@interface JXHTTPMultipartPart : NSObject {
    NSData * _contentData;
    NSString * _key;
    int  _multipartType;
    NSData * _postData;
    NSData * _preData;
}

@property (nonatomic, retain) NSData *contentData;
@property (nonatomic, retain) NSString *key;
@property (nonatomic) int multipartType;
@property (nonatomic, retain) NSData *postData;
@property (nonatomic, retain) NSData *preData;

+ (id)withMultipartType:(int)arg1 key:(id)arg2 data:(id)arg3 contentType:(id)arg4 fileName:(id)arg5 boundary:(id)arg6;

- (void).cxx_destruct;
- (id)contentData;
- (long long)contentLength;
- (long long)dataLength;
- (id)filePath;
- (id)key;
- (unsigned long long)loadMutableData:(id)arg1 withDataInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (int)multipartType;
- (id)postData;
- (id)preData;
- (void)setContentData:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setMultipartType:(int)arg1;
- (void)setPostData:(id)arg1;
- (void)setPreData:(id)arg1;

@end
