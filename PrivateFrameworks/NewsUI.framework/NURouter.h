
@interface NURouter : NSObject <NURouter> {
    <NUURLHandling> * _urlHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <NUURLHandling> *urlHandler;

- (void).cxx_destruct;
- (id)initWithURLHandler:(id)arg1;
- (void)routeToNewsAppForYouFeed;
- (id)urlHandler;

@end
