
@interface CKRecordObserverManager : NSObject <CKRecordObservable> {
    NSObject<OS_dispatch_queue> * _queue;
    NSMapTable * _recordObservers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)addRecordObserver:(id)arg1 block:(id /* block */)arg2;
- (void)handleRecordChange:(id)arg1 container:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (void)removeRecordObserver:(id)arg1;

@end
