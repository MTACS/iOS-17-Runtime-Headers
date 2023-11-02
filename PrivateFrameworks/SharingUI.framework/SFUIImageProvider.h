
@interface SFUIImageProvider : NSObject {
    NSObject<OS_dispatch_queue> * _fetchQueue;
    NSCache * _imageCache;
    int  _nextRequestID;
    NSMutableDictionary * _requestsForIdentifier;
    NSMutableDictionary * _requestsForRequestID;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *fetchQueue;
@property (nonatomic, readonly) NSCache *imageCache;
@property (nonatomic, readonly) NSMutableDictionary *requestsForIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *requestsForRequestID;

- (void).cxx_destruct;
- (void)cancelImageRequest:(int)arg1;
- (void)deliverImage:(id)arg1 identifier:(id)arg2 placeholder:(bool)arg3 error:(id)arg4;
- (id)fetchQueue;
- (id)imageCache;
- (id)init;
- (int)nextRequestID;
- (id)requestsForIdentifier;
- (id)requestsForRequestID;
- (void)scheduleImageRequest:(id)arg1;

@end
