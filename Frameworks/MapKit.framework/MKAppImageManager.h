
@interface MKAppImageManager : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate, NSURLSessionTaskDelegate> {
    NSMapTable * _containers;
    geo_isolater * _containersLock;
    NSCache * _iconCache;
    NSURLSession * _session;
    NSMutableDictionary * _urlConnections;
    geo_isolater * _urlConnectionsLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedCollectionCoverImageManager;
+ (id)sharedImageManager;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)_dispatchOnManThread:(id /* block */)arg1;
- (id)cachedImageAtURL:(id)arg1;
- (void)cancelLoadAppImageAtURL:(id)arg1;
- (void)clearImageCache;
- (id)init;
- (id)initWithURLCache:(id)arg1;
- (void)loadAppImageAtURL:(id)arg1 completionHandler:(id /* block */)arg2;

@end
