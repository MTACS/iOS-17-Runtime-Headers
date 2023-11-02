
@interface MapsSuggestionsObservers : NSObject <MapsSuggestionsObject> {
    struct Queue { 
        NSObject<OS_dispatch_queue> *_innerQueue; 
        NSString *_name; 
    }  _callbackQueue;
    NSHashTable * _innerObservers;
    NSString * _name;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)callBlock:(id /* block */)arg1;
- (unsigned long long)count;
- (id)description;
- (id)init;
- (id)initWithCallbackQueue:(id)arg1 name:(id)arg2;
- (id)initWithCallbackQueue:(id)arg1 name:(id)arg2 strong:(bool)arg3;
- (id)initWithName:(id)arg1;
- (void)registerObserver:(id)arg1 handler:(id /* block */)arg2;
- (bool)synchronouslyCallBlock:(id /* block */)arg1;
- (id)uniqueName;
- (void)unregisterObserver:(id)arg1 handler:(id /* block */)arg2;

@end
