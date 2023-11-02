
@interface CHSynchronizable : NSObject <CHSynchronizable> {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)execute:(id /* block */)arg1;
- (void)executeSync:(id /* block */)arg1;
- (bool)executeSyncWithBOOL:(id /* block */)arg1;
- (id)executeSyncWithResult:(id /* block */)arg1;
- (id)initWithName:(const char *)arg1;
- (id)initWithQueue:(id)arg1;
- (id)queue;

@end
