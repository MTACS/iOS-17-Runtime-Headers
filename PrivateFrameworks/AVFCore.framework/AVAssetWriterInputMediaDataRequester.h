
@interface AVAssetWriterInputMediaDataRequester : NSObject {
    NSObject<OS_dispatch_queue> * _ivarAccessQueue;
    id /* block */  _requestBlock;
    NSObject<OS_dispatch_queue> * _requestQueue;
    AVWeakReference * _weakReferenceToDelegate;
}

@property <AVAssetWriterInputMediaDataRequesterDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *requestQueue;

- (void)_collectUncollectables_invokedFromDeallocAndFinalize;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithRequestQueue:(id)arg1 requestBlock:(id /* block */)arg2;
- (void)requestMediaDataIfNecessary;
- (id)requestQueue;
- (void)setDelegate:(id)arg1;

@end
