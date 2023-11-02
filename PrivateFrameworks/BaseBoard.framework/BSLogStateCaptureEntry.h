
@interface BSLogStateCaptureEntry : NSObject {
    id /* block */  _captureBlock;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _title;
}

@property (nonatomic, readonly, copy) id /* block */ captureBlock;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id /* block */)captureBlock;
- (id)queue;
- (id)title;

@end
