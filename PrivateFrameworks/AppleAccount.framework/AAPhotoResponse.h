
@interface AAPhotoResponse : AAResponse {
    NSValue * _cropRect;
    NSData * _photoData;
    NSString * _serverCacheTag;
}

@property (nonatomic, readonly) NSValue *cropRect;
@property (nonatomic, readonly) NSData *photoData;
@property (nonatomic, readonly) NSString *serverCacheTag;

- (void).cxx_destruct;
- (id)cropRect;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (id)photoData;
- (id)serverCacheTag;

@end
