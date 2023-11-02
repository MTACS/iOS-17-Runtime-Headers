
@interface NSXPCStoreNotificationObserver : NSObject {
    NSPersistentStoreCoordinator * _psc;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _storeID;
    int  _token;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initForObservationWithName:(id)arg1 store:(id)arg2;

@end
