
@interface CPSImageDownloader : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _requests;
}

- (void).cxx_destruct;
- (void)_downloadImageWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)downloadImageWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;

@end
