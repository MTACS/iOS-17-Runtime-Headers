
@interface DSKeychainPersistence : NSObject {
    NSObject<OS_dispatch_queue> * _clientQueue;
}

- (void).cxx_destruct;
- (id)initWithQueue:(id)arg1;
- (bool)loadListenerState:(id*)arg1 withError:(id*)arg2;
- (bool)removeListenerState:(id)arg1 withError:(id*)arg2;
- (bool)saveListenerState:(id)arg1 withError:(id*)arg2;

@end
