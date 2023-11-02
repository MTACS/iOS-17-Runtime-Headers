
@interface QLThumbnailServiceProxy : NSObject {
    NSXPCConnection * _connection;
    NSObject<QLThumbnailAdditionIndexInterface> * _indexProxy;
    NSObject<QLThumbnailsInterface> * _proxy;
}

+ (id)interface;
+ (id)sharedInstance;
+ (id)sharedInstanceWithError:(id*)arg1;

- (void).cxx_destruct;
- (void)askThumbnailAdditionIndex:(id /* block */)arg1;
- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)indexProxy;
- (id)initWithError:(id*)arg1;
- (void)touchOrAddThumbnailAddition:(id)arg1 forURL:(id)arg2;
- (void)updateLastHitDateOfAddition:(id)arg1 onPhysicalURL:(id)arg2;

@end
