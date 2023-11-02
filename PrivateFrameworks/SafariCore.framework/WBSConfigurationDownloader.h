
@interface WBSConfigurationDownloader : NSObject {
    NSURL * _baseURL;
    NSURLSessionDataTask * _dataTask;
    NSString * _fileName;
    bool  _isCancelled;
    WBSConfigurationDataTransformer * _transformer;
}

+ (id)new;

- (void).cxx_destruct;
- (void)cancel;
- (void)downloadConfigurationWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithFileName:(id)arg1 dataTransformer:(id)arg2;

@end
