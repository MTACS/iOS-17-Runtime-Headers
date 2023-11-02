
@interface ACM2SVHTTPImageDownloadHandler : ACCHTTPHandler

+ (id)handlerWithURLString:(id)arg1;

- (void)downloadImageWithCompletionBlock:(id /* block */)arg1;
- (id)initWithURLString:(id)arg1;

@end
