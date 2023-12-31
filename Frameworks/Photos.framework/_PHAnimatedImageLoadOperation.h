
@interface _PHAnimatedImageLoadOperation : NSOperation {
    PHAnimatedImage * _animatedImage;
    NSURL * _animatedImageURL;
    long long  _cacheStrategy;
    bool  _useSharedImageDecoding;
}

@property (retain) PHAnimatedImage *animatedImage;

+ (id)_animatedImageSharedLoadingQueue;
+ (id)_inq_animatedImageLoadingOperations;
+ (void)_registerOperation:(id)arg1 forRequestID:(long long)arg2;
+ (id)_removeOperation:(long long)arg1;
+ (id)_requestIsolationQueue;
+ (long long)nextRequestID;

- (void).cxx_destruct;
- (id)animatedImage;
- (id)initWithURL:(id)arg1 cachingStrategy:(long long)arg2 useSharedDecoding:(bool)arg3;
- (void)main;
- (void)setAnimatedImage:(id)arg1;

@end
