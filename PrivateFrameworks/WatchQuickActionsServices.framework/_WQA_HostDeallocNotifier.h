
@interface _WQA_HostDeallocNotifier : NSObject {
    <WatchQuickActionHostObserver> * _hostObserver;
}

@property (nonatomic) <WatchQuickActionHostObserver> *hostObserver;

- (void).cxx_destruct;
- (void)dealloc;
- (id)hostObserver;
- (void)setHostObserver:(id)arg1;

@end
