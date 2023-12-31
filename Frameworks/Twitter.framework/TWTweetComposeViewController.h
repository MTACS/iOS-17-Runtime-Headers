
@interface TWTweetComposeViewController : UIViewController

@property (nonatomic, copy) id /* block */ completionHandler;

+ (bool)canSendTweet;

- (id /* block */)addDownSampledImageDataByProxyWithPreviewImage:(id)arg1;
- (bool)addImage:(id)arg1;
- (bool)addURL:(id)arg1;
- (id /* block */)addURLWithProxyPreviewImage:(id)arg1;
- (id /* block */)completionHandler;
- (id)init;
- (bool)removeAllImages;
- (bool)removeAllURLs;
- (void)setCompletionHandler:(id /* block */)arg1;
- (bool)setInitialText:(id)arg1;
- (void)setLongitude:(double)arg1 latitude:(double)arg2 name:(id)arg3;

@end
