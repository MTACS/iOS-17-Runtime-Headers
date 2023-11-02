
@interface FSSimpleItem : FSItem {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)queue;

@end
