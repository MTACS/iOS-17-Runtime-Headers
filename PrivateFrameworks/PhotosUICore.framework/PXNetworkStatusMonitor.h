
@interface PXNetworkStatusMonitor : NSObject {
    NSObject<OS_nw_path_monitor> * _defaultPathMonitor;
    NSObject<OS_dispatch_queue> * _queue;
    NSMapTable * _queue_observers;
    struct { 
        unsigned long long type; 
        bool isConstrained; 
        bool isExpensive; 
    }  queue_bestAvailableNetworkType;
}

@property (readonly) struct { unsigned long long x1; bool x2; bool x3; } bestAvailableNetworkType;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_queue_handlePathUpdate:(id)arg1;
- (void)_queue_notifyObserversOfBestAvailableNetworkType:(struct { unsigned long long x1; bool x2; bool x3; })arg1;
- (struct { unsigned long long x1; bool x2; bool x3; })bestAvailableNetworkType;
- (id)init;
- (void)registerObserver:(id)arg1 queue:(id)arg2;

@end
