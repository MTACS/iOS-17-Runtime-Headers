
@interface AAUIImageFetcher : NSObject {
    NSURLSession * _urlSession;
}

+ (id)sharedImageFetcher;

- (void).cxx_destruct;
- (id)_urlSession;
- (void)fetchImageAtURL:(id)arg1 completionHandler:(id /* block */)arg2;

@end
