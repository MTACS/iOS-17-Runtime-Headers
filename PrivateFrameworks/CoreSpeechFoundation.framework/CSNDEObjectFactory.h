
@interface CSNDEObjectFactory : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void**)createNDEObject:(id)arg1;
- (void)destoryNDEObject:(void**)arg1;
- (id)init;
- (id)queue;
- (void)setQueue:(id)arg1;

@end
