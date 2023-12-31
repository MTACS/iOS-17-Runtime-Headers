
@interface FCCacheCoordinatorGCDSerialLock : NSObject <FCCacheCoordinatorLocking> {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (void)performReadSync:(id /* block */)arg1;
- (void)performWriteSync:(id /* block */)arg1;

@end
